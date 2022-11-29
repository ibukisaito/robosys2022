#!/bin/bash -xv
# SPDX-FileCopyrightText: 2022 Ibuki Saito <s21c1050gb@s.chibakoudai.jp>
# SPDX-License-Identifier: BSD-3-Clause
ng(){
	echo NG at line $1
	res=1
}

res=0

###I/O TEST###
out=$(echo america | ./country_time)
in=$(date -d '14 hours ago' '+%T')
[ "${out}" == "${in}" ] || ng ${LINENO}

out=$(echo india | ./country_time)
[ "${out}" == 'Not Implement' ] || ng ${LINENO}

out=$(echo あ | ./country_time)
[ "${out}" == 'Not Implement' ] || ng ${LINENO}

[ "$res" = 0 ] && echo OK

exit $res

