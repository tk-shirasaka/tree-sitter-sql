-- test select
select
top 50
  test.abc as test,
  test.abc as test2,
  test.def as test3
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
test AS a
set
  a.b = 'aaa'
where
  citn is null OR
  (
    abc BETWEEN 1 AND 500 AND
    def IN(5, ghr)
  );
