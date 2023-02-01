create table NHACUNGCAP(
   MaNhaCC varchar(30) primary key ,
   TenNhaCC varchar(255) not null,
   DiaCHi text not null,
   SoDT varchar(11) not null unique,
   MaSoThue int not null
);
create table LOAIDICHVU(
  MaLoaiDV varchar(30) primary key ,
  Tenloaidichvu text not null
);
create table DONGXE(
   DongXe varchar(30) primary key,
   Hangxe text not null,
   SoChoNgoi int not null check(Sochongoi >1)
);
create table MUCPHI(
   MaMucPhi varchar(30) primary key,
   DonGia decimal(12,4) not null check(DonGia >= 0),
   MoTa varchar(255)
);
create table DANGKYCUNGCAP(
   MaDKCC varchar(30) primary key,
   NHACUNGCAP_MaNhaCC varchar(30) not null foreign key references NHACUNGCAP(MaNhaCC),
   LOAIDICHVU_MaloaiDV varchar(30) not null foreign key references LOAIDICHVU(MaLoaiDV),
   DONGXE_DongXe varchar(30) not null foreign key references DONGXE(DongXe),
   MUCPHI_MaMucPhi varchar(30) not null foreign key references MUCPHI(MaMucPhi),
   Ngaybatdaucungcap datetime not null check (Ngaybatdaucungcap <= getdate()),
   Ngayketthuccungcap datetime not null check (Ngayketthuccungcap <= getdate()),
   Soluongxedangky varchar(20) not null
);