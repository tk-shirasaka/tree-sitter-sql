-- test select
select
top 50
  test.abc as test,
  test.def as test2
  from test as b
  inner join abc as c on (a = b)
where
  test.abc = 5
GROUP BY
  test.def,
  ghi
HAVING
  count(1) = 1
ORDER BY
  test.abc,
  def asc,
  test.ghr desc

/*
 * test update
 */
update
test
set
  a.b = 'aaa'
where
  citn is null;
