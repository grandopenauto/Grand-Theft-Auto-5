#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	struct<110>[] Local_28 = new struct<110>[4];
	struct<94> Local_469 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = -1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = -1;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	struct<8>[] Local_579 = new struct<8>[5];
	int[] iLocal_620 = new int[1];
	char[16] cLocal_622 = 0;
	char[64] cLocal_626 = 0;
	vector3 vLocal_642 = 0;
	struct<6> Local_645 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 30;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 10;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 10;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 20;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 20;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 30;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 5;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 7;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 5;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 3;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 15;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 10;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 5;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 5;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	int iLocal_1638 = 0;
	var uLocal_1639 = 3;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 1092616192;
	var uLocal_1646 = 1101004800;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 3;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	struct<8>[] Local_1663 = new struct<8>[5];
	struct<32>[] Local_1704 = new struct<32>[20];
	char[32] cLocal_2345 = 0;
	var uLocal_2353 = 16;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	int iLocal_2524 = 0;
	char[16] cLocal_2525 = 0;
	char[16] cLocal_2529 = 0;
	int iLocal_2533 = 0;
	float fLocal_2534 = 0;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	int iLocal_2540 = 0;
	char[16] cLocal_2541 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546 = 0;
	int iLocal_2547 = 0;
	int iLocal_2548 = 0;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	int iLocal_2551 = 0;
	char[16] cLocal_2552 = 0;
	char[16] cLocal_2556 = 0;
	int iLocal_2560 = 0;
	int iLocal_2561 = 0;
	int iLocal_2562 = 0;
	int iLocal_2563 = 0;
	int iLocal_2564 = 0;
	int iLocal_2565 = 0;
	int iLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
	int iLocal_2573 = 0;
#endregion

