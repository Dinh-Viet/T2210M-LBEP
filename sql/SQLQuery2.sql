create table NHACUNGCAP(
   MaNhaCC varchar(10) primary key ,
   TenNhaCC varchar(255) not null,
   DiaCHi text not null,
   SoDT varchar(11) not null unique,
   MaSoThue int not null
);
create table LOAIDICHVU(
  MaLoaiDV varchar(10) primary key ,
  Tenloaidichvu text not null
);
create table DONGXE(
   DongXe varchar(30) primary key,
   HangXe varchar(30) not null,
   SoChoNgoi int not null check(Sochongoi >1)
);
create table MUCPHI(
   MaMP varchar(10) primary key,
   DonGia decimal(12,4) not null check(DonGia >= 0),
   MoTa varchar(255)

);
create table DANGKYCUNGCAP(
   MaDKCC varchar(10) primary key,
   MaNhaCC varchar(10) not null foreign key references NHACUNGCAP(MaNhaCC),
   MaloaiDV varchar(10) not null foreign key references LOAIDICHVU(MaLoaiDV),
   DongXe varchar(30) not null foreign key references DONGXE(DongXe),
   MaMP varchar(10) not null foreign key references MUCPHI(MaMP),
   Ngaybatdaucungcap datetime not null check (Ngaybatdaucungcap <= getdate()),
   Ngayketthuccungcap datetime not null check (Ngayketthuccungcap <= getdate()),
   Soluongxedangky varchar(20) not null
);
/* Nhà cung cấp1 */
insert into NHACUNGCAP(MaNhaCC,TenNhaCC,DiaCHi,SoDT,MaSoThue)
values ('NCC001','Cty TNHH Toàn Pháp','Hai Chau','05113999888','568941'),
('NCC002','Cty Cổ phần Đông Du','Lien Chieu','05113999889','568942'),
('NCC003','Ông Nguyễn Văn An','Hoa Thuan','05113999890','568943'),
('NCC004','Cty Cổ phần toàn cầu xanh','Thanh Khe','05113999891','568944'),
('NCC005','Cty TNHH AMA','Thanh Khe','05113999892','568945'),
('NCC006','Bà Trần Thị Bích Vân','Lieu Chieu','05113999893','568946'),
('NCC007','Cty TNHH Phan Thành','Thanh Khe','05113999894','568947'),
('NCC008','Ông Phan Đình Nam','Hoa Thuan','05113999895','568948'),
('NCC009','Tập đoàn Đông Nam Á ','Lien Chieu','05113999896','568949'),
('NCC010','Cty Cổ phần Rạng Đông','Lien Chieu','05113999897','568950');

select * from NHACUNGCAP;
/*Loại Dịch vụ 2*/
insert into LOAIDICHVU(MaLoaiDV,Tenloaidichvu)
values ('DV01','Dịch Vụ Xe taxi'),
('DV02','Dịch Vụ Xe buýt công cộng theo tuyến cố định'),
('DV03','Dịch Vụ Xe cho thuê theo hợp đồng');

select * from LOAIDICHVU;
/*Loại Dòng xe 3*/
insert into DONGXE(DongXe,Hangxe,SoChoNgoi)
values ('Hiace','Toyota','16'),
('Vios','Toyota','5'),
('Escape','Ford','5'),
('Cerato','KIA','7'),
('Forte','KIA','5'),
('Starex','Huyndai','7'),
('Grand-i10','Huyndai','7');

select * from DONGXE;
/*Mức phí 4*/
insert into MUCPHI(MaMP,DonGia,MoTa)
values ('MP01','10.000','Áp dụng từ 1/2015'),
('MP02','15.000','Áp dụng từ 2/2015'),
('MP03','20.000','Áp dụng từ 1/2010'),
('MP04','25.000','Áp dụng từ 2/2011');

select * from MUCPHI;
/*DK cung cấp 5 */
insert into  DANGKYCUNGCAP(MaDKCC,MaNhaCC,MaloaiDV,DongXe,MaMP,
Ngaybatdaucungcap,Ngayketthuccungcap,Soluongxedangky)

