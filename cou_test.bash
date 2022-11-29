#!/bin/bash -xv
# SPDX-FileCopyrightText: 2022 Ibuki Saito <s21c1050gb@s.chibakoudai.jp>
# SPDX-License-Identifier: BSD-3-Clause
ng(){
	echo NG at line $1
	res=1
}

res=0

###I/O TEST###
out=$(./country_time america)
in=$(date -d '14 hours ago' '+%T')
[ "${out}" = "${in}" ] || ng ${LINENO}

out=$(./country_time india)
[ "${out}" = 'Not Implement' ] || ng ${LINENO}

out=$(./country_time あ)
[ "${out}" = 'Not Implement' ] || ng ${LINENO}

[ "$res" = 0 ] && echo OK

exit $res

