-- Create table
create table emp
(
    id int PRIMARY KEY,
    name varchar(20)
);

-- insert into
insert into emp
    (id, name)
values(1, 'Ankit');

insert into emp
    (id, name)
values(2, 'Raj');

-- select *
select *
from emp;

-- update 
update emp
set name = 'Dev'
where id = 2;

select *
from emp;

-- order by
select name
from emp
order by name DESC;

-- distinct, is null, is not null
select distinct name
from emp
where name is not null;

-- count
select count(distinct name)
from emp;

-- count all entries
select count(*) from emp;

-- delete rows
delete from emp where id = 2;

-- delete whole table
delete from emp;
drop table emp;

insert into emp
    (id, name)
values(3, 'Rahul');

select *
from emp
where id % 2 = 0;

-- the top x entries only

-- SQL SERVER & MSSQL
select top 2 * from emp;

-- MYSQL
-- select * from emp limit 2;

-- sum with experssions
select sum(id * 2) from emp;

-- Average
select avg(id) from emp;

-- like keyword for pattern matching
select name from emp where name like '_a%'; -- xaxxxx
select name from emp where name like 'a%' or name like '%a'; -- axx, xxa

-- ending with any vowel, occurence of either char from list 
select name from emp where name like '%[aeiou]'; -- xxx[aeiou]

-- ocuurence of any char except these from list
select name from emp where name like '%[^aeiou]%'; -- xxx[aeiou]

-- 'in' used for select from a list, replacement of multi ORs
select * from emp where name in ('ankit', 'sahil', 'dheeraj');
select * from emp where name not in ('ankit', 'sahil', 'dheeraj');


-- used in suquery from two diffrent table, all the customers who have made any orders
-- select * from customer_table where customer_id in (select customer_order_id from customers_orders)

-- between, inclusive default
select product, price from product where price (between 500 and 100) and (id in (select id from product where item = 'shirt'))