void main()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	StringCopy(&cLocal_622, "JHP1ADS", 16);
	StringCopy(&cLocal_626, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	vLocal_642 = {154.9478f, -3092.523f, 4.911984f};
	StringCopy(&Local_645, "jhp1a_sec_arrive", 24);
	iLocal_651 = 0;
	iLocal_657 = 6;
	iLocal_2519 = -1;
	iLocal_2523 = -1;
	iLocal_2524 = -1;
	StringCopy(&cLocal_2525, "", 16);
	StringCopy(&cLocal_2529, "", 16);
	fLocal_2534 = 1E+08f;
	iLocal_2537 = 1;
	iLocal_2540 = -1;
	StringCopy(&cLocal_2541, "", 16);
	iLocal_2545 = -1;
	iLocal_2546 = 1;
	iLocal_2550 = -1;
	iLocal_2551 = -1;
	StringCopy(&cLocal_2552, "", 16);
	StringCopy(&cLocal_2556, "", 16);
	iLocal_2560 = 1;
	iLocal_2562 = 1;
	iLocal_2566 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = -1;
	if (has_force_cleanup_occurred(3))
	{
		func_270(6);
	}
	set_mission_flag(1);
	func_263();
	func_222();
	while (true)
	{
		_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (iLocal_656)
		{
			func_220();
		}
		func_217(&uLocal_658);
		func_177();
		if (!iLocal_654)
		{
			func_175();
			func_164();
			func_163(&Local_1663);
		}
		func_1();
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_651)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_2569 != -1 && does_entity_exist(Local_579[iLocal_2569 /*8*/])) && is_vehicle_driveable(Local_579[iLocal_2569 /*8*/], 0))
	{
		iVar0 = get_entity_health(Local_579[iLocal_2569 /*8*/]);
		func_23(Local_579[iLocal_2569 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_88036 = 1000;
	}
	else
	{
		Global_88036 = iVar0;
	}
	if (!func_22(&(Local_1663[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	terminate_this_thread();
}

void func_3(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_6(0) && Global_69735.f_1 == 1) && func_5(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_6(0))
	{
		iVar0 = func_4();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 4);
		set_bit(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = get_game_timer();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_5(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
			break;
		
		case 86:
			return true;
			break;
		
		case 91:
			return true;
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

int func_6(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	clear_prints();
	clear_help(1);
	if (iParam0)
	{
		clear_player_wanted_level(player_id());
		trigger_music_event("JHP1A_FAIL");
	}
	else
	{
		set_wanted_level_multiplier(1f);
		set_player_noise_multiplier(player_id(), 1f);
	}
	set_max_wanted_level(5);
	set_dispatch_cops_for_player(player_id(), 1);
	set_create_random_cops(true);
	func_18(&Local_1663);
	func_13(&iLocal_1638, 1, 0);
	iLocal_2518 = false;
	iLocal_2519 = -1;
	iLocal_2563 = 0;
	iLocal_2564 = 0;
	iLocal_2565 = false;
	iLocal_2566 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = -1;
	iLocal_2570 = false;
	iLocal_2571 = false;
	iLocal_2567 = 0;
	if (iParam0)
	{
		func_11();
		clear_ped_tasks_immediately(player_ped_id());
		clear_player_wanted_level(player_id());
		clear_area_of_peds(158.78f, -3100.44f, 6.0019f, 100f, 0);
		clear_area_of_cops(158.78f, -3100.44f, 6.0019f, 100f, 0);
		clear_area_of_objects(158.78f, -3100.44f, 6.0019f, 100f, 0);
		clear_area_of_vehicles(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, false);
		clear_area_of_projectiles(158.78f, -3100.44f, 6.0019f, 100f, 0);
		remove_decals_in_range(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (does_entity_exist(iLocal_620[iVar0]))
		{
			if (iParam0)
			{
				delete_object(&(iLocal_620[iVar0]));
			}
			else
			{
				set_object_as_no_longer_needed(&(iLocal_620[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		func_10(&(Local_28[iVar0 /*110*/]), iParam0);
		iVar0++;
	}
	func_10(&Local_469, iParam0);
	iVar0 = 0;
	while (iVar0 < Local_579)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (iParam0)
				{
					delete_ped(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					set_ped_as_no_longer_needed(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (does_entity_exist(Local_579[iVar0 /*8*/]))
		{
			if (iParam0)
			{
				delete_vehicle(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				set_vehicle_as_no_longer_needed(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (is_alarm_playing(&cLocal_626))
	{
		stop_alarm(&cLocal_626, iParam0);
	}
	if (iLocal_2573 != 0)
	{
		remove_scenario_blocking_area(iLocal_2573, 0);
	}
	func_9();
}

void func_9()
{
	Global_87466 = 0;
}

void func_10(int iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (iParam1)
		{
			delete_ped(iParam0);
		}
		else
		{
			set_ped_as_no_longer_needed(iParam0);
		}
	}
	*iParam0.f_5 = 0;
	*iParam0.f_6 = -1;
	*iParam0.f_7 = -1;
	*iParam0.f_39 = 0;
	*iParam0.f_41 = 0;
	*iParam0.f_93 = 1;
	*iParam0.f_102 = 0;
	*iParam0.f_47 = 0;
	*iParam0.f_46 = 0;
	*iParam0.f_48 = 0;
	*iParam0.f_37 = -1;
	*iParam0.f_103 = -1;
	*iParam0.f_40 = 0;
	*iParam0.f_92 = -1;
	*iParam0.f_43 = {0f, 0f, 0f};
	*iParam0.f_88 = {0f, 0f, 0f};
	*iParam0.f_91 = 0;
	if (does_entity_exist(*iParam0.f_105))
	{
		if (is_entity_attached(*iParam0.f_105))
		{
			detach_entity(*iParam0.f_105, 1, true);
		}
		if (iParam1)
		{
			delete_object(iParam0.f_105);
		}
		else
		{
			set_object_as_no_longer_needed(iParam0.f_105);
		}
	}
	*iParam0.f_106 = -1;
	*iParam0.f_107 = 0;
	*iParam0.f_109 = 0;
	*iParam0.f_104 = 0;
}

void func_11()
{
	Global_14578 = 0;
	func_12();
}

void func_12()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_17(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			clear_bit(iParam0.f_13, iVar0);
			clear_bit(iParam0.f_14, iVar0);
		}
		iVar0++;
	}
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0.f_6 = 0;
	*iParam0.f_12 = 0;
	*iParam0.f_15 = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*iParam0.f_17[iVar0]))
		{
			set_ped_can_play_ambient_anims(*iParam0.f_17[iVar0], 1);
			set_ped_can_play_ambient_base_anims(*iParam0.f_17[iVar0], 1);
			if (iParam2)
			{
				set_ped_config_flag(*iParam0.f_17[iVar0], 32, true);
				set_ped_config_flag(*iParam0.f_17[iVar0], 305, false);
			}
			set_ped_config_flag(*iParam0.f_17[iVar0], 268, false);
			if (iParam1)
			{
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_14()) && *iParam0.f_17[iVar0] != player_ped_id())
				{
					remove_ped_from_group(*iParam0.f_17[iVar0]);
				}
			}
			if (!is_bit_set(*iParam0.f_13, 29))
			{
				set_ped_using_action_mode(*iParam0.f_17[iVar0], false, -1, 0);
			}
			*iParam0.f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		set_ped_can_play_ambient_anims(player_ped_id(), 1);
		set_ped_can_play_ambient_base_anims(player_ped_id(), 1);
	}
	if (is_player_playing(player_id()))
	{
		if (iParam2)
		{
			set_ped_config_flag(player_ped_id(), 32, true);
		}
	}
	*iParam0.f_21 = 0;
}

int func_14()
{
	return get_player_group(get_player_index());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 16);
			break;
	}
}

void func_17(int iParam0)
{
	if (does_blip_exist(*iParam0.f_5))
	{
		remove_blip(iParam0.f_5);
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

bool func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	iVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			iVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!iVar0)
	{
	}
}

bool func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || *uParam0.f_1 > 0))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_652 = 0;
		iLocal_653 = false;
		iLocal_651 = iParam0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!iLocal_653)
	{
		func_162(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_161(&uLocal_658, joaat("s_m_m_security_01"));
		func_160(&(Local_1663[1 /*8*/]), 0, 0, 1);
		func_160(&(Local_1663[0 /*8*/]), 0, 0, 1);
		func_160(&(Local_1663[4 /*8*/]), 0, 0, 1);
		func_105(0f, 0f, 0f, 0f, 1, func_156());
		Global_88036 = 1000;
		set_wanted_level_multiplier(0.1f);
		func_104("JHP1A_STEAL_BSV", 7500, 1);
		iLocal_653 = true;
	}
	if (iLocal_653)
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_99(1) == 0)
				{
					func_13(&iLocal_1638, 1, 0);
					func_23(0, -1);
					func_98(0, -1);
				}
				else if ((func_97() && does_entity_exist(Local_579[func_96() /*8*/])) && is_vehicle_driveable(Local_579[func_96() /*8*/], 0))
				{
					set_random_vehicle_density_multiplier_this_frame(0.5f);
					if (iLocal_2569 != func_96())
					{
						_0x293220DA1B46CEBC(5f, 10f, 4);
						func_23(Local_579[func_96() /*8*/], -1);
						func_98(Local_579[func_96() /*8*/], -1);
						iLocal_2569 = func_96();
					}
					if (func_94(&iLocal_1638, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_579[func_96() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_652++;
					}
				}
				else if (func_93())
				{
					set_random_vehicle_density_multiplier_this_frame(0.5f);
					func_49(&iLocal_1638, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2570, "", "", "", 1, 0, 1, -1);
					if (is_entity_in_angled_area(Local_579[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						iLocal_652++;
					}
				}
				else
				{
					func_17(&iLocal_1638);
					func_23(0, -1);
					func_98(0, -1);
				}
				break;
			
			case 1:
				if (func_97())
				{
					if (func_47(get_vehicle_ped_is_in(player_ped_id(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						iVar0 = true;
					}
				}
				else if (func_93())
				{
					if (func_47(iLocal_2570, 5f, 1, 1056964608, 0, 1, 0))
					{
						iVar0 = true;
					}
				}
				if (iVar0)
				{
					if (func_7(88))
					{
						_0x293220DA1B46CEBC(5f, 10f, 4);
						set_entity_invincible(player_ped_id(), true);
						func_46(1);
						func_45(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_97())
					{
						set_vehicle_is_considered_by_player(Local_579[iLocal_2569 /*8*/], 0);
					}
					else if (func_93())
					{
						set_vehicle_is_considered_by_player(Local_579[func_48() /*8*/], 0);
						_0x2B6747FAA9DB9D6B(Local_579[func_48() /*8*/], 1);
						detach_vehicle_from_any_tow_truck(Local_579[func_48() /*8*/]);
					}
					task_leave_any_vehicle(player_ped_id(), 0, 0);
				}
				break;
			
			case 2:
				if (!is_ped_in_any_vehicle(player_ped_id(), 1))
				{
					return true;
				}
				break;
			
			case 1000:
				func_45(1, 0);
				if (!func_43())
				{
					func_41();
				}
				else
				{
					func_40(&uLocal_2353, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2353, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_652++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_652++;
				}
				break;
			
			case 1002:
				func_45(1, 0);
				if (!func_27())
				{
					func_26();
					return true;
				}
				break;
			}
	}
	return false;
}

void func_26()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_entity_proofs(player_ped_id(), false, false, false, false, false, false, 0, false);
		set_ped_config_flag(player_ped_id(), 157, true);
		set_entity_invincible(player_ped_id(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88980[iVar0]))
		{
			if (!is_entity_dead(Global_88980[iVar0], 0))
			{
				set_entity_proofs(Global_88980[iVar0], false, false, false, false, false, false, 0, false);
				set_entity_invincible(Global_88980[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_35711 != 0 && Global_35711 != 3) && Global_35711 != 2)
	{
		set_max_wanted_level(5);
		set_wanted_level_multiplier(1f);
	}
}

bool func_27()
{
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		return true;
	}
	return false;
}

int func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_29(sParam3, iParam4, iParam8);
}

bool func_29(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_38();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_37(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_36();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_34();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_33())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_32())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_31();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_30();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_38();
	}
	return false;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_31()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	clear_bit(&Global_2284, 16);
}

bool func_32()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_33()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_34()
{
	if (func_35(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_156();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_35(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return is_bit_set(Global_1338622.f_949, iParam0);
}

void func_38()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!is_ped_injured(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_41()
{
	Global_14578 = 0;
	func_42();
}

void func_42()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

bool func_43()
{
	if (func_44())
	{
		return false;
	}
	if (is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return false;
		}
	}
	return true;
}

bool func_44()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_45(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		disable_control_action(0, 21, 1);
	}
	disable_control_action(0, 25, 1);
	disable_control_action(0, 24, 1);
	disable_control_action(0, 257, 1);
	disable_control_action(0, 141, 1);
	disable_control_action(0, 140, 1);
	disable_control_action(0, 22, 1);
	disable_control_action(0, 44, 1);
	disable_control_action(0, 23, 1);
	disable_control_action(0, 47, 1);
	disable_control_action(0, 36, 1);
	if (iParam0)
	{
		disable_control_action(0, 37, 1);
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		if (iParam1)
		{
			set_ped_max_move_blend_ratio(player_ped_id(), 2f);
		}
		else
		{
			set_ped_max_move_blend_ratio(player_ped_id(), 1f);
		}
		set_ped_reset_flag(player_ped_id(), 102, true);
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		clear_player_wanted_level(player_id());
	}
}

void func_46(int iParam0)
{
	if (!is_entity_dead(player_ped_id(), 0))
	{
		set_entity_proofs(player_ped_id(), true, true, true, true, true, false, 0, false);
		set_ped_config_flag(player_ped_id(), 157, false);
		set_entity_invincible(player_ped_id(), true);
		set_ped_stealth_movement(player_ped_id(), 0, 0);
		if (iParam0)
		{
			set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), false);
		}
		remove_ped_helmet(player_ped_id(), 0);
	}
	if (is_player_playing(player_id()))
	{
		clear_player_wanted_level(player_id());
	}
	set_max_wanted_level(false);
	set_wanted_level_multiplier(0f);
}

bool func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
	_0x17FCA7199A530203();
	if (get_game_timer() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_48()
{
	int iVar0;
	
	if (func_93())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_vehicle_attached_to_tow_truck(iLocal_2570, Local_579[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_49(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	return func_50(iParam0, vParam1, vParam4, func_92(), func_92(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_91(), func_91(), func_91(), func_91(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

bool func_50(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, Vector3 fParam28)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	*iParam0.f_17[0] = iParam15;
	*iParam0.f_17[1] = iParam16;
	*iParam0.f_17[2] = iParam17;
	*iParam0.f_16 = iParam15;
	func_90(iParam0);
	func_89(iParam0);
	func_88();
	if (func_72(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_71(sParam20);
		func_71(sParam21);
		func_71(sParam22);
		func_71(sParam23);
		if (is_screen_faded_in())
		{
			iVar1 = false;
			if (is_vehicle_driveable(iParam18, 0))
			{
				if (is_ped_in_vehicle(player_ped_id(), iParam18, 0))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					if (is_bit_set(*iParam0.f_13, 23))
					{
						clear_bit(iParam0.f_13, 23);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_69(iParam0, iParam29))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else
			{
				iVar1 = true;
			}
			if (iVar1)
			{
				func_71(sParam24);
				func_71(sParam27);
				func_71("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_71(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_62(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_71("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_66(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_62(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (!does_blip_exist(*iParam0.f_5))
					{
						if (does_blip_exist(*iParam0))
						{
							remove_blip(iParam0);
						}
						*iParam0.f_5 = func_61(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_60(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_59(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_60(*iParam0.f_5, iParam0);
						}
					}
					if (!func_66(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_64(iParam0, sParam19, 0);
							set_bit(iParam0.f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (is_bit_set(*iParam0.f_13, 13))
						{
							iParam13 = false;
						}
					}
					iVar1 = false;
					iVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (iParam28)
					{
						is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (is_entity_in_angled_area(player_ped_id(), vParam7, vParam10, fParam36, 0, iVar6, iVar7))
						{
							iVar1 = true;
						}
					}
					else if (is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7))
					{
						iVar1 = true;
					}
					if (iVar1)
					{
						iVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!is_ped_injured(*iParam0.f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iVar0, 0))
									{
										iVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iParam18, 0))
									{
										iVar1 = false;
									}
								}
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_14()) || !func_57(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_54(iParam0))
							{
								func_71(sParam19);
								func_71(sParam24);
								func_71(sParam20);
								func_71(sParam21);
								func_71(sParam22);
								func_71(sParam23);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(sParam27);
								func_13(iParam0, 1, 0);
								return true;
							}
						}
					}
				}
			}
			else if (does_entity_exist(iParam18))
			{
				if ((iParam26 && is_player_wanted_level_greater(player_id(), 0)) && (!is_bit_set(*iParam0.f_13, 9) && !is_bit_set(*iParam0.f_13, 22)))
				{
					func_71(sParam24);
					func_71(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_71(sParam19);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_62(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_71("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_66(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_62(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (is_vehicle_driveable(iParam18, 0))
					{
						if (!does_blip_exist(*iParam0))
						{
							if (does_blip_exist(*iParam0.f_5))
							{
								remove_blip(iParam0.f_5);
								func_71(sParam19);
							}
							*iParam0 = func_51(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_60(*iParam0, iParam0);
							}
						}
						if (!func_66(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_64(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_64(iParam0, sParam27, 0);
										set_bit(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_64(iParam0, sParam24, 0);
									set_bit(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!is_ped_injured(*iParam0.f_17[0]))
									{
										func_62(*iParam0.f_17[0], "GET_IN_CAR", 3);
									}
									set_bit(iParam0.f_13, 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(*iParam0.f_5))
				{
					remove_blip(iParam0.f_5);
					func_71(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_66(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(player_ped_id()))
							{
								if (!is_bit_set(*iParam0.f_13, 13))
								{
									iVar8 = false;
									iVar9 = false;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!is_ped_injured(*iParam0.f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = get_random_int_in_range(false, iVar8);
									if (!is_ped_injured(*iParam0.f_17[iVar9]))
									{
										func_62(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(iParam0, "MORE_SEATS", 0);
									set_bit(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_64(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_64(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_66(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_64(iParam0, sParam24, 0);
							set_bit(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_64(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_64(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (is_bit_set(*iParam0.f_13, false))
		{
			clear_bit(iParam0.f_13, false);
		}
		func_71(sParam19);
		func_71(sParam24);
		func_71(sParam27);
		func_71(sParam24);
		func_71("LOSE_WANTED");
		if (does_blip_exist(*iParam0.f_5))
		{
			remove_blip(iParam0.f_5);
		}
		if (does_blip_exist(*iParam0))
		{
			remove_blip(iParam0);
		}
	}
	clear_bit(iParam0.f_13, 11);
	clear_bit(iParam0.f_13, 12);
	return false;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	return func_52(iParam0, !iParam1, iParam2);
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_53(network_is_game_in_progress(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_53(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_53(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_53(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_54(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_56(player_ped_id()))
		{
			if (func_55(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_55(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(player_ped_id(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

bool func_56(int iParam0)
{
	float fVar0;
	
	if (!is_ped_injured(iParam0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_57(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_58(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_14(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_14()))
		{
			set_group_separation_range(func_14(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(iParam0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(iParam1))
				{
					if (is_ped_sitting_in_vehicle(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_59(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_60(int iParam0, int iParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (does_blip_exist(*iParam1.f_6))
		{
			set_blip_route(*iParam1.f_6, false);
		}
		_0x3DDA37128DD1ACA8(0);
		_0x67EEDEA1B9BAFD94();
		*iParam1.f_6 = iParam0;
		set_blip_route(iParam0, true);
	}
}

int func_61(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_53(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_62(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_64(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_104(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

bool func_65(int iParam0)
{
	if (!is_ped_injured(*iParam0.f_16))
	{
		if (is_ambient_speech_playing(*iParam0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_68(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_44() && !func_67())
		{
			return true;
		}
	}
	return false;
}

bool func_67()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

bool func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_game_timer();
	iVar0 = iVar1 - *uParam0.f_10;
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_70(iVar0, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_70(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (does_entity_exist(*uParam1.f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_71(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int[] iVar7 = new int[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var[] uVar15 = new var[3];
	var[] uVar19 = new var[3];
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	*uParam0.f_17[0] = uParam1;
	*uParam0.f_17[1] = uParam2;
	*uParam0.f_17[2] = uParam3;
	*uParam0.f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*uParam0.f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!is_bit_set(*uParam0.f_13, 29) && !is_bit_set(*uParam0.f_13, 28))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_using_action_mode(*uParam0.f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					set_bit(uParam0.f_13, 28);
				}
			}
		}
		else if (!is_bit_set(*uParam0.f_13, 29) && is_bit_set(*uParam0.f_13, 28))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				set_ped_using_action_mode(*uParam0.f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(uParam0.f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return true;
	}
	if (is_bit_set(*uParam0.f_13, 26))
	{
		iVar23 = false;
		if (!does_entity_exist(*uParam0.f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = get_closest_vehicle(get_entity_coords(player_ped_id(), 1), 50f, false, iVar25);
			if (is_vehicle_driveable(iVar24, 0))
			{
				*uParam0.f_21 = iVar24;
			}
		}
		if (is_vehicle_driveable(*uParam0.f_21, 0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0.f_21, 1)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !iParam17)
					{
						if (func_70(*uParam0.f_21, uParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(*uParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*uParam0.f_17[iVar0], -1794415470) == 7 && !func_87(*uParam0.f_17[iVar0], *uParam0.f_21))
									{
										if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											task_enter_vehicle(*uParam0.f_17[iVar0], *uParam0.f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else
						{
							iVar23 = true;
						}
					}
					else
					{
						iVar23 = true;
					}
				}
				else
				{
					iVar23 = true;
				}
			}
			else
			{
				iVar23 = true;
			}
		}
		else
		{
			iVar23 = true;
		}
		if (iVar23)
		{
			clear_bit(uParam0.f_13, 26);
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]) && !*uParam0.f_15)
					{
						clear_ped_tasks(*uParam0.f_17[iVar0]);
					}
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
					{
						if (func_85(uParam0, *uParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*uParam0.f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*uParam0.f_13, 26))
	{
		if ((!func_84(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*uParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
					{
						iVar26 = false;
						iVar27 = false;
						iVar0 = false;
						while (iVar0 < 3)
						{
							if (!is_ped_injured(*uParam0.f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = get_random_int_in_range(false, iVar26);
						if (!is_ped_injured(*uParam0.f_17[iVar27]))
						{
							func_62(*uParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						set_bit(uParam0.f_13, 13);
					}
				}
				iVar12 = true;
			}
		}
		else
		{
			iVar12 = false;
			clear_bit(uParam0.f_13, 13);
			func_71("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(*uParam0.f_17[0]) || !is_ped_injured(*uParam0.f_17[1])) || !is_ped_injured(*uParam0.f_17[2]))
			{
				if (!is_bit_set(*uParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_66(uParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (func_83(iVar13, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							set_bit(uParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(uParam0.f_13, 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, 0))
		{
			if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					set_bit(uParam0.f_13, 21);
				}
			}
			else if (is_bit_set(*uParam0.f_13, 21))
			{
				clear_bit(uParam0.f_13, 21);
			}
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 1);
					}
					else
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 0);
					}
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (is_vehicle_driveable(iVar13, 0))
						{
							if (is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
							{
								if (!func_84(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_82(*uParam0.f_17[iVar0]))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !is_entity_dead(iVar13, 0))
						{
							if (is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iVar13))
							{
								if (is_entity_in_water(iVar13) && !is_vehicle_on_all_wheels(iVar13))
								{
									vVar28 = {get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f)
									{
										task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					iVar11 = true;
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
					{
						if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
						{
							iVar13 = get_vehicle_ped_is_in(*uParam0.f_17[iVar0], 0);
							if (!is_entity_dead(iVar13, 0))
							{
								if (is_vehicle_driveable(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!is_ped_sitting_in_vehicle(player_ped_id(), iVar13))
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
								else
								{
									if (is_ped_sitting_in_any_vehicle(player_ped_id()))
									{
										iVar31 = get_vehicle_ped_is_in(player_ped_id(), 0);
									}
									if (is_vehicle_driveable(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
					{
						iVar32 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar32))
						{
							if (func_70(iVar32, uParam0, 0))
							{
								if (func_81(iVar0, uParam0) || !is_bit_set(*uParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(uParam0.f_13, 27);
									}
								}
							}
							else if (!func_81(iVar0, uParam0))
							{
								if (get_entity_model(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(*uParam0.f_17[iVar0], func_14()) && !func_79(*uParam0.f_17[iVar0], iParam10)) && !func_78(*uParam0.f_17[iVar0], iParam10))
					{
						if (func_85(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
							{
								if (((!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*uParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_14());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*uParam0.f_1[iVar0]))
							{
								*uParam0.f_11 = get_game_timer();
								*uParam0.f_1[iVar0] = func_51(*uParam0.f_17[iVar0], 0, 0);
								set_blip_display(*uParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_60(*uParam0.f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*uParam0.f_1[iVar0]))
					{
						if (((func_57(*uParam0.f_17[iVar0], 1) || func_79(*uParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
						{
							if (does_blip_exist(*uParam0.f_1[iVar0]))
							{
								remove_blip(uParam0.f_1[iVar0]);
								func_71(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_60(*uParam0.f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, 0))
					{
						if (!is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(*uParam0.f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !is_bit_set(*uParam0.f_13, 11)) && !((iParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
							{
								if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(*uParam0.f_17[iVar0], iParam10, 0))
									{
										if (!func_57(*uParam0.f_17[iVar0], 1))
										{
											if (func_56(*uParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*uParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*uParam0.f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*uParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_87(*uParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_77(*uParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											if (is_bit_set(*uParam0.f_13, 10))
											{
												set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
											}
											task_enter_vehicle(*uParam0.f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
										}
									}
									else if (is_ped_in_vehicle(player_ped_id(), iParam10, 0))
									{
										*uParam0.f_1[iVar0] = func_51(*uParam0.f_17[iVar0], 0, 0);
										set_blip_display(*uParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
							{
								if (func_85(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*uParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], false);
										set_ped_as_group_member(*uParam0.f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_14()))
							{
								if (!is_bit_set(*uParam0.f_13, 21))
								{
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_14());
								}
							}
							else if (is_bit_set(*uParam0.f_13, 21))
							{
								remove_ped_from_group(*uParam0.f_17[iVar0]);
								set_bit(uParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*uParam0.f_17[iVar0], func_14()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*uParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_71(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_blip_exist(*uParam0.f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_66(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = false;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!is_ped_injured(*uParam0.f_17[iVar0]))
						{
							if (func_82(*uParam0.f_17[iVar0]) || is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8, *uParam0.f_8, *uParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(*uParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8 * 0.85f, *uParam0.f_8 * 0.85f, *uParam0.f_8, 0, 1, 0) && !func_82(*uParam0.f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = get_game_timer();
			if (iVar5 - *uParam0.f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (*uParam0.f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1)
						{
							if (!is_bit_set(*uParam0.f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								set_bit(uParam0.f_13, 5);
								*uParam0.f_12 = iVar1;
							}
							else
							{
								*uParam0.f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_76(iVar0, uParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_74(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_73(iVar0, uParam0);
												*uParam0.f_12 = iVar1;
											}
										}
										if (!func_76(iVar0, uParam0))
										{
											func_64(uParam0, uVar15[iVar0], 0);
											func_73(iVar0, uParam0);
											*uParam0.f_12 = iVar1;
										}
									}
									else
									{
										*uParam0.f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					*uParam0.f_12 = 0;
				}
			}
		}
		clear_bit(uParam0.f_13, 10);
		if (iVar6 && !iVar12)
		{
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_71(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_71("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_75(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*uParam0.f_10 = get_game_timer();
}

void func_75(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 14);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 15);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 16);
		
		default:
	}
	return false;
}

bool func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 0);
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_speed(iVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_14()))
		{
			iVar0 = set_exclusive_phone_relationships(iParam0);
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_79(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (does_entity_exist(iParam1))
		{
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_ped_sitting_in_vehicle(iParam0, iParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 19);
			break;
	}
}

int func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 17);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 18);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 19);
		
		default:
	}
	return false;
}

bool func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = get_vehicle_ped_is_using(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (!is_ped_injured(iParam0))
			{
				iVar1 = get_vehicle_ped_is_using(iParam0);
				if (is_vehicle_driveable(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (is_entity_at_entity(player_ped_id(), iParam0, 20f, 20f, 20f, 0, 1, 0) && is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_83(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_entity_model(iParam0) == joaat("bus") || get_entity_model(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!is_ped_injured(*uParam1.f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, false);
			if (!is_ped_injured(iVar3))
			{
				if ((iVar3 == *uParam1.f_17[0] || iVar3 == *uParam1.f_17[1]) || iVar3 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = get_ped_in_vehicle_seat(iParam0, true);
			if (!is_ped_injured(iVar4))
			{
				if ((iVar4 == *uParam1.f_17[0] || iVar4 == *uParam1.f_17[1]) || iVar4 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = get_ped_in_vehicle_seat(iParam0, 2);
			if (!is_ped_injured(iVar5))
			{
				if ((iVar5 == *uParam1.f_17[0] || iVar5 == *uParam1.f_17[1]) || iVar5 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_84(var uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_70(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_85(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	if (!is_ped_injured(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, 0);
			if (!is_entity_dead(iVar0, 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
					{
						if (func_84(uParam0))
						{
							return true;
						}
					}
					else if (iParam3)
					{
						return true;
					}
				}
				else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!iParam3)
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_86(iVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_86(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_88()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_89(var uParam0)
{
	int iVar0;
	
	if (!is_bit_set(*uParam0.f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			set_ped_config_flag(player_ped_id(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_config_flag(*uParam0.f_17[iVar0], 32, false);
					set_ped_config_flag(*uParam0.f_17[iVar0], 305, true);
					set_ped_config_flag(*uParam0.f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		set_bit(uParam0.f_13, 25);
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(*uParam0.f_17[iVar0]))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
				{
					set_ped_can_play_ambient_anims(*uParam0.f_17[iVar0], 0);
					set_ped_can_play_ambient_base_anims(*uParam0.f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				set_ped_can_play_ambient_anims(player_ped_id(), 0);
				set_ped_can_play_ambient_base_anims(player_ped_id(), 0);
			}
		}
	}
}

var func_91()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_92()
{
	vector3 vVar0;
	
	return vVar0;
}

bool func_93()
{
	if (does_entity_exist(iLocal_2570) && is_vehicle_driveable(iLocal_2570, 0))
	{
		return true;
	}
	return false;
}

int func_94(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, Vector3 fParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	return func_50(iParam0, vParam1, func_95(), vParam4, vParam7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_91(), func_91(), func_91(), func_91(), sParam14, 0, iParam16, sParam15, 1, iParam17, iParam18, iParam19, func_91(), func_91(), func_91(), 1, fParam10);
}

Vector3 func_95()
{
	return 0f, 0f, 2f;
}

int func_96()
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 1) && is_ped_in_vehicle(player_ped_id(), Local_579[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_97()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_ped_in_vehicle(player_ped_id(), Local_579[iVar0 /*8*/], 0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_98(int iParam0, int iParam1)
{
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

int func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((does_entity_exist(Local_579[iVar1 /*8*/]) && is_vehicle_driveable(Local_579[iVar1 /*8*/], 0)) && !func_103(Local_579[iVar1 /*8*/])) && (!iParam0 || func_100(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_100(int iParam0)
{
	if (get_interior_from_entity(iParam0) == iLocal_2522)
	{
		if (func_102(player_ped_id(), vLocal_642, 1) < 500f)
		{
			return true;
		}
	}
	else if (func_101(iParam0, player_ped_id(), 1) < 300f)
	{
		return true;
	}
	return false;
}

var func_101(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

var func_102(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

bool func_103(int iParam0)
{
	if (is_vehicle_driveable(iParam0, 0))
	{
		if ((is_vehicle_stuck_timer_up(iParam0, 0, 7000) || is_vehicle_stuck_timer_up(iParam0, 1, 7000)) || is_vehicle_stuck_timer_up(iParam0, 2, 7000))
		{
			return true;
		}
	}
	return false;
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

void func_105(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar3;
	
	if (does_entity_exist(Global_93091.f_4))
	{
		if (is_vehicle_driveable(Global_93091.f_4, 0))
		{
			if (func_155(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_152(get_entity_coords(Global_93091.f_4, 1), iParam5, &vVar0, &uVar3))
					{
						vParam0 = {vVar0};
						fParam3 = uVar3;
					}
				}
				func_106(Global_93091.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_106(int iParam0, vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (does_entity_exist(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || get_entity_model(iParam0) == joaat("bus")) || get_entity_model(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_151(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_147(iParam0, &Var0);
		if (func_146(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {get_entity_coords(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = get_hash_key(get_this_script_name());
			}
		}
		func_139(iParam5, &Var0, vParam1, fParam4, func_145(iParam0));
		func_107(iParam5, iParam0, 0);
	}
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 12) && !is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != get_entity_model(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_124();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_155(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_109(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (get_entity_model(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (get_entity_model(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_147(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_109(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_122(iParam0, 0, 0)) || func_122(iParam0, 1, 0)) || func_122(iParam0, 2, 0)) || func_145(iParam0) != 145) || func_121(iParam0)) || func_120(iParam0)) || func_119(iParam0)) || func_118(iParam0)) || !func_110(get_entity_model(iParam0)))
	{
		if (func_120(iParam0))
		{
		}
		if (func_120(iParam0))
		{
		}
		if (func_122(iParam0, 0, 0))
		{
		}
		if (func_122(iParam0, 1, 0))
		{
		}
		if (func_122(iParam0, 2, 0))
		{
		}
		if (func_145(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_110(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_111(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_111(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_117())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_116() && !func_115()) && !func_114()) && !func_113()) && !func_117())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_114())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_112(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_113()
{
	return false;
}

bool func_114()
{
	return true;
}

bool func_115()
{
	return true;
}

bool func_116()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_117()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_118(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_111(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_120(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_121(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_123(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_123(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

var func_124()
{
	var uVar0;
	
	func_134(&uVar0, get_clock_seconds());
	func_133(&uVar0, get_clock_minutes());
	func_132(&uVar0, get_clock_hours());
	func_127(&uVar0, get_clock_day_of_month());
	func_126(&uVar0, get_clock_month());
	func_125(&uVar0, get_clock_year());
	return uVar0;
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_127(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_131(*uParam0);
	iVar1 = func_129(*uParam0);
	if (iParam1 < 1 || iParam1 > func_128(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_128(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_129(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_130(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_131(var uParam0)
{
	return uParam0 & 15;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_136(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_136(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_136(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_136(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_136(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_136(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_136(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_136(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_136(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			set_bit(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			set_bit(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 14);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 28);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 12);
			set_bit(uParam0.f_9, 7);
			set_bit(uParam0.f_9, 27);
			set_bit(uParam0.f_9, 24);
			set_bit(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 11);
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			set_bit(uParam0.f_9, 10);
			set_bit(uParam0.f_9, 11);
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			set_bit(uParam0.f_9, 9);
			set_bit(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			set_bit(uParam0.f_9, 9);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			set_bit(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, 22);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_117())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, true);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_117())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			set_bit(uParam0.f_9, 13);
			set_bit(uParam0.f_9, 2);
			set_bit(uParam0.f_9, true);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			set_bit(uParam0.f_9, false);
			set_bit(uParam0.f_9, 21);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			set_bit(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			set_bit(uParam0.f_9, 30);
			set_bit(uParam0.f_9, 23);
			set_bit(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (is_bit_set(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_146(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (is_bit_set(*uParam0.f_9, 19))
	{
		if (!func_146(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_146(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_138(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_137(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_137(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_138(int iParam0)
{
	return iParam0 < 3;
}

void func_139(int iParam0, var uParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_144(iParam0);
			func_143(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_140(iParam0, 1);
		}
	}
}

void func_140(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_142(iParam0, 0))
		{
			func_141(iParam0, 1, 0);
			func_141(iParam0, 2, 0);
			func_141(iParam0, 3, 0);
			func_141(iParam0, 4, 0);
			func_141(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_141(iParam0, 0, 0);
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		set_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		clear_bit(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_143(var uParam0, var uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

void func_144(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_140(iParam0, 0);
		}
	}
}

int func_145(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_146(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_147(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_150(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						clear_bit(uParam1.f_77, 23);
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_149(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_148(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_149(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_150(var uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

void func_151(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_144(iParam0);
	func_140(iParam0, 0);
}

bool func_152(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_153(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = {-827.351f, 157.785f, 68.2143f};
			*uParam5 = 85.1509f;
			return true;
			break;
		
		case 1:
		case 2:
			*uParam4 = {1992.523f, 3813.916f, 31.1008f};
			*uParam5 = 122.1498f;
			return true;
			break;
		
		case 3:
			*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
			*uParam5 = 303.2098f;
			return true;
			break;
		
		case 4:
			*uParam4 = {118.1067f, -1325.906f, 28.3706f};
			*uParam5 = 123.5016f;
			return true;
			break;
		
		case 5:
			*uParam4 = {-18.118f, -1455.126f, 29.5004f};
			*uParam5 = 273.2822f;
			return true;
			break;
		
		case 6:
			*uParam4 = {1.5947f, 543.4017f, 173.4644f};
			*uParam5 = 310.7556f;
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_153(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_154(iVar0) || iParam4 == 0)
				{
					fVar1 = get_distance_between_coords(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_154(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

int func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

var func_156()
{
	func_157();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_157()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_159(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_158(player_ped_id());
			if (func_138(iVar0) && (!func_35(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_138(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_159(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_159(int iParam0)
{
	if (func_138(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_160(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	else if (*uParam0 == 1)
	{
		return true;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && *uParam0.f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			*uParam0.f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			*uParam0.f_6 = 0;
		}
		*uParam0.f_4 = get_game_timer();
		*uParam0.f_5 = get_game_timer();
		*uParam0.f_1 = iParam3;
		return true;
	}
	return false;
}

bool func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0 /*5*/])
		{
			if (*(uParam0[iVar0 /*5*/]).f_4 == iParam1)
			{
				*(uParam0[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_model(iParam1);
		*uParam0[iVar1 /*5*/] = 1;
		*(uParam0[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0[iVar1 /*5*/]).f_4 = iParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

bool func_162(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_737)
	{
		if (*uParam0.f_737[iVar0 /*5*/])
		{
			if (are_strings_equal(*(uParam0.f_737[iVar0 /*5*/]).f_4, sParam1))
			{
				*(uParam0.f_737[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0.f_737[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_script_audio_bank(sParam1, false);
		*uParam0.f_737[iVar1 /*5*/] = 1;
		*(uParam0.f_737[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_737[iVar1 /*5*/]).f_4 = sParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

void func_163(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch (*uParam0[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc(*(uParam0[iVar0 /*8*/]).f_7);
				break;
			
			case 2:
				if (get_game_timer() - *(uParam0[iVar0 /*8*/]).f_5 > *(uParam0[iVar0 /*8*/]).f_6)
				{
					*uParam0[iVar0 /*8*/] = 1;
					*(uParam0[iVar0 /*8*/]).f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = false;
	if (func_102(player_ped_id(), vLocal_642, 1) < 70f)
	{
		_0x1121BFA1A1A522A8();
	}
	if (iLocal_2568 == 9)
	{
		if (!iLocal_2567)
		{
			if (is_player_wanted_level_greater(player_id(), 0))
			{
				play_police_report("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2567 = 1;
			}
		}
		if (does_entity_exist(Local_469))
		{
			if (func_101(Local_469, player_ped_id(), 1) > 300f)
			{
				set_ped_as_no_longer_needed(&Local_469);
			}
		}
	}
	if (does_entity_exist(iLocal_2570) && is_vehicle_driveable(iLocal_2570, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_vehicle_attached_to_tow_truck(iLocal_2570, Local_579[iVar0 /*8*/]))
				{
					iVar2 = true;
				}
			}
			iVar0++;
		}
		if (!iVar2)
		{
			iLocal_2570 = false;
		}
	}
	if (func_174())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_vehicle_attached_to_tow_truck(get_vehicle_ped_is_in(player_ped_id(), 0), Local_579[iVar0 /*8*/]))
				{
					iLocal_2570 = get_vehicle_ped_is_in(player_ped_id(), 0);
				}
			}
			iVar0++;
		}
	}
	func_167();
	if (iLocal_651 == 0)
	{
		if (!is_entity_at_coord(player_ped_id(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			iVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (does_entity_exist(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_101(player_ped_id(), Local_28[iVar1 /*110*/], 1) > 300f) && func_102(player_ped_id(), vLocal_642, 1) > 300f)
				{
					delete_ped(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]))
			{
				if (!is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
				{
					set_vehicle_as_no_longer_needed(&(Local_579[iVar0 /*8*/]));
					if (does_blip_exist(Local_579[iVar0 /*8*/].f_1))
					{
						remove_blip(&(Local_579[iVar0 /*8*/].f_1));
					}
					if (iVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_103(Local_579[iVar0 /*8*/]))
				{
					if (does_blip_exist(Local_579[iVar0 /*8*/].f_1))
					{
						remove_blip(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_579[iVar0 /*8*/]))
				{
					if (get_interior_from_entity(Local_579[iVar0 /*8*/]) == iLocal_2522)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_2568 == 9 && func_96() != -1) && does_entity_exist(Local_579[func_96() /*8*/])) && is_vehicle_driveable(Local_579[func_96() /*8*/], 0)) && !func_103(Local_579[func_96() /*8*/])) || (((iLocal_2568 == 10 && func_48() != -1) && does_entity_exist(Local_579[func_48() /*8*/])) && is_vehicle_driveable(Local_579[func_48() /*8*/], 0)))
			{
				if (does_blip_exist(Local_579[iVar0 /*8*/].f_1))
				{
					remove_blip(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0)) && !func_103(Local_579[iVar0 /*8*/])) && func_100(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!does_blip_exist(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_166(Local_579[iVar0 /*8*/], 0, 0);
					set_blip_priority(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2568 == 9 || iLocal_2568 == 10)
		{
			if (func_165("JHP1A_BKIN", 0, 0) || func_165("JHP1A_BKINANY", 0, 0))
			{
				clear_prints();
			}
		}
		else if (iLocal_652 == 0)
		{
			if (!iLocal_2562)
			{
				if (func_99(1) == 1)
				{
					func_104("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2562 = 1;
			}
		}
		if (func_99(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_270(iVar4);
			}
		}
	}
}

var func_165(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	return func_52(iParam0, !iParam1, iParam2);
}

void func_167()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_vehicle(player_ped_id(), Local_579[3 /*8*/], 1))
		{
			iLocal_2568 = 11;
		}
		else if (func_173())
		{
			iLocal_2568 = 7;
		}
		else if (func_172())
		{
			iLocal_2568 = 6;
		}
		else if (func_97())
		{
			iLocal_2568 = 9;
			iLocal_2562 = 0;
		}
		else if (func_93())
		{
			iLocal_2568 = 10;
		}
		else if (func_171())
		{
			iLocal_2568 = 8;
		}
		else if (((does_entity_exist(iLocal_2571) && is_vehicle_driveable(iLocal_2571, 0)) && !is_ped_in_vehicle(player_ped_id(), iLocal_2571, 1)) && is_entity_in_angled_area(iLocal_2571, vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2568 = 5;
		}
		else if (((!is_ped_in_any_vehicle(player_ped_id(), 1) && does_entity_exist(get_players_last_vehicle())) && !func_170()) && is_entity_in_angled_area(get_players_last_vehicle(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2571 = get_players_last_vehicle();
			iLocal_2568 = 5;
		}
		else if (!is_ped_in_any_vehicle(player_ped_id(), 1) && is_entity_in_angled_area(player_ped_id(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2568 = 2;
		}
		else if (((does_entity_exist(iLocal_2571) && is_vehicle_driveable(iLocal_2571, 0)) && !is_ped_in_vehicle(player_ped_id(), iLocal_2571, 1)) && (is_entity_in_angled_area(iLocal_2571, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || is_entity_at_coord(iLocal_2571, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_2568 = 4;
		}
		else if (((!is_ped_in_any_vehicle(player_ped_id(), 1) && does_entity_exist(get_players_last_vehicle())) && !func_170()) && (is_entity_in_angled_area(get_players_last_vehicle(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || is_entity_at_coord(get_players_last_vehicle(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_2571 = get_players_last_vehicle();
			iLocal_2568 = 4;
		}
		else if ((is_ped_in_any_vehicle(player_ped_id(), 1) && !func_170()) && is_entity_in_angled_area(player_ped_id(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2571 = get_players_last_vehicle();
			iLocal_2568 = 3;
		}
		else if ((is_ped_in_any_vehicle(player_ped_id(), 1) && !func_170()) && is_entity_in_angled_area(player_ped_id(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0))
		{
			iLocal_2571 = get_players_last_vehicle();
			iLocal_2568 = 1;
		}
		else if (is_ped_in_any_vehicle(player_ped_id(), 1) && is_entity_at_coord(player_ped_id(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_2568 = 1;
		}
		else
		{
			iLocal_2571 = false;
			if (!is_ped_in_any_vehicle(player_ped_id(), 1) && is_entity_at_coord(player_ped_id(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_2568 = 0;
			}
			else if (!is_ped_in_any_vehicle(player_ped_id(), 1) && is_entity_at_coord(player_ped_id(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_2568 = 0;
			}
			else
			{
				iLocal_2568 = -1;
			}
		}
		if (iLocal_2568 == 1)
		{
			if (func_169(Local_28[0 /*110*/]))
			{
				func_168(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_169(Local_28[0 /*110*/]))
		{
			func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (iLocal_2565)
		{
			set_ped_reset_flag(player_ped_id(), 155, true);
		}
		if ((iLocal_2568 != -1 && is_player_wanted_level_greater(player_id(), 0)) && is_cop_ped_in_area_3d(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_168(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

bool func_169(int iParam0)
{
	if (iParam0 != 0 && does_entity_exist(iParam0))
	{
		switch (get_entity_type(iParam0))
		{
			case 1:
				if (!is_ped_injured(get_ped_index_from_entity_index(iParam0)))
				{
					return true;
				}
				break;
			
			case 2:
				if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), 0))
				{
					return true;
				}
				break;
			
			default:
				if (!is_entity_dead(iParam0, 0))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

bool func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
		{
			if (get_players_last_vehicle() == Local_579[iVar0 /*8*/])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (does_entity_exist(Local_579[iVar0 /*8*/]) && has_entity_been_damaged_by_entity(Local_579[iVar0 /*8*/], player_ped_id(), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_172()
{
	int iVar0;
	
	if (is_ped_getting_into_a_vehicle(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0)) && set_exclusive_phone_relationships(player_ped_id()) == Local_579[iVar0 /*8*/])
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_173()
{
	int iVar0;
	
	if ((is_ped_in_any_vehicle(player_ped_id(), 1) && !is_ped_sitting_in_any_vehicle(player_ped_id())) && !is_ped_getting_into_a_vehicle(player_ped_id()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
			{
				if (is_ped_in_vehicle(player_ped_id(), Local_579[iVar0 /*8*/], 1))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_174()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (is_vehicle_driveable(iVar0, 0) && (get_entity_model(iVar0) == joaat("towtruck") || get_entity_model(iVar0) == joaat("towtruck2")))
		{
			return true;
		}
	}
	return false;
}

void func_175()
{
	int iVar0;
	
	if (is_ped_injured(player_ped_id()))
	{
		func_270(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (does_entity_exist(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_176(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1);
				}
				else
				{
					func_176(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1);
				}
			}
			if (!func_169(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = get_game_timer();
				}
				else if (get_game_timer() - Local_28[iVar0 /*110*/].f_103 >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579)
	{
		if (does_entity_exist(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_169(Local_579[iVar0 /*8*/]))
			{
				if (does_blip_exist(Local_579[iVar0 /*8*/].f_1))
				{
					remove_blip(&(Local_579[iVar0 /*8*/].f_1));
				}
				set_vehicle_as_no_longer_needed(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

bool func_176(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			if (iParam8 == -1)
			{
				_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			*uParam1.f_7 = iParam0;
			_0xE52B8E7F85D39A08(iParam0, iParam2);
			_0x97C65887D4B37FA9(iParam0, fParam6);
			if (does_blip_exist(*uParam1))
			{
				set_blip_priority(*uParam1, 7);
			}
		}
		_0x0C4BBF625CA98C4E(iParam0, iParam4);
		hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!is_bit_set(*uParam1.f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("MCUSTBLIP");
					add_text_component_substring_player_name(sParam7);
					end_text_command_set_blip_name(*uParam1);
				}
				set_bit(uParam1.f_6, 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, 0))
		{
			*uParam1.f_1 = _0x56176892826A4FE8(iParam0);
			if (!is_bit_set(*uParam1.f_6, 3))
			{
				if (does_blip_exist(*uParam1.f_1))
				{
					set_blip_priority(*uParam1.f_1, 7);
					set_bit(uParam1.f_6, 3);
				}
			}
		}
		else if (does_blip_exist(*uParam1.f_1))
		{
			*uParam1.f_1 = 0;
			clear_bit(uParam1.f_6, 3);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_177()
{
	vector3 vVar0;
	Vector3 fVar3;
	
	if (iLocal_654 == 1)
	{
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(1000);
			}
		}
		else
		{
			if (is_cutscene_active())
			{
				stop_cutscene(0);
				remove_cutscene();
			}
			func_24(iLocal_655);
			render_script_cams(false, false, 3000, 1, 0, 0);
			clear_prints();
			clear_help(1);
			func_8(1);
			if (!func_216())
			{
				func_215(iLocal_651, &vVar0, &fVar3);
				set_entity_coords(player_ped_id(), vVar0, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), fVar3);
				freeze_entity_position(player_ped_id(), true);
				func_213(&uLocal_658, vVar0, 50f, 0);
			}
			func_212(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_161(&uLocal_658, joaat("burrito2"));
					func_161(&uLocal_658, joaat("s_m_y_pestcont_01"));
					func_161(&uLocal_658, joaat("s_m_m_security_01"));
					func_161(&uLocal_658, joaat("dilettante2"));
					func_161(&uLocal_658, joaat("p_amb_clipboard_01"));
					func_211(&uLocal_658, &Local_645);
					func_210(&uLocal_658, "misslsdhsclipboard@base");
					func_210(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_210(&uLocal_658, "misstrevor3");
					func_209(&uLocal_658, iLocal_2522);
					if (((func_208() && !is_this_model_a_boat(func_207())) && !is_this_model_a_plane(func_207())) && !is_this_model_a_heli(func_207()))
					{
						func_161(&uLocal_658, func_207());
					}
					break;
				
				case 1:
					func_161(&uLocal_658, joaat("burrito2"));
					break;
			}
			while (!func_206(&uLocal_658))
			{
				wait(0);
				func_175();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_208() && !is_this_model_a_boat(func_207())) && !is_this_model_a_plane(func_207())) && !is_this_model_a_heli(func_207()))
					{
						while (!func_205())
						{
							wait(0);
						}
						Local_579[4 /*8*/] = func_184(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_216())
					{
						if (does_entity_exist(Local_579[4 /*8*/]))
						{
							func_181(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_181(0, -1, 1);
						}
					}
					else
					{
						freeze_entity_position(player_ped_id(), false);
						if (does_entity_exist(Local_579[4 /*8*/]))
						{
							set_ped_into_vehicle(player_ped_id(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_178(0))
					{
						wait(0);
					}
					set_gameplay_cam_relative_heading(0);
					set_gameplay_cam_relative_pitch(0, 1f);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = create_vehicle(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, true);
						set_vehicle_is_considered_by_player(Local_579[0 /*8*/], 0);
						set_vehicle_on_ground_properly(Local_579[0 /*8*/]);
					}
					if (func_216())
					{
						func_181(0, -1, 1);
					}
					else
					{
						freeze_entity_position(player_ped_id(), false);
					}
					set_entity_coords(player_ped_id(), 692.067f, -1004.812f, 21.9059f, 1, false, 0, 1);
					set_entity_heading(player_ped_id(), 359.5735f);
					set_gameplay_cam_relative_heading(0);
					set_gameplay_cam_relative_pitch(0, 1f);
					break;
			}
			if (is_screen_faded_out() || !is_screen_fading_in())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					do_screen_fade_in(800);
				}
			}
			iLocal_654 = false;
		}
	}
}

bool func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	iVar1 = 1;
	if (iParam0)
	{
		if (does_entity_exist(Global_88108[0]))
		{
			Local_579[0 /*8*/] = Global_88108[0];
			set_entity_as_mission_entity(Local_579[0 /*8*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108[1]))
		{
			Local_579[1 /*8*/] = Global_88108[1];
			set_entity_as_mission_entity(Local_579[1 /*8*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108[2]))
		{
			Local_579[2 /*8*/] = Global_88108[2];
			set_entity_as_mission_entity(Local_579[2 /*8*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_88108.f_9[0];
			if (!is_ped_injured(Local_28[1 /*110*/]))
			{
				set_entity_load_collision_flag(Local_28[1 /*110*/], false);
			}
			set_entity_as_mission_entity(Local_28[1 /*110*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_88108.f_28[0];
			set_entity_as_mission_entity(Local_28[1 /*110*/].f_105, true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_88108.f_9[2];
			if (!is_ped_injured(Local_28[0 /*110*/]))
			{
				set_entity_load_collision_flag(Local_28[0 /*110*/], false);
			}
			set_entity_as_mission_entity(Local_28[0 /*110*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_88108.f_9[3];
			if (!is_ped_injured(Local_28[3 /*110*/]))
			{
				set_entity_load_collision_flag(Local_28[2 /*110*/], false);
			}
			set_entity_as_mission_entity(Local_28[2 /*110*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_88108.f_9[4];
			if (!is_ped_injured(Local_28[3 /*110*/]))
			{
				set_entity_load_collision_flag(Local_28[3 /*110*/], false);
			}
			set_entity_as_mission_entity(Local_28[3 /*110*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108.f_9[5]))
		{
			Local_469 = Global_88108.f_9[5];
			if (!is_ped_injured(Local_469))
			{
				set_entity_load_collision_flag(Local_469, false);
			}
			set_entity_as_mission_entity(Local_469, true, 1);
		}
		else
		{
			iVar0 = true;
		}
		if (does_entity_exist(Global_88108[3]))
		{
			Local_579[3 /*8*/] = Global_88108[3];
			set_entity_as_mission_entity(Local_579[3 /*8*/], true, 1);
		}
		else
		{
			iVar0 = true;
		}
	}
	else
	{
		if (!does_entity_exist(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = create_vehicle(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, true);
		}
		if (!does_entity_exist(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = create_vehicle(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, true);
		}
		if (!does_entity_exist(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = create_vehicle(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, true);
		}
		if (!does_entity_exist(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = create_ped(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, true);
			set_entity_health(Local_28[1 /*110*/], 150);
			set_ped_component_variation(Local_28[1 /*110*/], 8, 1, false, 0);
			set_ped_component_variation(Local_28[1 /*110*/], false, 0, 2, 0);
			set_ped_component_variation(Local_28[1 /*110*/], 3, 0, true, 0);
			set_ped_component_variation(Local_28[1 /*110*/], 4, 0, true, 0);
			set_ped_component_variation(Local_28[1 /*110*/], 8, 0, false, 0);
			set_ped_component_variation(Local_28[1 /*110*/], 10, 1, false, 0);
			set_ped_prop_index(Local_28[1 /*110*/], false, 1, 0, false);
			set_ped_prop_index(Local_28[1 /*110*/], true, 0, 0, false);
			set_ped_lod_multiplier(Local_28[1 /*110*/], 2f);
		}
		if (!does_entity_exist(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = create_object(joaat("p_amb_clipboard_01"), get_ped_bone_coords(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), 1, true, false);
			attach_entity_to_entity(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], get_ped_bone_index(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!does_entity_exist(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = create_ped(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0, 1, true);
			set_ped_component_variation(Local_28[0 /*110*/], false, 0, false, 0);
			set_ped_component_variation(Local_28[0 /*110*/], 3, 0, false, 0);
			set_ped_component_variation(Local_28[0 /*110*/], 4, 0, false, 0);
			set_ped_component_variation(Local_28[0 /*110*/], 8, 1, false, 0);
			set_ped_component_variation(Local_28[0 /*110*/], 10, 0, false, 0);
			set_ped_prop_index(Local_28[0 /*110*/], false, 0, 0, false);
			set_ped_lod_multiplier(Local_28[0 /*110*/], 2f);
		}
		if (!does_entity_exist(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = create_ped(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0, 1, true);
			set_ped_component_variation(Local_28[2 /*110*/], false, 0, true, 0);
			set_ped_component_variation(Local_28[2 /*110*/], 3, 0, 2, 0);
			set_ped_component_variation(Local_28[2 /*110*/], 4, 0, 2, 0);
			set_ped_component_variation(Local_28[2 /*110*/], 8, 1, false, 0);
			set_ped_component_variation(Local_28[2 /*110*/], 10, 1, false, 0);
			set_ped_prop_index(Local_28[2 /*110*/], true, 0, 0, false);
			set_ped_lod_multiplier(Local_28[2 /*110*/], 2f);
		}
		if (!does_entity_exist(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = create_ped(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0, 1, true);
			set_ped_component_variation(Local_28[3 /*110*/], false, 1, true, 0);
			set_ped_component_variation(Local_28[3 /*110*/], 3, 0, 3, 0);
			set_ped_component_variation(Local_28[3 /*110*/], 4, 0, 3, 0);
			set_ped_component_variation(Local_28[3 /*110*/], 8, 1, false, 0);
			set_ped_component_variation(Local_28[3 /*110*/], 10, 0, false, 0);
			set_ped_prop_index(Local_28[3 /*110*/], false, 0, 0, false);
			set_ped_lod_multiplier(Local_28[3 /*110*/], 2f);
		}
		if (!does_entity_exist(Local_469) && !does_entity_exist(Local_579[3 /*8*/]))
		{
			if (get_clock_hours() >= 5 && get_clock_hours() < 21)
			{
				Local_579[3 /*8*/] = create_vehicle(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, true);
				Local_469 = create_ped_inside_vehicle(Local_579[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, true);
			}
			else
			{
				Local_579[3 /*8*/] = create_vehicle(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, true);
				Local_469 = create_ped(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, true);
			}
		}
	}
	if (does_entity_exist(Local_579[0 /*8*/]))
	{
		func_180(Local_579[0 /*8*/], 0);
		set_vehicle_doors_locked(Local_579[0 /*8*/], 7);
		set_vehicle_alarm(Local_579[0 /*8*/], 1);
		set_vehicle_has_strong_axles(Local_579[0 /*8*/], true);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (does_entity_exist(Local_579[1 /*8*/]))
	{
		func_180(Local_579[1 /*8*/], 1);
		set_vehicle_engine_on(Local_579[1 /*8*/], true, 1, 0);
		_set_vehicle_door_breakable(Local_579[1 /*8*/], 4, false);
		set_vehicle_door_open(Local_579[1 /*8*/], false, 1, 0);
		set_vehicle_door_open(Local_579[1 /*8*/], 4, 0, 1);
		set_vehicle_has_strong_axles(Local_579[1 /*8*/], true);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (does_entity_exist(Local_579[2 /*8*/]))
	{
		func_180(Local_579[2 /*8*/], 2);
		set_vehicle_door_open(Local_579[2 /*8*/], 2, 1, 0);
		set_vehicle_door_open(Local_579[2 /*8*/], 3, 1, 0);
		set_vehicle_has_strong_axles(Local_579[2 /*8*/], true);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (does_entity_exist(Local_28[1 /*110*/]))
	{
		set_ped_name_debug(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		set_blocking_of_non_temporary_events(Local_28[1 /*110*/], true);
		set_ped_relationship_group_hash(Local_28[1 /*110*/], iLocal_2520);
		stop_ped_speaking(Local_28[1 /*110*/], 1);
		func_168(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		set_ped_hearing_range(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (does_entity_exist(Local_28[0 /*110*/]))
	{
		set_ped_name_debug(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		set_blocking_of_non_temporary_events(Local_28[0 /*110*/], true);
		set_ped_relationship_group_hash(Local_28[0 /*110*/], iLocal_2520);
		stop_ped_speaking(Local_28[0 /*110*/], 1);
		func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		set_ped_hearing_range(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (does_entity_exist(Local_28[2 /*110*/]))
	{
		set_ped_name_debug(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		set_blocking_of_non_temporary_events(Local_28[2 /*110*/], true);
		set_ped_relationship_group_hash(Local_28[2 /*110*/], iLocal_2520);
		func_168(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		stop_ped_speaking(Local_28[2 /*110*/], 1);
		set_ped_hearing_range(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (does_entity_exist(Local_28[3 /*110*/]))
	{
		set_ped_name_debug(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		set_blocking_of_non_temporary_events(Local_28[3 /*110*/], true);
		set_ped_relationship_group_hash(Local_28[3 /*110*/], iLocal_2520);
		set_ped_hearing_range(Local_28[3 /*110*/], 50f);
		func_168(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		stop_ped_speaking(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (does_entity_exist(Local_469) && does_entity_exist(Local_579[3 /*8*/]))
	{
		set_ped_name_debug(Local_469, &(Local_469.f_1));
		set_blocking_of_non_temporary_events(Local_469, true);
		set_ped_relationship_group_hash(Local_469, iLocal_2520);
		set_ped_target_loss_response(Local_469, 2);
		set_ped_combat_attributes(Local_469, 2, false);
		give_weapon_to_ped(Local_469, joaat("weapon_nightstick"), -1, false, true);
		set_ped_accuracy(Local_469, 5);
		func_168(Local_469, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_88108.f_357 == 1)
		{
			if (!func_179(Local_469, 242628503, 1))
			{
				if (does_scenario_of_type_exist_in_area(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2572 = 0;
					open_sequence_task(&iVar2);
					task_vehicle_follow_waypoint_recording(false, Local_579[3 /*8*/], &Local_645, 786599, 0, 0, -1, -1f, 0, 2f);
					task_leave_vehicle(false, Local_579[3 /*8*/], 0);
					task_use_nearest_scenario_to_coord(false, 203.68f, -3132.46f, 4.79f, 1f, 0);
					close_sequence_task(iVar2);
					task_perform_sequence(Local_469, iVar2);
					clear_sequence_task(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_179(Local_469, -1680762137, 1))
		{
			if (does_scenario_of_type_exist_in_area(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2572 = 1;
				task_use_nearest_scenario_chain_to_coord_warp(Local_469, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((does_entity_exist(Local_579[0 /*8*/]) && does_entity_exist(Local_579[1 /*8*/])) && does_entity_exist(Local_579[2 /*8*/])) && does_entity_exist(Local_579[3 /*8*/])) && does_entity_exist(Local_28[1 /*110*/])) && does_entity_exist(Local_28[0 /*110*/])) && does_entity_exist(Local_28[2 /*110*/])) && does_entity_exist(Local_28[3 /*110*/])) && does_entity_exist(Local_469)) && iVar1)
	{
		return true;
	}
	else if (iVar0)
	{
		return false;
	}
	return false;
}

bool func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!iParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_180(var uParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = uParam0;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	if (func_183() && func_216())
	{
		while (Global_91273 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_wetness(player_ped_id());
			}
		}
		if (iParam0 != 0)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (does_entity_exist(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(player_ped_id(), iParam0, 0))
						{
							set_ped_into_vehicle(player_ped_id(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		_stop_all_screen_effects();
		func_182(0);
	}
}

void func_182(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&(Global_91278.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_91278.f_20), 13);
	}
}

bool func_183()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

int func_184(vector3 vParam0, Vector3 fParam1)
{
	return func_185(&(Global_95496.f_2311), vParam0, fParam3, 0);
}

int func_185(var uParam0, vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	var uVar5;
	int iVar8;
	
	if (func_204(uParam0))
	{
		if (func_146(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {*uParam0};
			fParam4 = *uParam0.f_6;
		}
		if (*uParam0.f_12.f_66 == joaat("monster") || *uParam0.f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_203(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_202(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, true);
			if (does_entity_exist(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_194(iVar0, uParam0.f_12, 0, 1);
				iVar4 = true;
				if (is_this_model_a_boat(*uParam0.f_12.f_66) || _is_this_model_an_emergency_boat(*uParam0.f_12.f_66))
				{
					if (!test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y, vParam1.z - 30f, &uVar5))
					{
						iVar4 = false;
					}
				}
				if (iVar4)
				{
					set_vehicle_on_ground_properly(iVar0);
				}
				if (*uParam0.f_7 == 1)
				{
					if (iParam5)
					{
						if (is_this_model_a_car(get_entity_model(iVar0)))
						{
							func_193(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(get_entity_model(iVar0)))
						{
							func_193(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_192(iVar0, *uParam0.f_11);
				}
				else if ((!func_190(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_189(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_186(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (get_hash_key(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_140(24, 0);
							func_186(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_108(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_186(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			iVar0 = true;
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_vehicle_driveable(Global_68319.f_139[iParam0], 0))
				{
					if (is_ped_in_vehicle(player_ped_id(), Global_68319.f_139[iParam0], 0))
					{
						iVar0 = false;
					}
				}
			}
			if (iVar0)
			{
				set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
				delete_vehicle(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_142(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_187(0, Global_68319.f_555[0 /*21*/].f_12) || !func_187(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_143(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_140(iParam0, 0);
		}
	}
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_188(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_111(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

var func_188(var uParam0)
{
	return *uParam0;
}

int func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((does_entity_exist(Global_68319.f_484[iVar0]) && !is_entity_dead(Global_68319.f_484[iVar0], 0)) && is_vehicle_driveable(Global_68319.f_484[iVar0], 0))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((get_entity_model(iParam0) == get_entity_model(Global_68319.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_190(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_191(iParam0, Global_68319.f_139[38], 0))
			{
				func_186(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_191(iParam0, Global_68319.f_139[43], 1))
			{
				func_186(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(player_ped_id(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_191(iParam0, uVar1[iVar6], 1) && func_59(get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_146(vParam1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, 1), get_entity_coords(uVar1[iVar6], 1), 1) < 10f)
					{
						delete_vehicle(&iParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((does_entity_exist(Global_68319.f_484[14]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[14], 0))
			{
				if (get_entity_model(Global_68319.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[14]))
				{
					func_186(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((does_entity_exist(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (get_entity_model(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_186(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((does_entity_exist(iParam1) && !is_entity_dead(iParam1, 0)) && is_vehicle_driveable(iParam1, 0))
	{
		if (iParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_192(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = uParam1;
			Global_88962[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[uParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[uParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || get_entity_model(Global_88942[iVar0]) == func_136(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(player_ped_id(), Global_88942[iVar0], 0))
					{
						set_entity_as_mission_entity(Global_88942[iVar0], false, 1);
						delete_vehicle(&(Global_88942[iVar0]));
						Global_88952[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_194(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_hash_key(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (is_bit_set(*uParam1.f_77, func_148(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_148(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (is_bit_set(*uParam1.f_77, func_148(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_148(iVar1 + 1));
			}
		}
		if (is_bit_set(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (is_bit_set(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((is_bit_set(*uParam1.f_77, 15) || func_201(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_200())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !is_bit_set(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, is_bit_set(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, is_bit_set(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, is_bit_set(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, is_bit_set(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, is_bit_set(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!is_this_model_a_bicycle(get_entity_model(iParam0)))
			{
				if (is_this_model_a_bike(get_entity_model(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_199(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_199(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_195(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (is_bit_set(*uParam1.f_77, func_148(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!is_bit_set(*uParam1.f_77, 23))
			{
				if (is_bit_set(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (is_bit_set(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_195(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_198(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_197(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_197(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_196(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_197(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

void func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_200()
{
	return is_dlc_present(-1691188696);
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return is_bit_set(iVar0, 4);
			}
		}
	}
	return false;
}

void func_202(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_135(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_186(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_203(var uParam0)
{
	if (func_204(uParam0))
	{
		if (has_model_loaded(*uParam0.f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_204(var uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_111(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

int func_205()
{
	return func_203(&(Global_95496.f_2311));
}

bool func_206(var uParam0)
{
	if (func_217(uParam0))
	{
		return true;
	}
	return false;
}

var func_207()
{
	return Global_95496.f_2311.f_12.f_66;
}

int func_208()
{
	return func_204(&(Global_95496.f_2311));
}

bool func_209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!is_valid_interior(iParam1))
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_763)
	{
		if (*uParam0.f_763[iVar0 /*5*/])
		{
			if (*(uParam0.f_763[iVar0 /*5*/]).f_4 == iParam1)
			{
				*(uParam0.f_763[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0.f_763[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		_0x2CA429C029CCF247(iParam1);
		*uParam0.f_763[iVar1 /*5*/] = 1;
		*(uParam0.f_763[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_763[iVar1 /*5*/]).f_4 = iParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

bool func_210(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_273)
	{
		if (*uParam0.f_273[iVar0 /*5*/])
		{
			if (are_strings_equal(*(uParam0.f_273[iVar0 /*5*/]).f_4, sParam1))
			{
				*(uParam0.f_273[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0.f_273[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_anim_dict(sParam1);
		*uParam0.f_273[iVar1 /*5*/] = 1;
		*(uParam0.f_273[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_273[iVar1 /*5*/]).f_4 = sParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

bool func_211(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_374)
	{
		if (*uParam0.f_374[iVar0 /*5*/])
		{
			if (are_strings_equal(*(uParam0.f_374[iVar0 /*5*/]).f_4, sParam1))
			{
				*(uParam0.f_374[iVar0 /*5*/]).f_2 = 0;
				if (!*(uParam0.f_374[iVar0 /*5*/]).f_1)
				{
					*uParam0.f_977 = 1;
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_waypoint_recording(sParam1);
		*uParam0.f_374[iVar1 /*5*/] = 1;
		*(uParam0.f_374[iVar1 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_374[iVar1 /*5*/]).f_4 = sParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

void func_212(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (*uParam0[iVar0 /*5*/])
		{
			*(uParam0[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_151[iVar0 /*5*/])
		{
			*(uParam0.f_151[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_202[iVar0 /*7*/])
		{
			*(uParam0.f_202[iVar0 /*7*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (*uParam0.f_273[iVar0 /*5*/])
		{
			*(uParam0.f_273[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (*uParam0.f_374[iVar0 /*5*/])
		{
			*(uParam0.f_374[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (*uParam0.f_475[iVar0 /*6*/])
		{
			*(uParam0.f_475[iVar0 /*6*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_656[iVar0 /*6*/])
		{
			*(uParam0.f_656[iVar0 /*6*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (*uParam0.f_687[iVar0 /*7*/])
		{
			*(uParam0.f_687[iVar0 /*7*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_737[iVar0 /*5*/])
		{
			*(uParam0.f_737[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (*uParam0.f_763[iVar0 /*5*/])
		{
			*(uParam0.f_763[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (*uParam0.f_874[iVar0 /*5*/])
		{
			*(uParam0.f_874[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (*uParam0.f_925[iVar0 /*5*/])
		{
			*(uParam0.f_925[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (*uParam0.f_779[iVar0 /*5*/])
		{
			*(uParam0.f_779[iVar0 /*5*/]).f_2 = 1;
		}
		iVar0++;
	}
	if (*uParam0.f_863)
	{
		*uParam0.f_863.f_2 = 1;
	}
	if (*uParam0.f_855)
	{
		*uParam0.f_855.f_2 = 1;
	}
	if (*uParam0.f_859)
	{
		*uParam0.f_859.f_2 = 1;
	}
}

bool func_213(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_214(vParam1) || fParam4 <= 0f)
	{
		return false;
	}
	if (*uParam0.f_863)
	{
		if (func_146(*uParam0.f_863.f_4, vParam1, 0) && *uParam0.f_863.f_10 == fParam4)
		{
			*uParam0.f_863.f_2 = 0;
			if (!*uParam0.f_863.f_1)
			{
				*uParam0.f_977 = 1;
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	_new_load_scene_start_safe(vParam1, fParam4, iParam5);
	*uParam0.f_863 = 1;
	*uParam0.f_863.f_3 = get_game_timer();
	*uParam0.f_863.f_4 = {vParam1};
	*uParam0.f_863.f_7 = {0f, 0f, 0f};
	*uParam0.f_863.f_10 = fParam4;
	*uParam0.f_977 = 1;
	return true;
}

bool func_214(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_215(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = {183.533f, -2946.199f, 5.5113f};
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = {692.067f, -1004.812f, 21.9059f};
			*uParam2 = 359.5735f;
			break;
	}
}

int func_216()
{
	return is_bit_set(Global_91278.f_20, 13);
}

bool func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0.f_977)
	{
		iVar0 = true;
		iVar1 = false;
		while (iVar1 < 30)
		{
			if (*uParam0[iVar1 /*5*/])
			{
				if (!*(uParam0[iVar1 /*5*/]).f_1)
				{
					if (has_model_loaded(*(uParam0[iVar1 /*5*/]).f_4))
					{
						*(uParam0[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0[iVar1 /*5*/]).f_1)
					{
						set_model_as_no_longer_needed(*(uParam0[iVar1 /*5*/]).f_4);
						func_219(uParam0[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 20)
		{
			if (*uParam0.f_273[iVar1 /*5*/])
			{
				if (!*(uParam0.f_273[iVar1 /*5*/]).f_1)
				{
					if (has_anim_dict_loaded(*(uParam0.f_273[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_273[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_273[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_273[iVar1 /*5*/]).f_1)
					{
						remove_anim_dict(*(uParam0.f_273[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_273[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 20)
		{
			if (*uParam0.f_374[iVar1 /*5*/])
			{
				if (!*(uParam0.f_374[iVar1 /*5*/]).f_1)
				{
					if (get_is_waypoint_recording_loaded(*(uParam0.f_374[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_374[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_374[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_374[iVar1 /*5*/]).f_1)
					{
						remove_waypoint_recording(*(uParam0.f_374[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_374[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_656[iVar1 /*6*/])
			{
				if (!*(uParam0.f_656[iVar1 /*6*/]).f_1)
				{
					if (has_scaleform_movie_loaded(*(uParam0.f_656[iVar1 /*6*/]).f_5))
					{
						*(uParam0.f_656[iVar1 /*6*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_656[iVar1 /*6*/]).f_2)
				{
					if (*(uParam0.f_656[iVar1 /*6*/]).f_1)
					{
						set_scaleform_movie_as_no_longer_needed(uParam0.f_656[iVar1 /*6*/].f_5);
						func_219(uParam0.f_656[iVar1 /*6*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 30)
		{
			if (*uParam0.f_475[iVar1 /*6*/])
			{
				if (!*(uParam0.f_475[iVar1 /*6*/]).f_1)
				{
					if (has_vehicle_recording_been_loaded(*(uParam0.f_475[iVar1 /*6*/]).f_5, *(uParam0.f_475[iVar1 /*6*/]).f_4))
					{
						*(uParam0.f_475[iVar1 /*6*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_475[iVar1 /*6*/]).f_2)
				{
					if (*(uParam0.f_475[iVar1 /*6*/]).f_1)
					{
						remove_vehicle_recording(*(uParam0.f_475[iVar1 /*6*/]).f_5, *(uParam0.f_475[iVar1 /*6*/]).f_4);
						func_219(uParam0.f_475[iVar1 /*6*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_202[iVar1 /*7*/])
			{
				if (!*(uParam0.f_202[iVar1 /*7*/]).f_1)
				{
					if (has_weapon_asset_loaded(*(uParam0.f_202[iVar1 /*7*/]).f_4))
					{
						*(uParam0.f_202[iVar1 /*7*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_202[iVar1 /*7*/]).f_2)
				{
					if (*(uParam0.f_202[iVar1 /*7*/]).f_1)
					{
						remove_weapon_asset(*(uParam0.f_202[iVar1 /*7*/]).f_4);
						func_219(uParam0.f_202[iVar1 /*7*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_151[iVar1 /*5*/])
			{
				if (!*(uParam0.f_151[iVar1 /*5*/]).f_1)
				{
					if (has_vehicle_asset_loaded(*(uParam0.f_151[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_151[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_151[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_151[iVar1 /*5*/]).f_1)
					{
						remove_vehicle_asset(*(uParam0.f_151[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_151[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_737[iVar1 /*5*/])
			{
				if (!*(uParam0.f_737[iVar1 /*5*/]).f_1)
				{
					if (request_script_audio_bank(*(uParam0.f_737[iVar1 /*5*/]).f_4, false))
					{
						*(uParam0.f_737[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_737[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_737[iVar1 /*5*/]).f_1)
					{
						release_named_script_audio_bank(*(uParam0.f_737[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_737[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 3)
		{
			if (*uParam0.f_763[iVar1 /*5*/])
			{
				if (!*(uParam0.f_763[iVar1 /*5*/]).f_1)
				{
					if (is_interior_ready(*(uParam0.f_763[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_763[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_763[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_763[iVar1 /*5*/]).f_1)
					{
						unpin_interior(*(uParam0.f_763[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_763[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 7)
		{
			if (!is_string_null_or_empty(*(uParam0.f_687[iVar1 /*7*/]).f_4))
			{
				if (*uParam0.f_687[iVar1 /*7*/])
				{
					iVar2 = _0x9B6E70C5CEEF4EEB(*(uParam0.f_687[iVar1 /*7*/]).f_5);
					if (!*(uParam0.f_687[iVar1 /*7*/]).f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 1;
								break;
							
							case 0:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								iVar0 = false;
								break;
							
							case 3:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								func_219(uParam0.f_687[iVar1 /*7*/]);
								break;
							
							case -1:
								*(uParam0.f_687[iVar1 /*7*/]).f_1 = 0;
								release_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_5);
								*uParam0.f_687[iVar1 /*7*/] = 0;
								iVar0 = false;
								break;
							}
					}
				}
				else if (is_interior_ready(*(uParam0.f_687[iVar1 /*7*/]).f_6))
				{
					*(uParam0.f_687[iVar1 /*7*/]).f_5 = load_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_4);
					*(uParam0.f_687[iVar1 /*7*/]).f_3 = get_game_timer();
					*uParam0.f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					iVar0 = false;
				}
				if (*(uParam0.f_687[iVar1 /*7*/]).f_2)
				{
					if (*uParam0.f_687[iVar1 /*7*/])
					{
						if (*(uParam0.f_687[iVar1 /*7*/]).f_1)
						{
							release_movie_mesh_set(*(uParam0.f_687[iVar1 /*7*/]).f_5);
							func_219(uParam0.f_687[iVar1 /*7*/]);
							*(uParam0.f_687[iVar1 /*7*/]).f_4 = "";
						}
						else
						{
							iVar0 = false;
						}
					}
					else
					{
						func_219(uParam0.f_687[iVar1 /*7*/]);
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 10)
		{
			if (*uParam0.f_874[iVar1 /*5*/])
			{
				if (!*(uParam0.f_874[iVar1 /*5*/]).f_1)
				{
					if (assisted_movement_is_route_loaded(*(uParam0.f_874[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_874[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_874[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_874[iVar1 /*5*/]).f_1)
					{
						assisted_movement_remove_route(*(uParam0.f_874[iVar1 /*5*/]).f_4);
						func_219(uParam0.f_874[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_925[iVar1 /*5*/])
			{
				if (!*(uParam0.f_925[iVar1 /*5*/]).f_1)
				{
					if (prepare_alarm(*(uParam0.f_925[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_925[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_925[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_925[iVar1 /*5*/]).f_1)
					{
						func_219(uParam0.f_925[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < *uParam0.f_779)
		{
			if (*uParam0.f_779[iVar1 /*5*/])
			{
				if (!*(uParam0.f_779[iVar1 /*5*/]).f_1)
				{
					if (has_additional_text_loaded(iVar1))
					{
						*(uParam0.f_779[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_779[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_779[iVar1 /*5*/]).f_1)
					{
						clear_additional_text(iVar1, true);
						func_219(uParam0.f_779[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (*uParam0.f_855)
		{
			if (!*uParam0.f_855.f_1)
			{
				if (has_ptfx_asset_loaded())
				{
					*uParam0.f_855.f_1 = 1;
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_855.f_2)
			{
				if (*uParam0.f_855.f_1)
				{
					remove_ptfx_asset();
					func_219(uParam0.f_855);
				}
				else
				{
					iVar0 = false;
				}
			}
		}
		if (*uParam0.f_859)
		{
			if (!*uParam0.f_859.f_1)
			{
				if (rope_are_textures_loaded())
				{
					*uParam0.f_859.f_1 = 1;
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_859.f_2)
			{
				if (*uParam0.f_859.f_1)
				{
					rope_unload_textures();
					func_219(uParam0.f_859);
				}
				else
				{
					iVar0 = false;
				}
			}
		}
		if (*uParam0.f_863 && is_new_load_scene_active())
		{
			if (!*uParam0.f_863.f_1)
			{
				if (is_new_load_scene_loaded())
				{
					*uParam0.f_863.f_1 = 1;
					if (*uParam0.f_978)
					{
						freeze_entity_position(player_ped_id(), false);
						func_218(uParam0);
						*uParam0.f_978 = 0;
					}
				}
				else
				{
					iVar0 = false;
				}
			}
			if (*uParam0.f_863.f_2)
			{
				new_load_scene_stop();
				func_219(uParam0.f_863);
			}
		}
		iVar1 = false;
		while (iVar1 < 5)
		{
			if (*uParam0.f_951[iVar1 /*5*/])
			{
				if (!*(uParam0.f_951[iVar1 /*5*/]).f_1)
				{
					if (has_streamed_texture_dict_loaded(*(uParam0.f_951[iVar1 /*5*/]).f_4))
					{
						*(uParam0.f_951[iVar1 /*5*/]).f_1 = 1;
					}
					else
					{
						iVar0 = false;
					}
				}
				if (*(uParam0.f_951[iVar1 /*5*/]).f_2)
				{
					if (*(uParam0.f_951[iVar1 /*5*/]).f_1)
					{
						func_219(uParam0.f_951[iVar1 /*5*/]);
					}
					else
					{
						iVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (iVar0)
		{
			*uParam0.f_977 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_218(var uParam0)
{
	if (is_new_load_scene_active())
	{
		new_load_scene_stop();
		func_219(uParam0.f_863);
	}
}

void func_219(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1;
}

void func_220()
{
	if (func_221())
	{
		func_8(1);
		terminate_this_thread();
	}
}

bool func_221()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_222()
{
	func_240(&(Local_1663[1 /*8*/]), 53191/*func_241*/, "AI Controller");
	func_240(&(Local_1663[0 /*8*/]), 51556/*func_232*/, "Dialogue");
	func_240(&(Local_1663[3 /*8*/]), 50583/*func_227*/, "Alarms & Wanted Level");
	func_240(&(Local_1663[4 /*8*/]), 50031/*func_223*/, "Music Manager");
}

void func_223(var uParam0)
{
	if (!func_226(uParam0))
	{
		if (*uParam0.f_1 <= 4)
		{
			if ((is_alarm_playing(&cLocal_626) || is_player_wanted_level_greater(player_id(), 0)) || func_22(&(Local_1663[3 /*8*/])))
			{
				trigger_music_event("JHP1A_ATTACK");
				func_225(uParam0, 5, 0);
			}
		}
		switch (*uParam0.f_1)
		{
			case 1:
				if (func_102(player_ped_id(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					trigger_music_event("JHP1A_START");
					func_225(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2568 == 3 || iLocal_2568 == 2)
				{
					trigger_music_event("JHP1A_WAREHOUSE");
					func_225(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2568 == 6 || iLocal_2568 == 9)
				{
					trigger_music_event("JHP1A_VAN");
					func_225(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!is_player_wanted_level_greater(player_id(), 0))
				{
					if (iLocal_2568 == 9 && func_102(player_ped_id(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (prepare_music_event("JHP1A_RADIO_1"))
						{
							trigger_music_event("JHP1A_RADIO_1");
							func_224(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((is_alarm_playing(&cLocal_626) && is_player_wanted_level_greater(player_id(), 0)) && iLocal_2564)
				{
					func_225(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!is_player_wanted_level_greater(player_id(), 0))
				{
					if (prepare_music_event("JHP1A_RADIO_2"))
					{
						trigger_music_event("JHP1A_RADIO_2");
						func_225(uParam0, 6, 0);
						func_224(uParam0);
					}
				}
				break;
			}
	}
	if (func_226(uParam0))
	{
		set_wanted_level_multiplier(1f);
	}
}

void func_224(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		*uParam0.f_4 = get_game_timer();
		*uParam0.f_6 = 0;
		*uParam0.f_1 = -1;
	}
}

void func_225(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		*uParam0.f_5 = get_game_timer();
		*uParam0.f_6 = iParam2;
	}
	*uParam0.f_1 = iParam1;
}

bool func_226(var uParam0)
{
	if (*uParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_227(var uParam0)
{
	if (!func_226(uParam0))
	{
		switch (*uParam0.f_1)
		{
			case 1:
				func_225(uParam0, 2, 2000);
				break;
			
			case 2:
				if (prepare_alarm(&cLocal_626))
				{
					start_alarm(&cLocal_626, false);
					func_230(&cLocal_2345, vLocal_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2345, "", 32);
					func_225(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_228(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				set_player_wanted_level_no_drop(player_id(), 2, 0);
				set_player_wanted_level_now(player_id(), 0);
				set_max_wanted_level(2);
				set_dispatch_cops_for_player(player_id(), 0);
				set_create_random_cops(false);
				_0xBC9490CA15AEA8FB(player_id());
				_0xDC64D2C53493ED12(player_id());
				*uParam0.f_2 = get_game_timer() + 15000;
				func_225(uParam0, 4, 0);
				break;
			
			case 4:
				if (get_game_timer() > *uParam0.f_2)
				{
					set_dispatch_cops_for_player(player_id(), 1);
					set_create_random_cops(true);
					set_max_wanted_level(5);
					iLocal_2564 = 1;
					func_224(uParam0);
				}
				_0xBC9490CA15AEA8FB(player_id());
				_0xDC64D2C53493ED12(player_id());
				break;
			}
	}
}

int func_228(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	return func_229(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, iParam2, iParam4, iParam5);
}

bool func_229(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (func_169(*uParam0))
	{
		if (!iParam7 || iParam1 >= *uParam0.f_5)
		{
			*uParam0.f_38 = get_game_timer();
			if (iParam1 != *uParam0.f_5 || !are_strings_equal(uParam0.f_9, sParam2))
			{
				*uParam0.f_6 = *uParam0.f_5;
				*uParam0.f_5 = iParam1;
				*uParam0.f_17 = {*uParam0.f_9};
				StringCopy(uParam0.f_9, sParam2, 32);
				if (iParam9)
				{
					*uParam0.f_36 = 1;
					*uParam0.f_35 = 0;
				}
				else
				{
					*uParam0.f_36 = 0;
					*uParam0.f_35 = uParam8;
				}
				*uParam0.f_47 = 0;
				*uParam0.f_46 = 0;
				*uParam0.f_48 = 0;
				*uParam0.f_37 = get_game_timer();
				if (!func_214(vParam3))
				{
					*uParam0.f_88 = {vParam3};
				}
				if (iParam6 != 0 && does_entity_exist(iParam6))
				{
					*uParam0.f_91 = iParam6;
				}
				return true;
			}
		}
	}
	return false;
}

void func_230(char* sParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<32> Var0;
	
	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam5;
	Var0.f_26 = fParam4;
	Var0.f_29 = iParam6;
	Var0.f_30 = iParam7;
	Var0.f_31 = iParam8;
	Var0.f_23 = {vParam1};
	func_231(&Var0, 0);
}

int func_231(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if ((is_string_null_or_empty(uParam0.f_1) && *uParam0 != -1) && (!does_entity_exist(Local_28[*uParam0 /*110*/]) || is_ped_injured(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !is_string_null_or_empty(&(Local_1704[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > Local_1704 - 1)
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (is_string_null_or_empty(sParam1) || are_strings_equal(sParam1, uParam0.f_17)))
		{
			Local_1704[iVar0 /*32*/] = *uParam0;
			Local_1704[iVar0 /*32*/].f_1 = {*uParam0.f_1};
			if (*uParam0 != -1)
			{
				Local_1704[iVar0 /*32*/].f_23 = {get_entity_coords(Local_28[*uParam0 /*110*/], 1)};
			}
			else
			{
				Local_1704[iVar0 /*32*/].f_23 = {*uParam0.f_23};
			}
			Local_1704[iVar0 /*32*/].f_26 = *uParam0.f_26;
			Local_1704[iVar0 /*32*/].f_28 = *uParam0.f_28;
			Local_1704[iVar0 /*32*/].f_29 = *uParam0.f_29;
			Local_1704[iVar0 /*32*/].f_27 = get_game_timer();
			Local_1704[iVar0 /*32*/].f_30 = *uParam0.f_30;
			Local_1704[iVar0 /*32*/].f_31 = *uParam0.f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(uParam0.f_1, "", 64);
		*uParam0.f_23 = {0f, 0f, 0f};
		*uParam0.f_26 = 0f;
		*uParam0.f_28 = 0;
		*uParam0.f_29 = 0;
		*uParam0.f_27 = 0;
		*uParam0.f_30 = 0;
		*uParam0.f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_232(var uParam0)
{
	struct<6> Var0;
	int iVar6;
	vector3 vVar7;
	
	if (!func_226(uParam0))
	{
		if (func_44())
		{
			iLocal_2519 = -1;
		}
		else if (iLocal_2519 == -1)
		{
			iLocal_2519 = get_game_timer();
			iLocal_2545 = -1;
			iLocal_2546 = 1;
		}
		if (iLocal_2523 != -1 && !is_string_null_or_empty(&cLocal_2525))
		{
			if (((Local_28[iLocal_2523 /*110*/] != 0 && does_entity_exist(Local_28[iLocal_2523 /*110*/])) && !is_ped_injured(Local_28[iLocal_2523 /*110*/])) && !is_conversation_ped_dead(Local_28[iLocal_2523 /*110*/]))
			{
				if (!is_ped_ragdoll(Local_28[iLocal_2523 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_2535 && (iLocal_2546 || iLocal_2524 > iLocal_2545))
						{
							if (iLocal_2547)
							{
								iLocal_2550 = iLocal_2540;
								iLocal_2551 = iLocal_2545;
								MemCopy(&cLocal_2552, {func_239()}, 4);
								MemCopy(&cLocal_2556, {func_238()}, 4);
								iLocal_2560 = iLocal_2546;
								iLocal_2561 = iLocal_2548;
							}
							if (iLocal_2536)
							{
								func_11();
							}
							else
							{
								func_41();
							}
						}
					}
					if (func_43())
					{
						if (get_game_timer() - iLocal_2519 > iLocal_2533)
						{
							if (func_237(iLocal_2523))
							{
								MemCopy(&Var0, {cLocal_622}, 6);
							}
							else
							{
								StringCopy(&Var0, "SOL1AUD", 24);
							}
							switch (iLocal_2523)
							{
								case 0:
									func_40(&uLocal_2353, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_2353, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_2353, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_2353, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (is_string_null_or_empty(&cLocal_2529))
							{
								if (func_236(&uLocal_2353, &Var0, &cLocal_2525, 8, 0, 0, 0))
								{
									iVar6 = true;
								}
							}
							else if (func_235(&uLocal_2353, &Var0, &cLocal_2525, &cLocal_2529, 8, 0, 0))
							{
								iVar6 = true;
							}
							if (iVar6)
							{
								func_231(&(Local_28[iLocal_2523 /*110*/].f_50), &cLocal_2525);
								iLocal_2545 = iLocal_2524;
								iLocal_2546 = iLocal_2537;
								iLocal_2547 = iLocal_2539;
								iLocal_2548 = iLocal_2538;
								iLocal_2523 = -1;
								iLocal_2524 = -1;
								StringCopy(&cLocal_2525, "", 16);
								iLocal_2533 = 0;
								fLocal_2534 = 9999999f;
								iLocal_2535 = 0;
								iLocal_2536 = 0;
								iLocal_2537 = 1;
								iLocal_2539 = 0;
								iLocal_2538 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2523 = -1;
				iLocal_2524 = -1;
				StringCopy(&cLocal_2525, "", 16);
				iLocal_2533 = 0;
				fLocal_2534 = 9999999f;
				iLocal_2535 = 0;
				iLocal_2536 = 0;
				iLocal_2537 = 1;
				iLocal_2538 = 0;
			}
		}
		if (((func_44() && iLocal_2540 != -1) && iLocal_2548) && !is_string_null_or_empty(&cLocal_2541))
		{
			vVar7 = {get_entity_coords(Local_28[iLocal_2540 /*110*/], 1)};
			if (func_102(player_ped_id(), vVar7, 1) >= 25f)
			{
				iLocal_2550 = iLocal_2540;
				iLocal_2551 = iLocal_2545;
				MemCopy(&cLocal_2552, {func_239()}, 4);
				MemCopy(&cLocal_2556, {func_238()}, 4);
				iLocal_2560 = iLocal_2546;
				iLocal_2561 = iLocal_2548;
				func_11();
				iLocal_2540 = -1;
				iLocal_2545 = -1;
				StringCopy(&cLocal_2541, "", 16);
				iLocal_2546 = 0;
				iLocal_2548 = 0;
			}
		}
		if (iLocal_2550 != -1 && !is_string_null_or_empty(&cLocal_2552))
		{
			if (Local_28[iLocal_2550 /*110*/].f_5 > iLocal_2551)
			{
				iLocal_2550 = -1;
				iLocal_2551 = -1;
				StringCopy(&cLocal_2552, "", 16);
				StringCopy(&cLocal_2556, "", 16);
				iLocal_2560 = 1;
			}
		}
		if (iLocal_2523 == -1 && is_string_null_or_empty(&cLocal_2525))
		{
			if (func_43() && get_game_timer() - iLocal_2519 > 10000)
			{
				if (iLocal_2550 != -1 && !is_string_null_or_empty(&cLocal_2552))
				{
					func_234(iLocal_2550, &cLocal_2552, iLocal_2551, 0, 0, iLocal_2560, 0, 1, &cLocal_2556, iLocal_2561);
					iLocal_2550 = -1;
					iLocal_2551 = -1;
					StringCopy(&cLocal_2552, "", 16);
					StringCopy(&cLocal_2556, "", 16);
					iLocal_2560 = 1;
				}
			}
		}
	}
	func_233(iLocal_2561);
}

void func_233(int iParam0)
{
	if (iParam0)
	{
	}
}

bool func_234(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_101(Local_28[iParam0 /*110*/], player_ped_id(), 1);
	if ((iParam2 > iLocal_2524 || iParam2 == 4) || ((iParam2 == iLocal_2524 && (fVar0 < fLocal_2534 || (func_237(iParam0) && !func_237(iLocal_2523)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					iVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					iVar1 = true;
				}
				break;
		}
		if (iVar1)
		{
			iLocal_2523 = iParam0;
			iLocal_2524 = iParam2;
			StringCopy(&cLocal_2525, sParam1, 16);
			StringCopy(&cLocal_2529, sParam8, 16);
			fLocal_2534 = fVar0;
			iLocal_2535 = iParam3;
			iLocal_2536 = iParam4;
			iLocal_2533 = iParam6;
			iLocal_2537 = iParam5;
			iLocal_2539 = iParam7;
			iLocal_2538 = iParam9;
			return true;
		}
	}
	return false;
}

int func_235(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_29(sParam2, iParam4, 0);
}

int func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_29(sParam2, iParam3, 0);
}

bool func_237(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return true;
	}
	return false;
}

struct<6> func_238()
{
	char[24] cVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (does_text_label_exist(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return cVar0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

struct<6> func_239()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

bool func_240(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return false;
	}
	*uParam0 = 0;
	*uParam0.f_3 = sParam2;
	*uParam0.f_7 = iParam1;
	return true;
}

void func_241(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	
	if (!func_226(uParam0))
	{
		iLocal_2565 = true;
		if (!iLocal_2563)
		{
			if (func_171())
			{
				iLocal_2563 = 1;
				iLocal_2566 = get_game_timer();
			}
		}
		else if (get_game_timer() - iLocal_2566 > 3000)
		{
			iLocal_2563 = 0;
			iLocal_2566 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_261(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469))
		{
			func_261(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1704)
		{
			if (!is_string_null_or_empty(&(Local_1704[iVar1 /*32*/].f_1)) && Local_1704[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1704[iVar1 /*32*/].f_28 == -1 || get_game_timer() - Local_1704[iVar1 /*32*/].f_27 < Local_1704[iVar1 /*32*/].f_28)
				{
					if (Local_1704[iVar1 /*32*/].f_29 <= 0 || get_game_timer() - Local_1704[iVar1 /*32*/].f_27 > Local_1704[iVar1 /*32*/].f_29)
					{
						if (Local_1704[iVar1 /*32*/] != -1 && func_169(Local_28[Local_1704[iVar1 /*32*/] /*110*/]))
						{
							vVar2 = {get_entity_coords(Local_28[Local_1704[iVar1 /*32*/] /*110*/], 1)};
							Local_1704[iVar1 /*32*/].f_23 = {vVar2};
						}
						else
						{
							vVar2 = {Local_1704[iVar1 /*32*/].f_23};
						}
						if (!func_22(&(Local_1663[3 /*8*/])))
						{
							if (Local_1704[iVar1 /*32*/].f_31 && get_distance_between_coords(vVar2, vLocal_642, 1) < 35f)
							{
								func_160(&(Local_1663[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28)
						{
							if (Local_1704[iVar1 /*32*/] == -1 || (iVar0 != Local_1704[iVar1 /*32*/] && Local_28[Local_1704[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (does_entity_exist(Local_28[iVar0 /*110*/]) && !is_ped_injured(Local_28[iVar0 /*110*/]))
								{
									if (func_102(Local_28[iVar0 /*110*/], vVar2, 1) < Local_1704[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42)
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1704[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1663[3 /*8*/])))
											{
												func_160(&(Local_1663[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2345, {Local_1704[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if (get_game_timer() - Local_1704[iVar1 /*32*/].f_27 > Local_1704[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1704[iVar1 /*32*/].f_1), "", 64);
					Local_1704[iVar1 /*32*/] = -1;
					Local_1704[iVar1 /*32*/].f_23 = {0f, 0f, 0f};
					Local_1704[iVar1 /*32*/].f_26 = 0f;
					Local_1704[iVar1 /*32*/].f_27 = -1;
					Local_1704[iVar1 /*32*/].f_28 = -1;
					Local_1704[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_255(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469))
		{
			func_246(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_245(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469))
		{
			func_243(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (does_entity_exist(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!does_entity_exist(Local_28[iVar0 /*110*/]) || is_ped_injured(Local_28[iVar0 /*110*/])) || is_ped_running_ragdoll_task(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					iVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					iVar6 = true;
				}
				if (iVar5 || iVar6)
				{
					if (is_entity_attached_to_entity(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						detach_entity(Local_28[iVar0 /*110*/].f_105, 1, true);
					}
					if (iVar5)
					{
						set_object_as_no_longer_needed(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (iVar6)
					{
						delete_object(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && has_model_loaded(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = create_object(Local_28[iVar0 /*110*/].f_107, get_ped_bone_coords(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, true, false);
					attach_entity_to_entity(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], get_ped_bone_index(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (does_entity_exist(Local_28[iVar1 /*110*/]) && !is_ped_injured(Local_28[iVar1 /*110*/]))
			{
				clear_entity_last_damage_entity(Local_28[iVar1 /*110*/]);
				clear_entity_last_weapon_damage(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_242();
	}
	if (func_226(uParam0))
	{
	}
}

void func_242()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_169(Local_579[iVar0 /*8*/]))
		{
			clear_entity_last_damage_entity(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	_0xF1C03A5352243A30(*iParam0);
	if (func_244(*iParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (*iParam0.f_5)
	{
		case 0:
			if (get_clock_hours() >= 5 && get_clock_hours() < 21)
			{
				if ((!func_179(*iParam0, 1647992574, 1) && !func_179(*iParam0, 242628503, 1)) || iLocal_2572)
				{
					if (does_scenario_exist_in_area(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						task_use_nearest_scenario_to_coord(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2572 = 0;
					}
				}
			}
			else if (!func_179(*iParam0, -1680762137, 1) || !iLocal_2572)
			{
				if (does_scenario_exist_in_area(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					task_use_nearest_scenario_chain_to_coord(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2572 = 1;
				}
			}
			break;
		
		case 3:
			set_ped_using_action_mode(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (get_hash_key(iParam0.f_9))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (has_ped_got_weapon(*iParam0, joaat("weapon_pistol"), 0))
					{
						remove_weapon_from_ped(*iParam0, joaat("weapon_pistol"));
					}
					if (!has_ped_got_weapon(*iParam0, joaat("weapon_nightstick"), 0))
					{
						give_weapon_to_ped(*iParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (get_current_ped_weapon(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							set_current_ped_weapon(*iParam0, joaat("weapon_nightstick"), false);
						}
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (has_ped_got_weapon(*iParam0, joaat("weapon_nightstick"), 0))
					{
						remove_weapon_from_ped(*iParam0, joaat("weapon_nightstick"));
					}
					if (!has_ped_got_weapon(*iParam0, joaat("weapon_pistol"), 0))
					{
						give_weapon_to_ped(*iParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (get_current_ped_weapon(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							set_current_ped_weapon(*iParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_179(*iParam0, 780511057, 1) || func_244(*iParam0))
			{
				task_combat_ped(*iParam0, player_ped_id(), 0, 16);
				task_look_at_entity(*iParam0, player_ped_id(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (get_hash_key(iParam0.f_9))
			{
				case 686645495:
					if (does_entity_exist(*iParam0.f_91))
					{
						if (!_0xFCF37A457CB96DC0(*iParam0, get_entity_coords(*iParam0.f_91, 1), 180f) && get_game_timer() - *iParam0.f_37 < 5000)
						{
							if (!func_179(*iParam0, -875674219, 1) || func_244(*iParam0))
							{
								task_turn_ped_to_face_entity(*iParam0, *iParam0.f_91, -1);
								task_look_at_entity(*iParam0, *iParam0.f_91, -1, 2048, 2);
							}
						}
						else if (!func_179(*iParam0, -2015108952, 1) || func_244(*iParam0))
						{
							task_goto_entity_offset_xy(*iParam0, *iParam0.f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (*iParam0.f_41 && !func_59(*iParam0.f_88, *iParam0.f_43, 1f, 0))
					{
						*iParam0.f_88 = {*iParam0.f_43};
						iVar1 = 1;
					}
					if (!func_214(*iParam0.f_88))
					{
						if (!_0xFCF37A457CB96DC0(*iParam0, *iParam0.f_88, 90f) && get_game_timer() - *iParam0.f_37 < 5000)
						{
							if ((!func_179(*iParam0, 1464580341, 1) || func_244(*iParam0)) || iVar1)
							{
								task_turn_ped_to_face_coord(*iParam0, *iParam0.f_88, 0);
								task_look_at_coord(*iParam0, *iParam0.f_88, -1, 2048, 2);
							}
						}
						else if ((!func_179(*iParam0, 713668775, 1) || func_244(*iParam0)) || iVar1)
						{
							task_follow_nav_mesh_to_coord(*iParam0, *iParam0.f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_214(*iParam0.f_88))
					{
						if (!func_179(*iParam0, 1464580341, 1) || func_244(*iParam0))
						{
							task_turn_ped_to_face_coord(*iParam0, *iParam0.f_88, -1);
							task_look_at_coord(*iParam0, *iParam0.f_88, -1, 2048, 2);
						}
					}
					else
					{
						task_stand_still(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (does_entity_exist(*iParam0.f_91))
					{
						if (!func_179(*iParam0, -875674219, 1) || func_244(*iParam0))
						{
							task_turn_ped_to_face_entity(*iParam0, *iParam0.f_91, -1);
							task_look_at_entity(*iParam0, *iParam0.f_91, -1, 2048, 2);
						}
					}
					else
					{
						task_stand_still(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

bool func_244(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)
{
	if (Param0.f_5 != Param0.f_7 || !are_strings_equal(&(Param0.f_9), &(Param0.f_25)))
	{
		return true;
	}
	return false;
}

void func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	char[24] cVar2;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	
	_0xF1C03A5352243A30(*uParam0);
	if (func_244(*uParam0))
	{
		*uParam0.f_46 = 0;
	}
	switch (*uParam0.f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_179(*uParam0, 1647992574, 1))
						{
							if (does_scenario_exist_in_area(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								task_use_nearest_scenario_to_coord(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_179(*uParam0, 242628503, 1) || func_244(*uParam0)) && has_anim_dict_loaded("misslsdhsclipboard@base"))
						{
							if (!is_entity_playing_anim(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								open_sequence_task(&iLocal_2521);
								if (!func_59(get_entity_coords(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									task_follow_nav_mesh_to_coord(false, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								task_achieve_heading(false, 264.2812f, 0);
								task_play_anim(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								close_sequence_task(iLocal_2521);
								task_perform_sequence(*uParam0, iLocal_2521);
								clear_sequence_task(&iLocal_2521);
							}
							if (does_entity_exist(Local_579[2 /*8*/]))
							{
								task_look_at_coord(*uParam0, get_world_position_of_entity_bone(Local_579[2 /*8*/], get_entity_bone_index_by_name(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							*uParam0.f_46 = 0;
						}
						else if (has_anim_dict_loaded("misslsdhsclipboard@idle_a"))
						{
							switch (*uParam0.f_46)
							{
								case 0:
								case 2:
									if (*uParam0.f_46 == 0 && get_sequence_progress(*uParam0) == 2)
									{
										*uParam0.f_109 = 1;
									}
									if (((*uParam0.f_46 == 0 && get_sequence_progress(*uParam0) == 2) || *uParam0.f_46 == 2) && get_game_timer() > *uParam0.f_37)
									{
										open_sequence_task(&iLocal_2521);
										switch (get_random_int_in_range(false, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										task_play_anim(false, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										task_play_anim(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										close_sequence_task(iLocal_2521);
										task_perform_sequence(*uParam0, iLocal_2521);
										clear_sequence_task(&iLocal_2521);
										*uParam0.f_46 = 1;
									}
									break;
								
								case 1:
									if (get_sequence_progress(*uParam0) == 1)
									{
										*uParam0.f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_179(*uParam0, 1647992574, 1))
						{
							if (does_scenario_exist_in_area(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								task_use_nearest_scenario_to_coord(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (does_scenario_exist_in_area(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								task_use_nearest_scenario_to_coord(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (does_scenario_exist_in_area(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								task_use_nearest_scenario_to_coord(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (get_hash_key(uParam0.f_9))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (does_entity_exist(*uParam0.f_91))
					{
						if (!_0xFCF37A457CB96DC0(*uParam0, get_entity_coords(*uParam0.f_91, 1), 180f) && get_game_timer() - *uParam0.f_37 < 5000)
						{
							if (!func_179(*uParam0, -875674219, 1) || func_244(*uParam0))
							{
								task_turn_ped_to_face_entity(*uParam0, *uParam0.f_91, -1);
								task_look_at_entity(*uParam0, *uParam0.f_91, -1, 2048, 2);
							}
						}
						else if (!func_179(*uParam0, -2015108952, 1) || func_244(*uParam0))
						{
							task_goto_entity_offset_xy(*uParam0, *uParam0.f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (*uParam0.f_41 && !func_59(*uParam0.f_88, *uParam0.f_43, 1f, 0))
					{
						*uParam0.f_88 = {*uParam0.f_43};
						iVar8 = 1;
					}
					if (!func_214(*uParam0.f_88))
					{
						if (!_0xFCF37A457CB96DC0(*uParam0, *uParam0.f_88, 90f) && get_game_timer() - *uParam0.f_37 < 5000)
						{
							if ((!func_179(*uParam0, 1464580341, 1) || func_244(*uParam0)) || iVar8)
							{
								task_turn_ped_to_face_coord(*uParam0, *uParam0.f_88, 0);
								task_look_at_coord(*uParam0, *uParam0.f_88, -1, 2048, 2);
							}
						}
						else if ((!func_179(*uParam0, 713668775, 1) || func_244(*uParam0)) || iVar8)
						{
							task_follow_nav_mesh_to_coord(*uParam0, *uParam0.f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_214(*uParam0.f_88))
					{
						if (!func_179(*uParam0, 1464580341, 1) || func_244(*uParam0))
						{
							task_turn_ped_to_face_coord(*uParam0, *uParam0.f_88, -1);
							task_look_at_coord(*uParam0, *uParam0.f_88, -1, 2048, 2);
						}
					}
					else
					{
						task_stand_still(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (does_entity_exist(*uParam0.f_91))
					{
						if (!func_179(*uParam0, -875674219, 1) || func_244(*uParam0))
						{
							task_turn_ped_to_face_entity(*uParam0, *uParam0.f_91, -1);
							task_look_at_entity(*uParam0, *uParam0.f_91, -1, 2048, 2);
						}
					}
					else
					{
						task_stand_still(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((are_strings_equal(uParam0.f_9, "ENT_FOOT_LEAVE") || are_strings_equal(uParam0.f_9, "ENT_VEH_LEAVE")) || are_strings_equal(uParam0.f_9, "WH_FOOT_LEAVE")) || are_strings_equal(uParam0.f_9, "WH_VEH_LEAVE"))
			{
				if ((!func_179(*uParam0, 242628503, 1) || !is_ped_facing_ped(*uParam0, player_ped_id(), 90f)) || func_244(*uParam0))
				{
					open_sequence_task(&iLocal_2521);
					task_turn_ped_to_face_entity(false, player_ped_id(), 0);
					task_stand_still(false, 2000);
					set_sequence_to_repeat(iLocal_2521, 1);
					close_sequence_task(iLocal_2521);
					task_perform_sequence(*uParam0, iLocal_2521);
					clear_sequence_task(&iLocal_2521);
					task_look_at_entity(*uParam0, player_ped_id(), -1, 2048, 2);
				}
			}
			else
			{
				if (does_entity_exist(iLocal_2571) && is_vehicle_driveable(iLocal_2571, 0))
				{
					fVar11 = func_101(player_ped_id(), iLocal_2571, 1);
				}
				if ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 8)
				{
					iVar9 = player_ped_id();
					fVar12 = 2f;
				}
				else if (iLocal_2568 == 0 || iLocal_2568 == 1)
				{
					iVar9 = player_ped_id();
					fVar12 = 1f;
				}
				else if (iLocal_2568 == 5 && does_entity_exist(iLocal_2571))
				{
					if (fVar11 > 10f)
					{
						iVar9 = player_ped_id();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2571;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2568 == 4 && does_entity_exist(iLocal_2571))
				{
					iVar9 = iLocal_2571;
					fVar12 = 1f;
				}
				if (does_entity_exist(iVar9))
				{
					fVar10 = func_101(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_179(*uParam0, 242628503, 1) && !func_179(*uParam0, 1227113341, 1)) || !is_ped_facing_ped(*uParam0, player_ped_id(), 90f)) || func_244(*uParam0))
					{
						open_sequence_task(&iLocal_2521);
						task_turn_ped_to_face_entity(false, player_ped_id(), 0);
						task_stand_still(false, 2000);
						set_sequence_to_repeat(iLocal_2521, 1);
						close_sequence_task(iLocal_2521);
						task_perform_sequence(*uParam0, iLocal_2521);
						clear_sequence_task(&iLocal_2521);
						task_look_at_entity(*uParam0, player_ped_id(), -1, 2048, 2);
					}
				}
				else if (!func_179(*uParam0, 1227113341, 1) || func_244(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					task_go_to_entity(*uParam0, iVar9, -1, fVar13, fVar12, 2f, 0);
					task_look_at_entity(*uParam0, player_ped_id(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (get_hash_key(uParam0.f_9))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (get_current_ped_weapon(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							set_current_ped_weapon(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_179(*uParam0, 780511057, 1))
					{
						task_combat_ped(*uParam0, player_ped_id(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_179(*uParam0, 242628503, 1) || !is_ped_facing_ped(*uParam0, player_ped_id(), 90f)) || func_244(*uParam0))
					{
						open_sequence_task(&iLocal_2521);
						task_turn_ped_to_face_entity(false, player_ped_id(), 0);
						task_stand_still(false, 2000);
						set_sequence_to_repeat(iLocal_2521, 1);
						close_sequence_task(iLocal_2521);
						task_perform_sequence(*uParam0, iLocal_2521);
						clear_sequence_task(&iLocal_2521);
						task_look_at_entity(*uParam0, player_ped_id(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_102(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_179(*uParam0, 1805844857, 1))
				{
					task_smart_flee_ped(*uParam0, player_ped_id(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_179(*uParam0, 1805844857, 1) && !func_179(*uParam0, 713668775, 1)) || func_244(*uParam0))
			{
				task_follow_nav_mesh_to_coord(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 1193033728);
			}
			break;
		
		case 4:
			switch (get_hash_key(uParam0.f_9))
			{
				case -1645534839:
					if (!func_179(*uParam0, -1519143300, 1) || func_244(*uParam0))
					{
						task_hands_up(*uParam0, -1, player_ped_id(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_246(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	get_current_ped_weapon(player_ped_id(), &uVar0, 1);
	fVar1 = func_101(player_ped_id(), *iParam0, 1);
	if (has_entity_been_damaged_by_any_vehicle(*iParam0))
	{
		iVar3 = 1;
	}
	if (has_entity_been_damaged_by_entity(*iParam0, player_ped_id(), 1))
	{
		if (has_entity_been_damaged_by_weapon(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_253(*iParam0, &uVar5, &iVar6, &iVar7);
	if ((uVar4 && uVar5) && !iVar7)
	{
		if (iVar6)
		{
			func_228(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_228(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((has_ped_received_event(*iParam0, 122) || has_ped_received_event(*iParam0, 123)) || has_ped_received_event(*iParam0, 124)) || has_ped_received_event(*iParam0, 22)) || has_ped_received_event(*iParam0, 23)) || has_ped_received_event(*iParam0, 86))
	{
		func_228(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (*iParam0.f_39 && func_252(4))
	{
		func_228(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (*iParam0.f_39 && func_251(*iParam0, 2))
	{
		func_228(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((*iParam0.f_39 && fVar1 < 8f) && !is_ped_in_any_vehicle(player_ped_id(), 1)) && is_ped_armed(player_ped_id(), 5))
	{
		func_228(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 11)
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_250(iParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 6)
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 10)
	{
		if (*iParam0.f_39)
		{
			func_250(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || has_ped_received_event(*iParam0, 41)) || has_ped_received_event(*iParam0, 112)) || func_248(*iParam0, 0))
	{
		func_228(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || has_ped_received_event(*iParam0, 101)) || func_248(*iParam0, 1))
	{
		func_228(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((*iParam0.f_5 != 3 && *iParam0.f_84) && (*iParam0.f_39 || *iParam0.f_41)) && (fVar1 < 8f || func_102(player_ped_id(), vLocal_642, 1) < 40f))
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", get_entity_coords(player_ped_id(), 1), 1, 1, 0);
		}
	}
	else if (*iParam0.f_5 != 5 && uVar4)
	{
		if ((uVar5 && iVar6) && iVar7)
		{
			func_228(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!iVar6)
		{
			func_228(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (*iParam0.f_34 > -1 && *iParam0.f_34 < Local_1704 - 1)
	{
		iVar8 = Local_1704[*iParam0.f_34 /*32*/].f_30;
		switch (get_hash_key(&(Local_1704[*iParam0.f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case 152436526:
			case 600040296:
				func_228(iParam0, 3, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar8);
				break;
			
			case -1225951737:
				func_247(iParam0, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), get_entity_coords(player_ped_id(), 1), 1, 0, iVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_250(iParam0, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, iVar8);
				break;
			}
	}
	*iParam0.f_34 = -1;
	if (*iParam0.f_7 != *iParam0.f_5)
	{
		*iParam0.f_8 = 1;
	}
	else
	{
		*iParam0.f_8 = 0;
	}
	*iParam0.f_7 = *iParam0.f_5;
	if (!are_strings_equal(iParam0.f_25, iParam0.f_9))
	{
		*iParam0.f_33 = 1;
	}
	else
	{
		*iParam0.f_33 = 0;
	}
	*iParam0.f_25 = {*iParam0.f_9};
	switch (*iParam0.f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (get_hash_key(iParam0.f_9))
			{
				case 58299323:
					if (get_game_timer() - *iParam0.f_37 > 3000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if ((get_game_timer() - *iParam0.f_37 > 4000 && func_102(*iParam0, *iParam0.f_88, 1) < 3f) && is_ped_still(*iParam0))
					{
						func_228(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if (get_game_timer() - *iParam0.f_37 > 4000 && !is_ped_in_current_conversation(*iParam0))
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (get_hash_key(iParam0.f_9))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (((get_game_timer() - *iParam0.f_38 > 8000 && func_102(player_ped_id(), vLocal_642, 1) > 65f) && (func_101(player_ped_id(), *iParam0, 1) > 10f || get_game_timer() - *iParam0.f_38 > 16000)) && !is_ped_in_current_conversation(*iParam0))
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_102(player_ped_id(), vLocal_642, 1) > 300f && func_101(player_ped_id(), *iParam0, 1) > 150f)
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_247(int iParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6)
{
	return func_229(iParam0, iParam1, sParam2, vParam3, 0, iParam6, iParam7, iParam8);
}

bool func_248(struct<110> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_249(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_249(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (does_entity_exist(iParam110) && has_entity_been_damaged_by_entity(iParam110, player_ped_id(), iParam220))
	{
		if (func_101(iParam0, iParam110, 1) < 15f)
		{
			if (has_entity_clear_los_to_entity_in_front(iParam0, iParam110))
			{
				return true;
			}
		}
	}
	return false;
}

int func_250(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	return func_229(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, iParam4, iParam5, iParam6);
}

bool func_251(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && does_entity_exist(iParam0)) && !is_ped_injured(iParam0))
	{
		if (is_ped_armed(player_ped_id(), iParam110) && (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0)))
		{
			return true;
		}
	}
	return false;
}

bool func_252(int iParam0)
{
	if (is_ped_armed(player_ped_id(), iParam0) && (is_player_free_aiming(player_id()) || is_player_targetting_anything(player_id())))
	{
		return true;
	}
	return false;
}

bool func_253(struct<110> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_254(Param0, Local_28[iVar0 /*110*/], &iVar2, &iVar3, &iVar4))
		{
			if (iVar2 && iVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!iVar1)
			{
				iVar1 = true;
				*uParam110 = iVar2;
				*uParam111 = iVar3;
				*uParam112 = iVar4;
			}
			else
			{
				if (iVar2)
				{
					*uParam110 = 1;
				}
				if (iVar3)
				{
					*uParam111 = 1;
				}
				if (iVar4)
				{
					*uParam112 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam111 = 1;
			}
		}
		iVar0++;
	}
	if (iVar1)
	{
		return true;
	}
	*uParam110 = 0;
	*uParam111 = 0;
	*uParam112 = 0;
	return false;
}

bool func_254(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (does_entity_exist(Param110) && is_ped_injured(Param110))
	{
		vVar0 = {get_entity_coords(Param110, 0)};
		if (get_distance_between_coords(get_entity_coords(Param0, 1), vVar0, 1) < 10f)
		{
			if (has_entity_clear_los_to_entity_in_front(Param0, Param110))
			{
				if (get_game_timer() - Param110.f_103 < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = _get_ped_killer(Param110);
					if (is_entity_a_ped(iVar3))
					{
						iVar4 = get_ped_index_from_entity_index(iVar3);
						if ((iVar4 == player_ped_id() && !is_ped_injured(iVar4)) && Param0.f_39)
						{
							*uParam221 = 1;
						}
						else
						{
							*uParam221 = 0;
						}
					}
					else
					{
						*uParam221 = 0;
					}
				}
				else
				{
					*uParam221 = 0;
				}
				iVar5 = get_ped_cause_of_death(Param110);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && get_weapon_damage_type(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return true;
			}
		}
	}
	return false;
}

void func_255(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	var uVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	struct<6> Var27;
	int iVar33;
	float fVar34;
	float fVar35;
	vector3 vVar36;
	vector3 vVar39;
	struct<8> Var42;
	
	get_current_ped_weapon(player_ped_id(), &uVar0, 1);
	fVar1 = func_101(player_ped_id(), *iParam0, 1);
	if (has_entity_been_damaged_by_any_vehicle(*iParam0))
	{
		iVar3 = 1;
	}
	if (has_entity_been_damaged_by_entity(*iParam0, player_ped_id(), 1))
	{
		if (has_entity_been_damaged_by_weapon(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_253(*iParam0, &uVar21, &iVar22, &iVar23);
	if (((*iParam0.f_5 != 5 && uVar20) && uVar21) && !iVar23)
	{
		if (iVar22)
		{
			func_228(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_228(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((has_ped_received_event(*iParam0, 122) || has_ped_received_event(*iParam0, 123)) || has_ped_received_event(*iParam0, 124)) || has_ped_received_event(*iParam0, 22)) || has_ped_received_event(*iParam0, 23)) || has_ped_received_event(*iParam0, 86))
	{
		func_228(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((*iParam0.f_39 && *iParam0.f_5 != 4) && func_252(4))
	{
		func_228(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (*iParam0.f_39 && func_251(*iParam0, 2))
	{
		func_228(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((*iParam0.f_39 && fVar1 < 8f) && *iParam0.f_5 != 4) && !is_ped_in_any_vehicle(player_ped_id(), 1)) && is_ped_armed(player_ped_id(), 5))
	{
		func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 7)
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", get_entity_coords(player_ped_id(), 1), 1, 1, 0);
		}
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 6)
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", get_entity_coords(player_ped_id(), 1), 1, 1, 0);
		}
	}
	else if ((*iParam0.f_39 || *iParam0.f_41) && iLocal_2568 == 10)
	{
		if (*iParam0.f_39)
		{
			func_250(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || has_ped_received_event(*iParam0, 41)) || has_ped_received_event(*iParam0, 112)) || func_248(*iParam0, 0))
	{
		func_228(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || has_ped_received_event(*iParam0, 101)) || func_248(*iParam0, 1))
	{
		func_228(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((*iParam0.f_5 != 3 && *iParam0.f_84) && (*iParam0.f_39 || *iParam0.f_41)) && (fVar1 < 8f || func_102(player_ped_id(), vLocal_642, 1) < 40f))
	{
		if (*iParam0.f_39)
		{
			func_228(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", get_entity_coords(player_ped_id(), 1), 1, 1, 0);
		}
	}
	else if (*iParam0.f_5 != 5 && uVar20)
	{
		if ((uVar21 && iVar22) && iVar23)
		{
			func_228(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!iVar22)
		{
			func_228(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((*iParam0.f_39 || *iParam0.f_41) && (*iParam0.f_86 || *iParam0.f_87)) && iLocal_2568 == 9) && !are_strings_equal(iParam0.f_9, "SEE_VAN_LEAVING")) && !are_strings_equal(iParam0.f_9, "SEE_VAN_LEAVING_1")) && !are_strings_equal(iParam0.f_9, "CHECK_DRIVER")) && func_102(player_ped_id(), vLocal_642, 1) < 15f)
	{
		if (*iParam0.f_39)
		{
			func_250(iParam0, 1, "SEE_VAN_LEAVING", Local_579[func_96() /*8*/], 1, 1, 0);
		}
		else if (*iParam0.f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2568 != 9)
	{
		if ((*iParam0.f_86 && (((iLocal_2568 == 0 || iLocal_2568 == 1) || iLocal_2568 == 4) || *iParam0.f_5 == 1)) || (*iParam0.f_87 && ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 5)))
		{
			if ((iLocal_2568 == 5 || iLocal_2568 == 4) && has_entity_clear_los_to_entity(*iParam0, iLocal_2571, 19))
			{
				switch (iLocal_2568)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_228(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (*iParam0.f_39)
			{
				switch (iLocal_2568)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (*iParam0.f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_228(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (*iParam0.f_41)
			{
				func_247(iParam0, 1, "HEARD_PLAYER", get_entity_coords(player_ped_id(), 1), 1, 1, 0);
			}
		}
	}
	if (*iParam0.f_34 > -1 && *iParam0.f_34 < Local_1704 - 1)
	{
		iVar24 = Local_1704[*iParam0.f_34 /*32*/].f_30;
		switch (get_hash_key(&(Local_1704[*iParam0.f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case 185995093:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 3, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -1645534839:
				if (*iParam0.f_5 != 4)
				{
					if (func_102(*iParam0, Local_1704[*iParam0.f_34 /*32*/].f_23, 1) < 5f)
					{
						func_228(iParam0, 4, 1, "GUN_AIMED_AT", 0, iVar24);
					}
					else
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 0, iVar24);
					}
				}
				break;
			
			case 880647822:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case 1921975061:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 3, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((*iParam0.f_5 != 4 && !are_strings_equal(iParam0.f_9, "STEALING_VAN")) && !are_strings_equal(iParam0.f_9, "GET_IN_VAN")) && !are_strings_equal(iParam0.f_9, "EXIT_VAN"))
				{
					func_228(iParam0, 3, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case 152436526:
				if (*iParam0.f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -426892158:
				if (*iParam0.f_86)
				{
					func_228(iParam0, 2, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -1461435341:
				if (*iParam0.f_86)
				{
					func_228(iParam0, 2, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -972653884:
				if (*iParam0.f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -520621538:
				if (*iParam0.f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -1349994105:
				if (*iParam0.f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), 0, iVar24);
				}
				break;
			
			case -1225951737:
				if (*iParam0.f_87)
				{
					func_247(iParam0, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), get_entity_coords(player_ped_id(), 1), 1, 0, iVar24);
				}
				break;
			
			case 2074432461:
				if (*iParam0.f_87)
				{
					func_250(iParam0, 1, &(Local_1704[*iParam0.f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, iVar24);
				}
				break;
			}
	}
	*iParam0.f_34 = -1;
	if (*iParam0.f_7 != *iParam0.f_5)
	{
		*iParam0.f_8 = 1;
	}
	else
	{
		*iParam0.f_8 = 0;
	}
	*iParam0.f_7 = *iParam0.f_5;
	if (!are_strings_equal(iParam0.f_25, iParam0.f_9))
	{
		*iParam0.f_33 = 1;
	}
	else
	{
		*iParam0.f_33 = 0;
	}
	*iParam0.f_25 = {*iParam0.f_9};
	iVar25 = 0;
	while (iVar25 < Local_28)
	{
		if (Local_28[iVar25 /*110*/] == *iParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (*iParam0.f_5)
	{
		case 5:
			switch (get_hash_key(iParam0.f_9))
			{
				case 152436526:
				case 1921975061:
				case 880647822:
				case 953441746:
				case 1518302817:
				case -1298712083:
					if ((func_260(*iParam0) || *iParam0.f_48 % 2 == 0) || !func_169(Local_469))
					{
						if ((get_hash_key(iParam0.f_9) == 152436526 || get_hash_key(iParam0.f_9) == 1921975061) || get_hash_key(iParam0.f_9) == 880647822)
						{
							if (func_237(iVar26))
							{
								Var27 = {func_259(iVar26, "JS_GUN1")};
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_258(iParam0, iParam0.f_9, &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (*iParam0.f_48 == 0)
								{
									func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_ARM2", 24);
										break;
								}
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_258(iParam0, iParam0.f_9, &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (*iParam0.f_48 == 0)
								{
									func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((get_hash_key(iParam0.f_9) == 953441746 || get_hash_key(iParam0.f_9) == 1518302817) || get_hash_key(iParam0.f_9) == -1298712083)
						{
							if (func_237(iVar26))
							{
								Var27 = {func_259(iVar26, "JS_KILL")};
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_258(iParam0, iParam0.f_9, &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (*iParam0.f_48 == 0)
								{
									func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						*iParam0.f_48++;
					}
					else
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_GETSEC")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SECIN2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						*iParam0.f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (get_hash_key(iParam0.f_9))
			{
				case 1224761252:
					if (func_251(*iParam0, 4))
					{
						func_228(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if (get_game_timer() - *iParam0.f_37 > 1000)
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_251(*iParam0, 4))
					{
						func_228(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if ((get_game_timer() - *iParam0.f_37 > 15000 || get_game_timer() - *iParam0.f_38 > 3000) && !is_ped_in_current_conversation(*iParam0))
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_260(*iParam0) || *iParam0.f_48 == 0)
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_HND1")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						*iParam0.f_48++;
					}
					else
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_HND1")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (*iParam0.f_48 == 0)
							{
								func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						*iParam0.f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar26)
			{
				case 1:
					if (func_43() && get_game_timer() - iLocal_2519 > 5000)
					{
						switch (iLocal_2549)
						{
							case 0:
								func_234(iVar26, "JS_STOCK", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 1:
								func_234(iVar26, "JS_STOCKb", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 2:
								func_234(iVar26, "JS_STOCKc", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 3:
								func_234(iVar26, "JS_STOCKd", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 4:
								func_234(iVar26, "JS_STOCKe", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 5:
								func_234(iVar26, "JS_STOCKf", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 6:
								func_234(iVar26, "JS_STOCKg", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 7:
								func_234(iVar26, "JS_STOCKh", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 8:
								func_234(iVar26, "JS_STOCKi", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 9:
								func_234(iVar26, "JS_STOCKj", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 10:
								func_234(iVar26, "JS_STOCKk", *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!*iParam0.f_49)
					{
						if (func_234(iVar26, "SOL1_AMB1", *iParam0.f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_2353, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_2353, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							*iParam0.f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (are_strings_equal(iParam0.f_9, "SEE_VAN_LEAVING") || are_strings_equal(iParam0.f_9, "CHECK_DRIVER"))
			{
				vVar36 = {func_257(get_offset_from_entity_in_world_coords(player_ped_id(), 0f, 1f, 0f) - get_entity_coords(player_ped_id(), 1))};
				vVar39 = {func_257(get_entity_coords(Local_28[iVar26 /*110*/], 1) - get_entity_coords(player_ped_id(), 1))};
				fVar34 = func_256(vVar36, vVar39);
				fVar35 = acos(fVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && get_entity_speed(player_ped_id()) < 1f)
				{
					iVar33 = true;
				}
			}
			switch (get_hash_key(iParam0.f_9))
			{
				case -414594135:
				case 1260350710:
					if (func_260(*iParam0) && are_strings_equal(iParam0.f_9, "SEE_VAN_LEAVING"))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_LVE1")};
							func_234(iVar26, &Var27, *iParam0.f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (iVar33)
					{
						func_250(iParam0, 1, "CHECK_DRIVER", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					else if (func_102(player_ped_id(), vLocal_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_228(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_260(*iParam0))
					{
						Var27 = {func_259(iVar26, "JS_VAN_LVE2")};
						func_234(iVar26, &Var27, *iParam0.f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if (get_game_timer() - *iParam0.f_37 > 3000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (iVar33)
					{
						if (get_game_timer() - *iParam0.f_37 > 2000 && !is_ped_in_current_conversation(*iParam0))
						{
							func_228(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_250(iParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if ((get_game_timer() - *iParam0.f_37 > 4000 && func_102(*iParam0, *iParam0.f_88, 1) < 3f) && is_ped_still(*iParam0))
					{
						func_228(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_SND_INV")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if (get_game_timer() - *iParam0.f_37 > 4000 && !is_ped_in_current_conversation(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_SNDLOST2")};
							func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_SNDLOST1")};
							func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (get_hash_key(iParam0.f_9))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case -419867425:
					if (((get_game_timer() - *iParam0.f_38 > 8000 && func_102(player_ped_id(), vLocal_642, 1) > 65f) && (func_101(player_ped_id(), *iParam0, 1) > 10f || get_game_timer() - *iParam0.f_38 > 16000)) && !is_ped_in_current_conversation(*iParam0))
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_260(*iParam0) && *iParam0.f_35)
					{
						if (!*iParam0.f_84)
						{
							if (func_237(iVar26))
							{
								Var27 = {func_259(iVar26, "JS_MELE_1")};
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							*iParam0.f_84 = 1;
						}
						else if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_MELE_2")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if (get_game_timer() - *iParam0.f_37 > 4000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_MELE_ESC")};
							func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if ((((get_game_timer() - *iParam0.f_37 > 2000 && *iParam0.f_39) && !is_ped_in_current_conversation(*iParam0)) && iLocal_2568 != 9) && iLocal_2568 != 10)
					{
						func_228(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_IN2")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && get_game_timer() - iLocal_2519 > 2000)
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_TK")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_IN1")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && get_game_timer() - iLocal_2519 > 2000)
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_TK")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = {func_259(iVar26, "JS_VAN_IN2")};
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, iParam0.f_9, &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (get_game_timer() - *iParam0.f_38 > 5000 && !is_ped_in_current_conversation(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_234(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2549 = 0;
				}
				func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (*iParam0.f_39)
				{
					if (get_game_timer() - *iParam0.f_38 > 1000 && !is_ped_in_current_conversation(*iParam0))
					{
						if (((are_strings_equal(iParam0.f_9, "ENT_FOOT") || are_strings_equal(iParam0.f_9, "ENT_VEH")) || are_strings_equal(iParam0.f_9, "WH_FOOT")) || are_strings_equal(iParam0.f_9, "WH_VEH"))
						{
							Var42 = {*iParam0.f_9};
							StringConCat(&Var42, "_LEAVE", 32);
							func_228(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((are_strings_equal(iParam0.f_9, "WH_FOOT") || are_strings_equal(iParam0.f_9, "WH_VEH")) || (are_strings_equal(iParam0.f_9, "WH_DITCH_VEH") && !is_ped_in_current_conversation(*iParam0)))
					{
						if (((*iParam0.f_104 >= 6 && iLocal_2519 != -1) && get_game_timer() - iLocal_2519 > 7000) && get_game_timer() - *iParam0.f_38 == 0)
						{
							func_228(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (get_hash_key(iParam0.f_9))
				{
					case -426892158:
						if (func_260(*iParam0))
						{
							if (!*iParam0.f_82)
							{
								if (func_237(iVar26))
								{
									if (!*iParam0.f_83)
									{
										Var27 = {func_259(iVar26, "JS_ENT_F1")};
										func_234(iVar26, &Var27, *iParam0.f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = {func_259(iVar26, "JS_ENT_F1_P")};
										func_234(iVar26, &Var27, *iParam0.f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_237(iVar26))
							{
								if (!*iParam0.f_83)
								{
									Var27 = {func_259(iVar26, "JS_ENT_F2")};
									func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = {func_259(iVar26, "JS_ENT_F2_P")};
									func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							*iParam0.f_82 = 1;
						}
						else if (func_43() && get_game_timer() - iLocal_2519 > 5000)
						{
							if (func_237(iVar26))
							{
								if (!*iParam0.f_83)
								{
									Var27 = {func_259(iVar26, "JS_ENT_F")};
									func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = {func_259(iVar26, "JS_ENT_F_P")};
									func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_260(*iParam0) || *iParam0.f_48 == 0)
						{
							if (!*iParam0.f_82)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_ENT_V1")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										*iParam0.f_48++;
									}
								}
								*iParam0.f_82 = 1;
							}
							else if (are_strings_equal(iParam0.f_17, "WH_VEH"))
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_ENT_V")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										*iParam0.f_48++;
									}
								}
							}
							else if (func_237(iVar26))
							{
								Var27 = {func_259(iVar26, "JS_ENT_V3")};
								if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									*iParam0.f_48++;
								}
							}
						}
						else if (func_43() && get_game_timer() - iLocal_2519 > 5000)
						{
							if (func_237(iVar26))
							{
								Var27 = {func_259(iVar26, "JS_ENT_V3")};
								func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_260(*iParam0))
						{
							if (*iParam0.f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH1")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							else if (*iParam0.f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH2")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							*iParam0.f_82 = 1;
						}
						else if (*iParam0.f_104 < 6)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 5000)
							{
								if (func_237(iVar26))
								{
									if (*iParam0.f_104 < 5)
									{
										Var27 = {func_259(iVar26, "JS_WH")};
									}
									else
									{
										Var27 = {func_259(iVar26, "JS_WH_F")};
									}
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 10f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_260(*iParam0))
						{
							if (*iParam0.f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH1")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							else if (*iParam0.f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH2")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							*iParam0.f_82 = 1;
						}
						else if (*iParam0.f_104 < 6)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 5000)
							{
								if (func_237(iVar26))
								{
									if (*iParam0.f_104 < 5)
									{
										if (*iParam0.f_104 - 1 % 2 == 0)
										{
											Var27 = {func_259(iVar26, "JS_ENT_V4")};
										}
										else
										{
											Var27 = {func_259(iVar26, "JS_ENT_V3")};
										}
									}
									else
									{
										Var27 = {func_259(iVar26, "JS_WH_F")};
									}
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 10f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_260(*iParam0))
						{
							if (*iParam0.f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH1")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							else if (*iParam0.f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_WH2")};
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 5f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
							*iParam0.f_82 = 1;
						}
						else if (*iParam0.f_104 < 6)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 5000)
							{
								if (func_237(iVar26))
								{
									if (*iParam0.f_104 < 5)
									{
										if (*iParam0.f_104 - 1 % 2 == 0)
										{
											Var27 = {func_259(iVar26, "JS_ENT_V3")};
										}
										else
										{
											Var27 = {func_259(iVar26, "JS_WH")};
										}
									}
									else
									{
										Var27 = {func_259(iVar26, "JS_WH_F")};
									}
									if (func_234(iVar26, &Var27, *iParam0.f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, iParam0.f_9, &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, iParam0.f_9, "", 10f, 3000, 500, 1, 0, 0);
									}
									*iParam0.f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (*iParam0.f_48 == 0)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 1000)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_ENT_V4")};
									func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								*iParam0.f_48++;
							}
						}
						else if (func_43() && get_game_timer() - iLocal_2519 > 5000)
						{
							if (*iParam0.f_48 - 1 % 3 == 0)
							{
								Var27 = {func_259(iVar26, "JS_ENT_V4")};
							}
							else
							{
								Var27 = {func_259(iVar26, "JS_ENT_V3")};
							}
							func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
							*iParam0.f_48++;
						}
						break;
					
					case 1580556320:
						if (*iParam0.f_48 == 0)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 1000)
							{
								if (func_237(iVar26))
								{
									if (!*iParam0.f_83)
									{
										Var27 = {func_259(iVar26, "JS_ENT_F3")};
										func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = {func_259(iVar26, "JS_ENT_F3_P")};
										func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								*iParam0.f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (*iParam0.f_48 == 0)
						{
							if (func_43() && get_game_timer() - iLocal_2519 > 1000)
							{
								if (func_237(iVar26))
								{
									Var27 = {func_259(iVar26, "JS_ENT_V5")};
									func_234(iVar26, &Var27, *iParam0.f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								*iParam0.f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_256(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_257(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_258(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	*iParam0.f_50 = iVar1;
	StringCopy(iParam0.f_50.f_1, sParam1, 64);
	StringCopy(iParam0.f_50.f_17, sParam2, 24);
	*iParam0.f_50.f_28 = iParam4;
	*iParam0.f_50.f_26 = fParam3;
	*iParam0.f_50.f_29 = iParam5;
	*iParam0.f_50.f_30 = iParam7;
	*iParam0.f_50.f_31 = iParam8;
	if (iParam6)
	{
		func_231(iParam0.f_50, 0);
	}
}

struct<6> func_259(int iParam0, char* sParam1)
{
	char[24] cVar0;
	
	StringCopy(&cVar0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&cVar0, "b", 24);
	}
	return cVar0;
}

bool func_260(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return true;
	}
	return false;
}

void func_261(int iParam0)
{
	if (_0x6CD5A433374D4CFB(*iParam0, player_ped_id()))
	{
		*iParam0.f_40 = get_game_timer();
		*iParam0.f_39 = 1;
	}
	else if (get_game_timer() - *iParam0.f_40 > 2000 || !is_ped_facing_ped(*iParam0, player_ped_id(), 90f))
	{
		*iParam0.f_40 = get_game_timer();
		*iParam0.f_39 = 0;
	}
	if (*iParam0.f_39)
	{
		iLocal_2565 = false;
	}
	if (iLocal_2565)
	{
		set_ped_reset_flag(*iParam0, 188, true);
	}
	if (!func_262())
	{
		*iParam0.f_41 = can_ped_hear_player(player_id(), *iParam0);
		if (*iParam0.f_41)
		{
			*iParam0.f_43 = {get_entity_coords(player_ped_id(), 1)};
		}
	}
	else
	{
		*iParam0.f_41 = 0;
	}
	switch (*iParam0.f_5)
	{
		case 5:
		case 4:
		case 3:
			*iParam0.f_102 = 1;
			break;
		
		default:
			*iParam0.f_102 = 0;
			break;
	}
}

bool func_262()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (does_entity_exist(Local_579[iVar0 /*8*/]) && is_vehicle_driveable(Local_579[iVar0 /*8*/], 0))
		{
			if (is_vehicle_alarm_activated(Local_579[iVar0 /*8*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_263()
{
	vector3 vVar0;
	var uVar3;
	
	add_relationship_group("BUGSTAR", &iLocal_2520);
	set_relationship_between_groups(3, 1862763509, iLocal_2520);
	set_relationship_between_groups(5, iLocal_2520, 1862763509);
	set_relationship_between_groups(1, -1533126372, iLocal_2520);
	set_relationship_between_groups(1, iLocal_2520, -1533126372);
	set_all_vehicle_generators_active_in_area(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, 1);
	remove_vehicles_from_generators_in_area(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	clear_area(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, false);
	if (func_183() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_183())
		{
			if (Global_85788)
			{
				iLocal_655++;
			}
		}
		if (func_183())
		{
			func_215(iLocal_655, &vVar0, &uVar3);
			func_269(vVar0, uVar3, 1, 0);
		}
		iLocal_654 = true;
	}
	else
	{
		while (!func_178(1))
		{
			wait(0);
			func_268(&uLocal_658);
		}
	}
	func_267(&uLocal_658, "JHP1A", 0);
	func_210(&uLocal_658, "misslsdhsclipboard@base");
	func_210(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_210(&uLocal_658, "misstrevor3");
	func_161(&uLocal_658, joaat("p_amb_clipboard_01"));
	func_209(&uLocal_658, iLocal_2522);
	func_211(&uLocal_658, &Local_645);
	set_player_noise_multiplier(player_id(), 0.15f);
	func_265(87);
	func_40(&uLocal_2353, 0, player_ped_id(), "MICHAEL", 0, 1);
	func_40(&uLocal_2353, 3, 0, "LESTER", 0, 1);
	func_233(iLocal_2518);
	func_264();
	iLocal_2522 = get_interior_at_coords_with_type(vLocal_642, "po1_08_warehouseint1");
	prepare_alarm(&cLocal_626);
	iLocal_2573 = add_scenario_blocking_area(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!has_additional_text_loaded(false))
	{
		wait(0);
	}
}

void func_264()
{
	Global_85789 = 1;
}

void func_265(int iParam0)
{
	Global_87466 = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case 79:
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_266(int iParam0)
{
	set_bit(&Global_87466, iParam0);
}

bool func_267(var uParam0, char* sParam1, int iParam2)
{
	if (*(uParam0.f_779[iParam2 /*5*/]).f_1 || *uParam0.f_779[iParam2 /*5*/])
	{
		if (are_strings_equal(*(uParam0.f_779[iParam2 /*5*/]).f_4, sParam1))
		{
			*(uParam0.f_779[iParam2 /*5*/]).f_2 = 0;
			*uParam0.f_977 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (iParam2 >= 10)
		{
			_request_additional_text_2(sParam1, iParam2);
		}
		else
		{
			request_additional_text(sParam1, iParam2);
		}
		*uParam0.f_779[iParam2 /*5*/] = 1;
		*(uParam0.f_779[iParam2 /*5*/]).f_3 = get_game_timer();
		*(uParam0.f_779[iParam2 /*5*/]).f_4 = sParam1;
		*uParam0.f_977 = 1;
		return true;
	}
	return false;
}

void func_268(var uParam0)
{
	func_217(uParam0);
}

void func_269(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_183())
	{
		set_this_script_can_be_paused(0);
		clear_bit(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = uParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			set_bit(&(Global_91278.f_20), 14);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			set_bit(&(Global_91278.f_20), 24);
		}
		else
		{
			clear_bit(&(Global_91278.f_20), 24);
		}
		func_182(1);
	}
}

void func_270(int iParam0)
{
	struct<6> Var0;
	char* sVar6;
	
	if (iParam0 == 6)
	{
		func_282();
		func_8(0);
		trigger_music_event("JHP1A_FAIL");
		terminate_this_thread();
	}
	else if (!iLocal_656)
	{
		iLocal_656 = true;
		iLocal_657 = iParam0;
		switch (iLocal_657)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (is_string_null_or_empty(&sVar6))
		{
			func_280(&Var0);
		}
		else
		{
			func_271(&Var0, &sVar6);
		}
		trigger_music_event("JHP1A_FAIL");
	}
}

void func_271(char* sParam0, char* sParam1)
{
	func_279(sParam0, sParam1);
	func_272(0);
}

void func_272(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_273(iVar0))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_273(int iParam0)
{
	var uVar0;
	int iVar1;
	
	func_278();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_277(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_274(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!is_bit_set(Global_82399[iVar1 /*34*/].f_15, true))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_274(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_276(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_275(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_275(var uParam0)
{
	*uParam0 = -15;
}

int func_276(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_276(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_276(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_277(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_278()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_156())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_156())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		set_bit(&(Global_91278.f_20), 25);
	}
}

void func_279(char* sParam0, char* sParam1)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			if (get_length_of_literal_string(sParam1) <= 16)
			{
				StringCopy(&Global_69721, sParam0, 16);
				StringCopy(&Global_69725, sParam1, 16);
			}
		}
	}
}

void func_280(char* sParam0)
{
	func_281(sParam0);
	func_272(0);
}

void func_281(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_282()
{
	int iVar0;
	
	if (has_script_loaded("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_6(0))
	{
		if (!func_283())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_273(iVar0))
				{
					return;
				}
				set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_278();
		}
	}
}

bool func_283()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}
