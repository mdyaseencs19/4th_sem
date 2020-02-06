create table person(driver_id varchar(10),
name varchar(20),
address varchar(30),
primary key(driver_id));

desc person;

create table car(reg_num varchar(10),model varchar(10),year int,primary key(reg_num));

desc car;

create table accident(report_num int,accident_date date,location varchar(30),primary key(report_num));

desc accident;

create table owns(driver_id varchar(10),reg_num varchar(10),primary key(driver_id,reg_num),foreign key(driver_id)references person(driver_id),
foreign key(reg_num)references car(reg_num));

desc owns;
desc participated;

commit;
desc person;
insert into person values('&driver_id','&name','&address');
select * from PERSON;
desc car;

insert into CAR values('&reg_num','&model','&year');
select * from CAR;

desc ACCIDENT;

insert into accident values('&report_num','&accident_date','&location');

select * from ACCIDENT;
update ACCIDENT set report_num = 111 where report_num = 1;

desc owns;

insert into owns values('&driver_id','&reg_num');
select * from owns;

desc participated;

insert into participated values('&driver_id','&reg_num','&report_num','&damage_amount');

select * from PARTICIPATED

select * from participated
order by damage_amount;
commit;

select avg(damage_amount) from participated;
delete from participated where damage_amount<avg(damage_amount);

delete from participated
where damage_amount < 14897.2;

select * from participated;

SELECT name from person,participated
where damage_amount > 14897.2, driver_id = driver_id;
select * from car;
select * from accident;
select max(damage_amount) from participated;

update participated set damage_amount = 25000 where reg_num = 'KA057894' and report_num = 112;
select count(distinct driver_id) CNT from participated a, accident b where
a.report_num=b.report_num and b.accident_date like '%14';

 select count(report_num) CNT from car c,participated p where c.reg_num=p.reg_num and
model='BMW';