select
top 50
  test.abc as test,
  test.def as test2
  from test as b
  inner join abc as c on (a = b)
where
a = 5;

update
test
set
  a.b = 'aaa'
where
  citn is null;
