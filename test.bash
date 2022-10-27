#!/bin/bash
# SPDX-FileCopyrightText: 2022 Ibuki Saito <s21c1050gb@s.chibakoudai.jp>
# SPDX-License-Identifier: BSD-3-Clause
ng(){
	echo NG at line $1
	res=1
}

res=0

###I/O TEST###
out=$(seq 5 | ./plus)
[ "${out}" = 15 ] || ng ${LINENO}

[ "$res" = 0 ] && echo OK

exit $res



