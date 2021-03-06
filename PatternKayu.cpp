#include "PatternKayu.h"
#include <iostream>
/* GIMP RGB C-Source image dump (elenulin.c) */

static const struct {
  unsigned int   width;
  unsigned int   height;
  unsigned int   bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char  pixel_data[64 * 43 * 3 + 1];
} gimp_image = {
  64, 43, 3,
  ":=DJOUSUZTY]`bhW[_w{\201\17\16\17|\203\213hkpuv}ddk\212\215\222\205\206\212"
  "-.0KLQz}\202~\201\207`bfyz~vw{\177\177\202\0\0\0\216\216\221~~\200\200\200"
  "\200||}\204\204\206\226\226\230`^_\6\5\6\202\200\203ecflkpxw|{{}klmJJNZZ"
  "YVTZyvtnjhpnovvzghn?>DUW[uutVVX]]___cvw{||\202\205\212\220\\]auvzuvyhjj`"
  "abont453NPVVW\\UVZABJNQVMPUVX][`c]^`{{\201\20\20\21sw{QRWefj\\_f\206\212"
  "\215z{\177677@AE|}\201\201\202\206qrv\200\201\205rsw\203\203\207\10\7\7\224"
  "\223\226\177\177\201\206\205\207\216\214\216\201\201\203\241\241\237jjh\10"
  "\10\6\207\203\205_`b{{}qnq\201\201\203]]`]_feegZZ]usuvsonlnaactsu***fglY"
  "W]ZZ\\UTYbbdqrt\177\177\203oqn]^blmqcdfeegfgk{{\177685SU\\X[bQSWMNWVY]TV"
  "\\Z]bcgl]^aosz\26\25\32kindej]`eyz\177|}\201\203\204\210++,DDF}}\200uvzl"
  "mp\205\204\207nmp\206\206\211\16\17\15\221\221\221\201\202\203\200\200\177"
  "\215\215\215\211\206\207\234\231\232a_[\21\21\24\220\211\207[YZoos]\\asr"
  "vppr\\\\^\200}{\207\205\200\213\207\204{tr\210\206\205|y{nnp223ooqghjWV["
  "hhjlll|~}xzzikijkolmodeikkliij\203\205\210341WY^Z\\`TUY^`ljntRVY]`fklmop"
  "phlp!\40(opt_`e_`exy}\201\202\206\203\203\205'&+@?B\177\177\201poqhfl\200"
  "\177\203lln\206\206\206\24\23\23\216\214\215\206\204\205\205\204\205\213"
  "\211\212\204\203\204\245\245\245wvv\24\24\22mknXXZssutuv\203\203\205poud"
  "cdllmoqm\231\225\224\202~}\217\213\211~zyuvu%%&sqrooottvssr}}zsusqrvfhc_"
  "`doptrrtrrpnnp\177\202\20102/XY]]^cZ[`Y[fdgpUX]bdidilkkpy~\177\22\21\24g"
  "hjJKPcdhxy}\204\205\207\177\200\201''*BBB\202\202\204qpr||\200||~\177\177"
  "\200\211\211\211\24\24\23\207\207\207\204\204\204\201\200\177\215\213\214"
  "\207\206\206\241\241\242\220\220\221\20\17\13pno^\\]ust\211\207\210\230\225"
  "\226pnqecgiiittu\227\222\215rqr\177\177\177\203\202\202ttt@ABxuwtut||{jj"
  "lxxv{{|kjmQTOklpabgkkkmmmuuu\202\205\206())]_aqrvgimXZfZ]aZ]bbfhimprswfg"
  "h--2\\^]XY_abgstx\204\206\205\200\201\202+*.LJJ\201\201\203z{~|}\202xx{y"
  "y{\204\204\205\12\11\12\214\214\215\205\203\203\177~}\217\215\215\205\204"
  "\202\215\214\216\211\211\213\21\20\16wusnlmnlm\210\206\207\247\245\251om"
  "naachif\200~\201}{|}|\201rps\201\177\200wxw@?A\207\203\201rqo{xzomn\201\177"
  "\200\210\211\205z{~<><_`cjkmpprzzyuuwxzy011hghyy|lmq^ai[^cUX]]]aorsjkmff"
  "f./5OPTjjnqrvzz|wvz\212\212\211..2NNP\207\210\212||\177\206\206\212www\200"
  "\200\177~~~\24\23\23\223\221\222|z{\203\201\202\220\216\220\215\212\213\221"
  "\220\220\207\207\210\12\11\11\212\201zusuxwu}ww\225\223\224ighljkhgd|}}~"
  "{|tutnlmrps{yxJJK\221\220\212xvw\203\203\202ttwooo\206\205\210\202\204\203"
  "432efjy{ywyxuvxlmowww335kll||~ssvpq{cdh\\_d^^blmorswiki98>`_dlmqooq\205\206"
  "\212zz~\202\202\202**.aab\206\206\210\207\207\206}}|rrq\200\200\201\211\211"
  "\211\32\32\31\222\222\221\206\204\205\213\212\212\221\217\221\210\210\207"
  "\262\257\254\222\221\223\25\22\20upmxvtust\205\203\206\217\215\221hcb\177"
  "~\200ida\203\200\202\213\211\212wvxkhi}||xxyNNP\212\210\202mjhzz}zz|bbb\\"
  "^b\207\206\207...kknqrs||}{{}jkmuvt223fginorqqs}\200\205\\]adej`aenosnoq"
  "ggeBAHgglyy{\201\201\203\205\205\207||~\203\203\202&%)ggi}}\200\213\213\213"
  "wwwttt\204\203\206\200\200\201\27\27\27\220\217\221\200\200\201\214\212\212"
  "\220\217\215\214\215\214\205\202\204\217\213\214\13\13\13\216\207\204~|z"
  "nnn\212\210\211\231\227\227pno}{|[UO\204\202\200\225\224\225\203{{slo\202"
  "\200\201nonNMQ{rjzxy~\177~~~~dde\201\201\201\214\214\212\35\35\35ssuttvu"
  "uvrrt{{||{\200)(-dddaafmnpwx}YYZ_]ckoropsstyZ]Z?>Eb^^tsszy~\202\203\207\211"
  "\211\213\205\205\202$$(uutttt\206\206\207yyxvvv\205\205\206\211\211\212\35"
  "\35\36\222\222\224\203\202\204\217\215\216\205\203\204\241\237\236\210\206"
  "\210|z}\5\5\5\201{xusrrpq{yz\224\222\223mkl\200\177\177eSF\211\206\203\226"
  "\223\223}zxiefxvytrsRQTqnh\207\205\207qqq|||uuw\200~\177\221\220\225\27\26"
  "\30\212\212\211\177~\177vvvxxx~~\177uuy106YZX_`ciimsu\177^^`]\\aopt`af|}"
  "\200PVSHGMxw{fccqqs\207\206\213\201\201\201\204\204\206..1{zvnmn\202\201"
  "\202\200\200\201yxz\205\205\206\211\211\210&&%\232\232\234\213\212\214\214"
  "\212\214\232\232\233\212\212\212\215\215\215uuw\10\10\10\211\177|zxzljkv"
  "tw\221\217\222jhk\214\210\211dVO\211\205\205\210\205\204~xxqml{y{}{{bbc~"
  "yq~~~qqqwtvpqpxvw\202\202\202#\"&zzz~~}vvviii||{nnq65<UVTopteeirsydcgqrv"
  "jkoefjyy{sxx\\[c\200\177\203mmqiij}|\201~~}\221\221\223**,nmmlll\204\204"
  "\204\204\203\204\204\203\204\203\203\203\202\203\201\26\26\27\235\235\237"
  "\230\226\231\230\227\227\217\216\214~|}\244\237\235\202\201\203\34\34\34"
  "vroqmmsqr\203\201\202\210\204\205qlo\220\216\221\\WU\210\205\202\215\212"
  "\211{wvqmn\200\177\177yyukjhwrk\201\201\201vvvust{yzvvv\207\205\206.-2ww"
  "w\202\202\202{{}yx|}}|qqqHGLPQMjjmppsnotfgkijpqqsrswyy{npqUT\\tsyrqva`d\223"
  "\223\225\212\212\212\200\177\200001lklooo\204\204\203\203\203\205\215\213"
  "\215\203\202\203\203\202\200\31\30\31\247\247\251\225\223\226\216\214\216"
  "\200~~\230\226\227\220\217\220\221\215\215\11\11\11plkpiikgf\210\204\204"
  "\210\204\203son\206\202\201TPO\200}y\221\215\215ztq\212\204\206\210\205\203"
  "\202\201\200shhvqf\202\200\202|||vvvxwuoom\220\214\213539vtu|{{\207\207\205"
  "\200\200\200zzzuuuSRWBC?jkmlmqbchdekcbikkmqsw\207\207\207ijj_^fpps|z\177"
  "dch\220\221\225\214\213\214\202\201\20155:mjipno\221\220\220\206\206\207"
  "\216\215\217\201\177\201\214\212\211\33\33\35\233\232\233\216\214\217\225"
  "\223\225\201\177\200\226\224\225\220\216\217\177{|\20\17\15xqolggpnn\204"
  "\200\177rop{yy\203\201\177IIEwvq\221\215\214upmumi\214\210\205\204\203\201"
  "vrsmhc|xx}{|uttpnowuu\213\211\20799<\201\200\177zyx~||rpqwuvvvuXX]JJGllo"
  "notfej]^eaagffjnosvvxSSPfdmggivuykjo\211\211\212\201\201\201vux658kihmln"
  "\216\215\216\216\215\214\210\205\204\210\204\203\216\214\212\35\34\35\250"
  "\245\246\212\211\212\220\216\217\224\222\224\233\231\233\202\200\201kij\15"
  "\15\13}snsmojfgsop\205\203\205plmoqtHIFwrq\227\220\215vpmoii\212\203\203"
  "\203\200~njj\\WRwss~|}zxwusuzzy\216\213\210HFIwvuwuv\201\177\177ihispqvv"
  "ujim231ooqoosihmjjp_`efglabf||\177340iipfeittvjhk\177\177\177\211\210\210"
  "\201\177\2030/4mkkihk\214\213\213~~{vtq\217\215\212\207\206\204\35\35\35"
  "\234\233\231|{z\224\222\223\212\210\212\231\227\231\223\217\220ywx\11\11"
  "\10tokrkjlijwuv\207\203\206upo\211\206\210JFDsmj\227\215\213}yusnp\207\202"
  "\177~|}sooYVQ\202~}\200\177~{zxywx\201\201\177ywsROT\177~{{zy||{wuvvuwvv"
  "tqqsFFCkklnornmrnnsbafghmLMQvwwXXVmmsxw{yyzwuxutu\215\213\214|{\177+,0ws"
  "rxvv\217\214\213\201~{\202\200|\213\212\207\211\210\206\27\26\26\233\233"
  "\233rqq{y|\213\211\214\211\210\213\216\211\212\227\224\223\7\7\7oheuqnus"
  "rsqr\217\213\212wrr\210\205\207E@>tmj\230\216\211~vtyts~zx\177||rpp[VQxv"
  "w~}z\203\203\201www\211\210\204yxvYX^\206\204\203{zx\204\203\203\200~\177"
  "\200\177\177|{y}}~NMJggirsxfekmloedillrhhjmmmBBB}|\201\227\226\232|{\177"
  "yw{\214\212\213\211\210\210\205\203\210*,1\200{x|xy\211\206\205\216\214\211"
  "\212\207\204\201\177}\211\210\206\35\34\35\225\223\223\211\207\212\202\200"
  "\202\231\230\231\211\210\211\203\177~\203\200\200\6\6\5upm\204\177~pomzx"
  "y\207\203\204yut\215\207\210EA>upm\226\214\207vol\203~{{xx{xxwpnSOJsss{y"
  "w\211\204\203qnk|zwxwu[Z`\207\205\204{yw\203\202\201\200~\177\201\200~wu"
  "v}|\177A@<nmnoptmlqhgkgfk`_eyy{YX[DE>ontwwy`_esqv\201\200\201c`c~}\20234"
  ":xsoyvv\207\206\205\206\204\201\206\203\201\206\205\203\213\212\210&%&\231"
  "\227\225\203\202\203\207\205\207\216\214\215\222\220\220SOQutt#!\35\202|"
  "y\204\177}mjiqpo\200|}\177xt\211\203\203OMO\204\200}\217\204\202upl\204~"
  "}\223\213\207xol|utGC>vsszyw|{y\203\200\201zyv|{zpotyxvqopwut{yx\177~~}{"
  "|||\177985srslmqmmqgfkedhgglqpskkmVVQsrvnmputxusx\204\203\204\207\206\205"
  "{z\17768<\206\201\200|yy\177}}}{y\205\204\203\202wq\212\213\211/.0\233\230"
  "\230}z{\210\206\207\201\177\200\234\232\233xxvxww.&\"\211\205\201\177vto"
  "jjyvs\205\201\202she\222\213\212TRS\204\200\177\215\203\177wnm\204\201\177"
  "\224\216\212}rp\204\177}OLJojj||{yvumlk[XXqqntsvussuts~}|srpsop~}}\203\202"
  "\204AB?wvvpqtUTW]\\_jin_[[onqxy|@A<\177}\201ZX\\rqt\177}\202ywx\211\207\211"
  "wuz003yomsmj\202\200\200\216\215\215\212\212\211}xt\206\202\202--.\225\223"
  "\223tqt\203\201\203ust\240\236\237\206}{\221\217\222\40\32\30\211zqwnotn"
  "m{vt}zz\205\201~\227\221\217EA=vrq\212{v}ro\204\200}\222\212\207\213\203"
  "\201\217\207\203GC>pll}||vrsnmlutsoolnlmqmmsrn\200\177}\200~{okl\177}{\206"
  "\206\204FFDutsrrvVUZghl`_d^]aihl~~\177-.)\213\211\215gehonrvux~|}\213\212"
  "\214xw|//2jgbmkl\204\203\204\210\206\207\204\202\202wss\210\204\203/.0\222"
  "\221\221\210\206\210\206\204\206ono\250\246\252\235\233\232\234\230\225\36"
  "\33\33\231\213\203\236\221\212xtttqo{z{\200xw\217\212\211=;8rmk\216\177v"
  "}xu\200||\230\221\217\211\200|\213\200|C>;wsr{zyd`austsrpjjixwxhc_pomvts"
  "\204\204\200\215\214\214\177~|\201\201\177FEErpobbf`_bggl__cedgedjttu++("
  "\205\204\212jhkdbf{{|poq\217\215\216squ%$&fcbrpq\177}~\205\203\204\213\210"
  "\211{xx\202\200\177#$%\231\227\232\215\213\214\212\210\211uuv\244\242\246"
  "\242\237\241\223\217\217\6\6\6\224\216\213\231\217\215nigxwvvtv\202~}\226"
  "\221\217;:8zut\220\203y\201}z\202|}\224\216\215\204zx\215\204\203433zwww"
  "wwyxv\206\204\205ppnmmm|{~_\\U\201\200\177\211\207\207\203~|\212\207\206"
  "\201\200~}|y<<;vurpora_bb`eiikbagkkkyy{\37\40\34\217\216\224kionkoyxzyxz"
  "\212\211\213hgm\37\37\40db`olnrpr\203\201\201\206\204\204{yz}|{\"!\"\230"
  "\227\232\204\202\204\213\211\212\210\206\207\226\224\227\242\240\242\230"
  "\222\224\6\6\6\231\224\221\212\205\202{pmhghwuu\216\210\210\222\214\214/"
  "--}xu\234\221\213~yw\205~\200\221\212\210\202xw\226\217\21330.\205\203\205"
  "vuv\214\213\215\213\211\212pjjtrsxwyssj\202\201\201\211\210\206\217\213\207"
  "\212\205\201\177~z|zv334omlmmoggk[Y^dchfejjjizzz\40!\36\223\222\230mlqpm"
  "osss~~~\206\206\206vuy\32\31\32geemklsqs\206\203\202\221\215\213yvt\177~"
  "|(((\224\221\223\202\200\201\212\210\211\217\214\215\215\213\215\234\232"
  "\230\217\212\211\5\5\3\205\202}\214\205\203\205xslhg|xw\203~}\217\212\206"
  "+)'~yw\211~w\177zz\201zz\217\212\210}ut\216\212\207854sqt\202\201\201\203"
  "\201\202\216\215\213qopzxywvyee[\207\206\204\207\206\204vqm\201~{{yx}|z9"
  "99sqpmmncbg[Z_fejkjpmmlsss\40!\35\213\212\220igjqpr{{{\177\177\177\223\222"
  "\222wtw!\40#_]^kij}zz\201~z\220\214\215|yv\177~}$$$\231\230\230\210\206\207"
  "\207\205\206\211\206\207\206\204\205\211\204\203\202~}\6\6\4\210\203\201"
  "\210\201~\202tm\207\201~\212\206\205\215\211\210\214\207\203-+*\211\204\202"
  "\221\206\177\204\200\202\201{{\213\206\203wus\206\200};89vut\205\204\202"
  "~}|qqonnn}{{~~\177\\\\U\200\200~\204\203\203\203\201~\203\202\200vstxyu3"
  "44tsppprcbgQSX]^bhhjdddqqq**)\210\207\214kkmuuw\201\201\201\201\201\203\232"
  "\231\233nlq&%)omogef\202\201\200\177~{\204\201\200\202~z\210\204\203'(&\213"
  "\212\212\214\212\213\204\202\203\210\206\207\177|}\205\201\177\213\210\210"
  "\5\5\5\220\213\210\205{y\204zvlhe~zy\205\177\177\200{x$\"\40\177zx\214\205"
  "\202\210\200\177\203\200~\211\203\203vrq\202{w:9:tss\206\204\205zxyonlqq"
  "q}|zqpsJKC{{y\202\201\177\207\204\202\200\200\201vtrpom545ywummndciSUY^]"
  "bcchddfooo##%\221\220\230bbdnnp~~\200zz|\236\236\236pmt&%*pononl\205\202"
  "\202~|y\204\202\177|{x\206\203\201##\40\216\216\216\206\204\205\212\212\212"
  "\207\205\207|z{}wx{yx\6\6\6~xt}tu~vtfba|xw\204~~wpp'%#\203\177~\220\206\202"
  "\177zw{vs\177zxyts\207\203\202YXXtrv\211\207\210sqrlkiywxkjh\202\202\203"
  "CC>wvt\204\203\201\214\210\207\177\200\177|wtrrm233ssrjjl\\[`UUZ[Z_jjo``"
  "bnlm\40!\36\213\212\217^^`jioqqs||\177\216\216\220lkq\32\31\33lkjlki\203"
  "\202\200\202\200\177vut\177~{\213\212\207#\"!\224\224\225\202\200\201\216"
  "\214\215\214\212\215\203\201\200\221\215\214\204\201\200\6\6\6\211\204\201"
  "\213}v\203zxkfc\201}|\177yy|ws%\"\40\201\177}\212\205\203\200{wxsp{uu~zy"
  "\214\213\2111/.{||\207\207\204ljljhipnoyww{z}:;6}}{\177\177}\210\207\204"
  "wuvwtpmlj//1llheef_ae\\[`iikpqt}\200\202dbc\33\33\30\202\201\207dchnlqyy"
  "{\203\202\207\215\215\220omr\31\31\32qomgee\200~\177\203\201\203\202\200"
  "\177{zx\210\210\204+,*\233\232\234\213\212\212\204\202\201\224\222\223\212"
  "\210\211\201}~xrn\6\6\6\221\214\211\177{zojgoii\177yy\200{xvrp&\"#\210\205"
  "\203\206\200}}xuupm~xuyvt\203\177}<::\266\267\277\213\213\213nlmigh`^_tt"
  "ssss792qqoutr~}{{z{utpkki+*0ijgdde^_dXY^deimjnqrtkkm\26\27\23\203\203\210"
  "fejdchrrt\202\202\204\216\216\216oos\32\31\35ihgecdvtvxvt\177}|\177~|\207"
  "\206\203+**\225\224\230\216\214\217\232\227\230\207\205\210\206\204\207\202"
  "\200\203\202|}\11\11\10\251\244\241wstvtujcc\177{zzssuqp,(#~{y\210\203\177"
  "k_]{vt{uuyom\206\202\201999uuywwybbdeeeddd___feh()$nmnrrp\203\204\203wxw"
  "bb`dde/.2efcnnoXY^`aejhnffja_eons!!\40\177}\205jjlcbgwy|||\200\226\226\230"
  "yx~\26\26\27`]\\kggsqr}{|\206\204\204\202\201~\205\203\200//-\216\216\220"
  "\211\210\207\200~\201\206\204\205\204\202\205~|\177~|\177\4\4\4\230\222\216"
  "rnmtpoief\202~}xtstpo*'$\214\210\207\204\200{qgdojh|xzpje}||HDCVTUiijVVX"
  "LLKgggbbbWWZ\30\30\31uvrppnpppsqtgfgkklLKP`a]ggiZ[`]^cWX\\baeSTXhhh\33\33"
  "\32\205\204\212uuwpprwwy\206\207\214\216\216\216tsy\25\25\26`^_jggnlm|z{"
  "\177}~|zy\206\203\201,-+\203\203\205{{}|||\205\203\206\203\201\205|z}\177"
  "}\200\4\4\4\204\200\177\203\177|yxvvus\205\201\200vrq|xw#!!\212\210\205\205"
  "~|lfbsoksopwol\216\216\214PNM\234\226\221rnqeeg]]]^^\\hhhcca**'rrsnnpkkk"
  "hhjZZZwx{OOUYXUabeZ[`\\]bRPVbafSTX^_c\30\30\31\206\206\215hhjnmr\206\207"
  "\213}~\202\220\220\222tsx\25\24\30mjiheeomnywx\207\206\205{{z\216\217\214"
  "++*\210\207\210{z{xxy\207\206\210\205\203\204\202\177\203\213\212\210\3\3"
  "\3\203\177~\214\207\205\215\213\214omouur\214\207\207}yx\31\31\31\177{x}"
  "{yrkkutv\207\203\200ecb\177~|LJK\206\201\204jkm^^`]]]aaallmkjm\31\30\31]"
  "]]```ppnmmmgghVWZ>=BYYV^_bTUZPQVTVYXV\\OPT[\\`##!\200\200\210cbg~\177\204"
  "tw~z{\177\210\211\213ppq\23\22\25WUUnmjjhjust\200}\177utu\214\214\212,-+"
  "\215\215\216\177~\177}{{\204\203\200\202\200\203|z}\202\200\201\5\5\4\215"
  "\206\202\231\223\222xww\177{|\216\212\211\215\214\212\203\177|\32\31\32\205"
  "\201~zvwvrq\177{x\204\204\205njixtuHFGstwlkhxxxpppssstuqkkk\31\31\27efhi"
  "iihhh\201\201\201bceNOR54:VVR^^aLMRTTY`adUVZ]^chim\31\33\32rswcbgbcflotl"
  "mq\215\216\223xy}\17\17\21RQVb_`kimhgjwwwvww\211\212\210,,,\206\206\206u"
  "uu|zz|{y}}{zzzxxx\4\4\4\\WW{x{stpsomyut\205\203\206\200\177{\35\33\35\200"
  "|yyywyuwrro|z~qmmzyxBBB\200~\200fdfhhgcabb`asqrfed\30\32\33wxzhiklll\206"
  "\206\205deelmpGFMNNMYY]DEJRUZcfnadicdi_`d)++oqtbcgghlfgktuy\207\210\214{"
  "{\200\12\11\15HHIbb`jjljjk{{yqpo}|}/.0\215\215\215wwx{{|sss\177}~\177\177"
  "\201wtu\5\5\5qnnrpqb`avqpzxw}wz\206\204\204\"\40!~{xyxvuqprli`_`\213\207"
  "\206\203\202\177RPQzyxyywllldacded]^^\\[^\35\34\36wxzkkkqqqyx}ffijkmMMRK"
  "MKTVTLKPUV[SV[jjpTUW\\]a\33\33\33tsx\\]aYZ^abfz{\177\177~\203ppm\4\6\7TR"
  "Peedjjlllo\202\202\203uuv~~\17712/\212\212\214\177\177\201\205\205\207}}"
  "\177\202\202\204\200~~qpn\12\12\12jjjlkijigtpowuvxwtfce\35\34\37tsnrpruu"
  "rjgcd_avus\205\203\202TRS\200\177{xwuddbcb`ddfcccffh\35\36\34qsqiiiiiimm"
  "oeeghikHHOGIHMNPGHLQRWXY^WX]YZ_dei()%xz}\\]b\\]almqnosuvzghh\7\7\7ROPihi"
  "bbceef\202\201\204xy{{{|01/\222\222\224uuv\215\214\221\204\204\206\200\200"
  "\202utrjkk\14\14\16zywfec`_]oom\177}~rpqppo\30\31\31spotsqsqra`akfhqonvu"
  "uKII{zxxxvYYWYYWaabeee[[]\33\33\37uwwllmmmmdddiijmppSS[GHGRRTPQWPQVOPSST"
  "YYZ^_`d-1,{|\200llmjlpghlmnrmnrttu\5\5\7HHHiijdddkkkmmnrrtrru/0-\213\213"
  "\214uuv\205\205\207yy{\205\205\207~~\200jhl\7\7\10|{ygcbnljnmkqoqihfhfd\35"
  "\35\35jihonl\207\206\204[YZbaaonlzuqGHHtssrrr\\XZ`_]ecdeee``b\40\"\"tvtm"
  "onooqcedjklcdfKJO<<;LLM?=DNOSBCGUVZZ[_[\\`(+&lmrabdoqu_`dlmqwx|xy~\10\10"
  "\11IIIccdccckkkiijkkmssu222\213\213\214sss\211\210\215||~}|~lilfdh\4\4\5"
  "wvt_^\\nmkxwugefhfgfce\33\33\33fedgea\211\210\206sqqfcatpm{wwFEEvuuqqqXT"
  "Ua`^a_`cccffh#\"'pqsllnpprcccefi]^`ONS<;9OPS78=EFK@>EJKOTUZ]\\a(('hglcce"
  "gfhabftuy}~\202|{\177\13\13\13EDG]]_ddfiikhhjnnpkkm---\211\211\213ssu\177"
  "\177\201\203\202\207yy{badffh\5\4\4srndbbjeeligdbcgfhgef\31\32\32mignmkv"
  "ur[YZc``}vtnnkGEFwuugggUUUWUV]]]bbbnmp'&+klnkkklln`ac_`bTUWLKP==9JLO89>="
  ">C=>CEFKIJN]]_'+(`_ea`eghlabflmquvz}}\201\13\13\14>?>SSUcceffhddfssuffh2"
  "22\214\214\216yy{qqtyx|nmodbezzz\6\7\7vspfd_njgmjh^\\]mkmdbc\40\36\37lhg"
  "mihmhfPKKLJKd_agfdHFFvro^^^YY[[[[``b__baad%(-pqtmmmffh_a`dfhLMQNOU356A@E",
};


Color PatternKayu::getColor(Point p)
{
  int x = p.x % gimp_image.width;
  int y = p.y % gimp_image.height;
  int pos = ((y * gimp_image.width) + x) * gimp_image.bytes_per_pixel;
  int imageSize = 64 * 43 * 3 + 1;

  if (pos > imageSize)
  {
    std::cout << "You caused segmentation fault\n";
  }

  //std::cout << "R:" << gimp_image.pixel_data[pos] << " G:" << gimp_image.pixel_data[pos + 1] << " B:" << gimp_image.pixel_data[pos + 2] << std::endl;
  int r = gimp_image.pixel_data[pos];
  int g = gimp_image.pixel_data[pos + 1];
  int b = gimp_image.pixel_data[pos + 2];

  return Color(r, g, b);
  
}