values('DK001','NCC001','DV01','Hiace','MP01','2015-11-20','2016-11-20',3),
('DK002','NCC002','DV02','Vios','MP02','2015-12-20','2016-12-20',3),
('DK003','NCC003','DV03','Escape','MP03','2015-10-20','2016-10-20',5),
('DK004','NCC005','DV01','Cerato','MP04','2014-11-20','2017-11-20',7),
('DK005','NCC002','DV02','Forte','MP03','2013-11-20','2019-11-20',1),
('DK006','NCC004','DV03','Starex','MP04','2014-11-20','2015-11-20',2),
('DK007','NCC005','DV01','Cerato','MP03','2012-11-20','2015-11-20',8),
('DK008','NCC006','DV01','Vios','MP02','2010-11-20','2019-11-20',9),
('DK009','NCC005','DV03','Grand-i10','MP02','2013-11-20','2015-11-20',10),
('DK010','NCC006','DV01','Forte','MP02','2012-11-20','2015-11-20',4),
('DK011','NCC007','DV01','Forte','MP01','2014-11-20','2019-11-20',5),
('DK012','NCC007','DV03','Cerato','MP01','2018-11-20','2019-11-20',6),
('DK013','NCC003','DV02','Cerato','MP01','2019-11-20','2020-11-20',8),
('DK014','NCC008','DV02','Cerato','MP01','2011-11-20','2019-11-20',1),
('DK015','NCC003','DV01','Hiace','MP02','2012-11-20','2015-11-20',6),
('DK016','NCC001','DV03','Grand-i10','MP02','2013-11-20','2014-11-20',8),
('DK017','NCC002','DV03','Cerato','MP03','2014-11-20','2019-11-20',4),
('DK018','NCC008','DV03','Escape','MP04','2015-11-20','2017-11-20',2),
('DK019','NCC003','DV03','Escape','MP03','2016-11-20','2018-11-20',8),
('DK020','NCC002','DV03','Cerato','MP04','2013-11-20','2019-11-20',7),
('DK021','NCC006','DV01','Forte','MP03','2014-11-20','2015-11-20',9),
('DK022','NCC003','DV02','Cerato','MP04','2012-11-20','2015-11-20',6),
('DK023','NCC002','DV01','Forte','MP03','2013-11-20','2019-11-20',5),
('DK024','NCC003','DV03','Forte','MP04','2014-11-20','2015-11-20',8),
('DK025','NCC003','DV03','Hiace','MP02','2012-11-20','2015-11-20',1);

select * from DANGKYCUNGCAP;


/* bài tập*/

--Câu 3 
select * from DONGXE where SoChoNgoi >5;
 
--Câu 4
select * from NHACUNGCAP where MaNhaCC in
(select distinct MaNhaCC from DANGKYCUNGCAP where DongXe in
 ( select DongXe from DongXe where Hangxe = 'Toyota') and 
  MaMP in(select MaMP from MUCPHI where DonGia = 15)
  or DongXe in (select DongXe from DONGXE where Hangxe = 'Kia')
  and MaMP in (select MaMP from MUCPHI where DonGia = 20))

--Câu 5
select * from NHACUNGCAP order by TenNhaCC asc, MaSoThue desc;

-- Câu 6
select * from NHACUNGCAP join(
select MaNhaCC, count(MaDKCC) as Soluongxedangky
from DANGKYCUNGCAP
where Ngaybatdaucungcap = '2015-11-20'
group by MaNhaCC
 )sl
on NHACUNGCAP.MaNhaCC = sl.MaNhaCC;

-- Câu 7
select distinct HangXe from DONGXE;

-- Câu 8
select NCC.MaNhaCC,MaDKCC,TenNhaCC,DiaChi,MaSoThue,Tenloaidichvu,DonGia,HangXe,Ngaybatdaucungcap,Ngayketthuccungcap 
from NHACUNGCAP NCC

   inner join DANGKYCUNGCAP DKCC
         on DKCC.MaNhaCC = NCC.MaNhaCC

   inner join LOAIDICHVU LDV
         on DKCC.MaloaiDV =  LDV.MaLoaiDV

   inner join DONGXE DX
         on DKCC.DongXe = DX.DongXe

   inner join MUCPHI MP
         on DKCC.MaMP = MP.MaMP    

-- Câu 9
select * from DANGKYCUNGCAP where DongXe = 'Hiace' or DongXe = 'Cerato'

-- Câu 10
SELECT * FROM NHACUNGCAP
WHERE MaNhaCC NOT IN (SELECT MaNhaCC FROM DANGKYCUNGCAP)