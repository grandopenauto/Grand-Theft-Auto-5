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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float[] fLocal_74 = new float[51];
	float[] fLocal_126 = new float[51];
	float[] fLocal_178 = new float[51];
	float[] fLocal_230 = new float[51];
	float[] fLocal_282 = new float[51];
	float fLocal_334 = 0;
	float fLocal_335 = 0;
	float fLocal_336 = 0;
	float fLocal_337 = 0;
	float[] fLocal_338 = new float[15];
	float[] fLocal_354 = new float[15];
	float[] fLocal_370 = new float[15];
	float[] fLocal_386 = new float[15];
	float[] fLocal_402 = new float[15];
	float[] fLocal_418 = new float[15];
	float[] fLocal_434 = new float[1];
	float[] fLocal_436 = new float[1];
	float[] fLocal_438 = new float[1];
	float[] fLocal_440 = new float[1];
	Vector3 fLocal_442 = 0;
	Vector3 fLocal_443 = 0;
	Vector3 fLocal_444 = 0;
	float fLocal_445 = 0;
	float fLocal_446 = 0;
	float fLocal_447 = 0;
	Vector3 fLocal_448 = 0;
	float fLocal_449 = 0;
	float fLocal_450 = 0;
	float fLocal_451 = 0;
	float fLocal_452 = 0;
	float fLocal_453 = 0;
	float fLocal_454 = 0;
	float fLocal_455 = 0;
	float fLocal_456 = 0;
	float fLocal_457 = 0;
	Vector3 fLocal_458 = 0;
	Vector3 fLocal_459 = 0;
	float fLocal_460 = 0;
	float fLocal_461 = 0;
	float fLocal_462 = 0;
	int[] iLocal_463 = new int[51];
	int[] iLocal_515 = new int[51];
	int[] iLocal_567 = new int[51];
	int[] iLocal_619 = new int[15];
	int[] iLocal_635 = new int[15];
	int[] iLocal_651 = new int[15];
	int[] iLocal_667 = new int[1];
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	vector3[] vLocal_686 = new vector3[51];
	vector3[] vLocal_840 = new vector3[1];
	vector3[] vLocal_844 = new vector3[15];
	vector3 vLocal_890 = 0;
	vector3 vLocal_893 = 0;
	vector3 vLocal_896 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	vector3 vLocal_905 = 0;
	vector3 vLocal_908 = 0;
	vector3 vLocal_911 = 0;
	vector3 vLocal_914 = 0;
	char[64] cLocal_917 = 0;
	int iLocal_933 = 0;
	int[] iLocal_934 = new int[51];
	int[] iLocal_986 = new int[1];
	int[] iLocal_988 = new int[15];
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int[] iLocal_1007 = new int[51];
	int[] iLocal_1059 = new int[8];
	int[] iLocal_1068 = new int[1];
	int[] iLocal_1070 = new int[15];
	int[] iLocal_1086 = new int[6];
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	var uLocal_1096 = 8;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	int iLocal_1109 = 0;
	int iLocal_1110 = 0;
	int iLocal_1111 = 0;
	struct<8> Local_1112 = 4;
	var uLocal_1120 = 4;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 4;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 4;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 4;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 4;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 4;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	struct<12> Local_1159 = 0;
	struct<12> Local_1171 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	struct<14> Local_1185 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	struct<5>[] Local_1205 = new struct<5>[6];
	struct<12>[] Local_1236 = new struct<12>[5];
	struct<4>[] Local_1297 = new struct<4>[7];
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	var uLocal_1346 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	int iLocal_1355 = 0;
	int[] iLocal_1356 = new int[10];
	int[] iLocal_1367 = new int[2];
	int[] iLocal_1370 = new int[7];
	int[] iLocal_1378 = new int[3];
	int[] iLocal_1382 = new int[2];
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
	int iLocal_1387 = 0;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394 = 0;
	int iLocal_1395 = 0;
	int iLocal_1396 = 0;
	int iLocal_1397 = 0;
	int[] iLocal_1398 = new int[24];
	int[] iLocal_1423 = new int[14];
	int[] iLocal_1438 = new int[6];
	int[] iLocal_1445 = new int[12];
	int[] iLocal_1458 = new int[1];
	int[] iLocal_1460 = new int[1];
	int[] iLocal_1462 = new int[2];
	int[] iLocal_1465 = new int[4];
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	int iLocal_1489 = 0;
	int iLocal_1490 = 0;
	int iLocal_1491 = 0;
	int iLocal_1492 = 0;
	int iLocal_1493 = 0;
	int iLocal_1494 = 0;
	int iLocal_1495 = 0;
	int iLocal_1496 = 0;
	int iLocal_1497 = 0;
	int iLocal_1498 = 0;
	int iLocal_1499 = 0;
	int iLocal_1500 = 0;
	int iLocal_1501 = 0;
	int iLocal_1502 = 0;
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	int iLocal_1506 = 0;
	int iLocal_1507 = 0;
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	int iLocal_1510 = 0;
	int iLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513 = 0;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523 = 0;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int[] iLocal_1527 = new int[7];
	int[] iLocal_1535 = new int[3];
	int[] iLocal_1539 = new int[3];
	int iLocal_1543 = 0;
	int iLocal_1544 = 0;
	int iLocal_1545 = 0;
	int iLocal_1546 = 0;
	int iLocal_1547 = 0;
	int iLocal_1548 = 0;
	int iLocal_1549 = 0;
	int iLocal_1550 = 0;
	int iLocal_1551 = 0;
	int iLocal_1552 = 0;
	int iLocal_1553 = 0;
	int iLocal_1554 = 0;
	int iLocal_1555 = 0;
	int iLocal_1556 = 0;
	int iLocal_1557 = 0;
	int iLocal_1558 = 0;
	int iLocal_1559 = 0;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564 = 0;
	int iLocal_1565 = 0;
	int iLocal_1566 = 0;
	int iLocal_1567 = 0;
	int iLocal_1568 = 0;
	int iLocal_1569 = 0;
	int iLocal_1570 = 0;
	int iLocal_1571 = 0;
	int iLocal_1572 = 0;
	int iLocal_1573 = 0;
	int iLocal_1574 = 0;
	int iLocal_1575 = 0;
	int iLocal_1576 = 0;
	int iLocal_1577 = 0;
	int iLocal_1578 = 0;
	int iLocal_1579 = 0;
	int iLocal_1580 = 0;
	int iLocal_1581 = 0;
	int iLocal_1582 = 0;
	int iLocal_1583 = 0;
	int iLocal_1584 = 0;
	int iLocal_1585 = 0;
	int iLocal_1586 = 0;
	int iLocal_1587 = 0;
	int iLocal_1588 = 0;
	int iLocal_1589 = 0;
	int iLocal_1590 = 0;
	int iLocal_1591 = 0;
	int iLocal_1592 = 0;
	int iLocal_1593 = 0;
	int iLocal_1594 = 0;
	int iLocal_1595 = 0;
	int iLocal_1596 = 0;
	int iLocal_1597 = 0;
	int iLocal_1598 = 0;
	int iLocal_1599 = 0;
	int iLocal_1600 = 0;
	int iLocal_1601 = 0;
	int iLocal_1602 = 0;
	int iLocal_1603 = 0;
	int iLocal_1604 = 0;
	int iLocal_1605 = 0;
	int iLocal_1606 = 0;
	int iLocal_1607 = 0;
	int iLocal_1608 = 0;
	int iLocal_1609 = 0;
	int iLocal_1610 = 0;
	int iLocal_1611 = 0;
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	int iLocal_1618 = 0;
	int iLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	int iLocal_1626 = 0;
	int iLocal_1627 = 0;
	int iLocal_1628 = 0;
	int iLocal_1629 = 0;
	int iLocal_1630 = 0;
	int iLocal_1631 = 0;
	int iLocal_1632 = 0;
	int iLocal_1633 = 0;
	int iLocal_1634 = 0;
	int iLocal_1635 = 0;
	int iLocal_1636 = 0;
	int iLocal_1637 = 0;
	int iLocal_1638 = 0;
	int iLocal_1639 = 0;
	int iLocal_1640 = 0;
	int iLocal_1641 = 0;
	int iLocal_1642 = 0;
	int iLocal_1643 = 0;
	int iLocal_1644 = 0;
	int iLocal_1645 = 0;
	int iLocal_1646 = 0;
	int iLocal_1647 = 0;
	int iLocal_1648 = 0;
	int iLocal_1649 = 0;
	int iLocal_1650 = 0;
	int iLocal_1651 = 0;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	int iLocal_1655 = 0;
	int iLocal_1656 = 0;
	int iLocal_1657 = 0;
	int iLocal_1658 = 0;
	int iLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	int iLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	int iLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681 = 0;
	int iLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	int iLocal_1695 = 0;
	int iLocal_1696 = 0;
	int iLocal_1697 = 0;
	int iLocal_1698 = 0;
	int iLocal_1699 = 0;
	int iLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	int iLocal_1703 = 0;
	vector3 vLocal_1704 = 0;
	vector3 vLocal_1707 = 0;
	vector3 vLocal_1710 = 0;
	vector3 vLocal_1713 = 0;
	vector3 vLocal_1716 = 0;
	vector3 vLocal_1719 = 0;
	vector3 vLocal_1722 = 0;
	vector3 vLocal_1725 = 0;
	vector3 vLocal_1728 = 0;
	vector3 vLocal_1731 = 0;
	vector3 vLocal_1734 = 0;
	vector3 vLocal_1737 = 0;
	vector3 vLocal_1740 = 0;
	vector3 vLocal_1743 = 0;
	float fLocal_1746 = 0;
	float fLocal_1747 = 0;
	Vector3 fLocal_1748 = 0;
	float fLocal_1749 = 0;
	float fLocal_1750 = 0;
	var uLocal_1751 = 0;
	float fLocal_1752 = 0;
	float fLocal_1753 = 0;
	float fLocal_1754 = 0;
	float fLocal_1755 = 0;
	float[] fLocal_1756 = new float[3];
	int iLocal_1760 = 0;
	int iLocal_1761 = 0;
	int iLocal_1762 = 0;
	int iLocal_1763 = 0;
	int iLocal_1764 = 0;
	int iLocal_1765 = 0;
	int iLocal_1766 = 0;
	int iLocal_1767 = 0;
	int iLocal_1768 = 0;
	int iLocal_1769 = 0;
	int iLocal_1770 = 0;
	int iLocal_1771 = 0;
	int iLocal_1772 = 0;
	int iLocal_1773 = 0;
	int iLocal_1774 = 0;
	int iLocal_1775 = 0;
	int iLocal_1776 = 0;
	int iLocal_1777 = 0;
	int iLocal_1778 = 0;
	int[] iLocal_1779 = new int[3];
	int iLocal_1783 = 0;
	int iLocal_1784 = 0;
	int iLocal_1785 = 0;
	int iLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	int iLocal_1790 = 0;
	int iLocal_1791 = 0;
	int iLocal_1792 = 0;
	int iLocal_1793 = 0;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	int iLocal_1800 = 0;
	int iLocal_1801 = 0;
	int iLocal_1802 = 0;
	int iLocal_1803 = 0;
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810 = 0;
	int iLocal_1811 = 0;
	int iLocal_1812 = 0;
	int iLocal_1813 = 0;
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	int iLocal_1820 = 0;
	int iLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	int iLocal_1824 = 0;
	int iLocal_1825 = 0;
	int iLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	int iLocal_1842 = 0;
	float fLocal_1843 = 0;
	int iLocal_1844 = 0;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	var uLocal_1847 = 16;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	int iLocal_2012 = 0;
	struct<6> Local_2013 = 0;
	struct<6> Local_2019 = 0;
	struct<5> Local_2025 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 21;
	var uLocal_2033 = 6;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	int iLocal_2043 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_43 = true;
	iLocal_50 = true;
	iLocal_72 = true;
	fLocal_442 = 120f;
	fLocal_443 = 0f;
	fLocal_445 = 1f;
	fLocal_446 = 0f;
	fLocal_447 = 1f;
	fLocal_448 = 30f;
	fLocal_450 = 1f;
	fLocal_451 = 5f;
	fLocal_452 = 1f;
	fLocal_453 = 1f;
	fLocal_454 = 100f;
	fLocal_455 = 100f;
	fLocal_456 = 0f;
	fLocal_457 = 7000f;
	fLocal_458 = 0f;
	fLocal_459 = 0f;
	fLocal_460 = 0.3f;
	fLocal_461 = 0.5f;
	fLocal_462 = 50f;
	iLocal_672 = -1;
	iLocal_680 = -1;
	iLocal_681 = -1;
	iLocal_1837 = get_sound_id();
	iLocal_2012 = 18;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_964();
		func_962();
	}
	iLocal_1473 = iLocal_1473;
	while (true)
	{
		_0x208784099002BC30("M_Chop", 0);
		if (func_906())
		{
			if (!is_ped_injured(player_ped_id()))
			{
				func_904(0);
				func_901();
				func_900();
				if (!is_ped_injured(iLocal_1353))
				{
					if (Local_1185 != 2)
					{
						if (!iLocal_1654)
						{
							_0x153973AB99FE8980(iLocal_1353, "FRANKLIN_0_CHOP_Group", 0f);
							iLocal_1654 = 1;
						}
					}
					else if (iLocal_1654)
					{
						_0x18EB48CFC41F2EA0(iLocal_1353, 0f);
						iLocal_1654 = 0;
					}
				}
				switch (iLocal_1107)
				{
					case 0:
						func_891();
						break;
					
					case 1:
						func_818();
						break;
					
					case 2:
						func_768();
						break;
					
					case 3:
						func_253();
						break;
					
					case 4:
						func_4();
						break;
					}
			}
		}
		else if (_0xB56BBBCC2955D9CB())
		{
			set_cutscene_ped_component_variation("Lamar", false, 0, false, false);
			set_cutscene_ped_component_variation("Lamar", true, 1, false, false);
			set_cutscene_ped_component_variation("Lamar", 2, 2, false, false);
			set_cutscene_ped_component_variation("Lamar", 3, 2, true, false);
			set_cutscene_ped_component_variation("Lamar", 4, 4, false, false);
			set_cutscene_ped_component_variation("Lamar", 5, 0, false, false);
			set_cutscene_ped_component_variation("Lamar", 8, 0, false, false);
			set_cutscene_ped_component_variation("Lamar", 9, 0, false, false);
			set_cutscene_ped_component_variation("Lamar", 6, 1, false, false);
			func_1();
			set_cutscene_ped_component_variation("Chop", 3, 0, iLocal_1829, false);
		}
		wait(0);
	}
}

void func_1()
{
	if (func_3())
	{
		iLocal_1829 = func_2();
	}
	else
	{
		iLocal_1829 = 4;
	}
}

var func_2()
{
	return Global_101154.f_24643.f_254.f_4;
}

bool func_3()
{
	if (Global_101154.f_24643.f_263)
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar29;
	var uVar32;
	float fVar33;
	int iVar34;
	struct<6> Var35;
	vector3 vVar41;
	Vector3 fVar44;
	vector3 vVar45;
	
	if (!is_ped_injured(Local_1159))
	{
		set_ped_can_play_ambient_base_anims(Local_1159, 0);
		set_ped_can_play_ambient_anims(Local_1159, 0);
	}
	if (!iLocal_1677)
	{
		if (get_game_timer() >= iLocal_1768 + 5000)
		{
			func_246(1);
			iLocal_1677 = 1;
		}
	}
	if (!iLocal_1472)
	{
		if (!iLocal_1618)
		{
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				if (iLocal_1591)
				{
					func_244(2);
				}
				else if (iLocal_1333 == 7)
				{
					if (!is_ped_injured(Local_1159) && is_entity_attached_to_any_vehicle(Local_1159))
					{
						func_244(3);
					}
					else
					{
						func_244(1);
					}
				}
				else
				{
					func_244(3);
				}
				if (!iLocal_1617)
				{
					if (iLocal_1611)
					{
						if (get_game_timer() >= iLocal_1810)
						{
							if (!is_ped_injured(Local_1159))
							{
								set_entity_only_damaged_by_player(Local_1159, true);
								iLocal_1617 = 1;
							}
						}
					}
				}
				iVar0 = get_player_wanted_level(player_id());
				if (iVar0 > 0)
				{
					if (!iLocal_1475)
					{
						if (iLocal_1604)
						{
							if (iLocal_1333 <= 6)
							{
								func_243("FC_LOSECOP", -1, 16000, 28000, 0);
							}
						}
					}
				}
				switch (iLocal_1333)
				{
					case 0:
						if (iVar0 == 0)
						{
							if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
							{
								if (!iLocal_1699)
								{
									switch (iLocal_1202)
									{
										case 2:
											sVar1 = "FKN0_VAN3";
											break;
										
										case 0:
											sVar1 = "FKN0_VAN2";
											break;
										
										case 1:
											sVar1 = "FKN0_VAN1";
											break;
									}
									if (func_240(sVar1, 0, 0, 0, 1))
									{
										iLocal_1699 = 1;
									}
								}
								else if (func_240("FKN0_GOLAM", 0, 0, 0, 1))
								{
									iLocal_1600 = 1;
									iLocal_1333 = 1;
								}
							}
						}
						func_224(1, 0, 1, 1);
						break;
					
					case 1:
						if (iVar0 == 0)
						{
							if (iLocal_1476)
							{
								if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
								{
									if (iLocal_1761 % 2 == 0)
									{
										sVar2 = "FKN0_B2AV1";
									}
									else
									{
										sVar2 = "FKN0_B2AV2";
									}
									if (func_240(sVar2, 0, 0, 0, 1))
									{
										iLocal_1333 = 2;
									}
								}
							}
						}
						func_224(1, 0, 1, 1);
						break;
					
					case 2:
						if (iVar0 == 0)
						{
							if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
							{
								if (iLocal_1479)
								{
									if (func_222())
									{
										iLocal_1479 = 0;
									}
								}
								else
								{
									if (iLocal_1761 % 2 == 0)
									{
										sVar3 = "FKN0_MKCALL";
									}
									else
									{
										sVar3 = "FKN0_MKCALL2";
									}
									if (func_240(sVar3, 0, 0, 0, 1))
									{
										iLocal_1333 = 3;
									}
								}
							}
						}
						func_224(1, 0, 1, 1);
						break;
					
					case 3:
						if (iVar0 == 0)
						{
							if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]) && iLocal_1327 >= 3)
							{
								if (iLocal_1761 % 2 == 0)
								{
									sVar4 = "FKN0_LACALL";
								}
								else
								{
									sVar4 = "FKN0_LACALL2";
								}
								if (func_240(sVar4, 0, 0, 0, 1))
								{
									_0x293220DA1B46CEBC(1.5f, 11f, 3);
									iLocal_1333 = 4;
								}
							}
						}
						func_224(1, 0, 1, 1);
						break;
					
					case 4:
						if (iVar0 == 0)
						{
							if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
							{
								if (iLocal_1761 % 2 == 0)
								{
									sVar5 = "FKN0_AFCALL";
								}
								else
								{
									sVar5 = "FKN0_AFCALL2";
								}
								if (func_240(sVar5, 0, 0, 0, 1))
								{
									iLocal_1333 = 5;
								}
							}
						}
						func_224(!iLocal_1333 == 5, 0, 1, 1);
						break;
					
					case 5:
						if (iVar0 == 0)
						{
							if (!func_221())
							{
								if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
								{
									func_220();
									iLocal_1788 = get_game_timer();
									iLocal_1766 = get_game_timer() + 15000;
									func_208(&uLocal_1847, "FKN0AUD", "FKN0_OPEN", 7, 0, 0, 0, 0);
									iLocal_1333 = 6;
								}
							}
						}
						func_224(0, 0, 1, 1);
						break;
					
					case 6:
						iVar6 = false;
						if (!iLocal_1674)
						{
							if (get_game_timer() >= iLocal_1766 || !is_ped_in_any_vehicle(player_ped_id(), 0))
							{
								func_206();
								iLocal_1674 = true;
							}
						}
						if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
						{
							func_243("FKN0_STOP", -1, 15000, 25000, 1);
						}
						if (iVar0 == 0)
						{
							iLocal_1820 = -1;
							if (iLocal_1642)
							{
								_0x552369F549563AD5(0);
								iLocal_1642 = 0;
							}
							if (get_game_timer() >= iLocal_1788 + 22000)
							{
								set_player_wanted_level(player_id(), 2, 0);
								set_player_wanted_level_now(player_id(), 0);
								set_wanted_level_difficulty(player_id(), 0f);
							}
							else
							{
								get_ground_z_for_3d_coord(get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -2f, 0f), &fVar7, 0);
								if (get_entity_speed(iLocal_1367[0]) <= 0.5f && is_entity_upright(iLocal_1367[0], 90f))
								{
									iLocal_1834 = get_game_timer();
									iVar9 = true;
									vVar10 = {get_entity_coords(Local_1159, 1)};
									iVar13 = 1;
									while (iVar13 <= 5)
									{
										if (iVar9)
										{
											vVar14 = {get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -2f - IntToFloat(iVar13) * 0.6f, 0f)};
											get_ground_z_for_3d_coord(vVar14, &fVar8, 0);
											fVar17 = fVar8 - fVar7;
											if (fVar17 < 0f)
											{
												fVar17 *= -1f;
											}
											if (fVar17 > 0.5f)
											{
												iVar9 = false;
											}
											fVar7 = fVar8;
											if (fVar7 < vVar10.z - 2f)
											{
												iVar9 = false;
											}
										}
										iVar13++;
									}
									switch (iLocal_1351)
									{
										case 0:
											vVar21 = {get_entity_coords(iLocal_1367[0], 1)};
											vVar18 = {get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -5f, 0f)};
											vVar18.z = vVar18.z;
											iLocal_1697 = 1;
											iLocal_2042 = _cast_3d_ray_point_to_point(vVar21, vVar18, 0.5f, 1, iLocal_1367[0], 4);
											iLocal_1351 = 1;
											break;
										
										case 1:
											iVar24 = _get_raycast_result(iLocal_2042, &iVar25, &uVar26, &uVar29, &uVar32);
											if (iVar24 == 2)
											{
												if (iVar25 == 0)
												{
													iLocal_1697 = 0;
													iLocal_1351 = 0;
												}
												else
												{
													iLocal_1697 = 1;
													iLocal_1351 = 0;
												}
											}
											else if (iVar24 == 0)
											{
												iLocal_1697 = 1;
												iLocal_1351 = 0;
											}
											break;
									}
									if ((iLocal_1697 || !iVar9) || is_entity_in_water(iLocal_1367[0]))
									{
										fLocal_1752 += 1f * timestep();
										if (fLocal_1752 >= 1f)
										{
											iVar6 = true;
										}
									}
									else
									{
										fLocal_1752 = 0f;
									}
									if ((((((is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]) && iLocal_1327 >= 5) && func_204()) && is_entity_upright(iLocal_1367[0], 10f)) && iVar9) && !iLocal_1697) && !is_entity_in_water(iLocal_1367[0]))
									{
										if (!func_221() || !iLocal_1674)
										{
											if (get_player_wanted_level(player_id()) == 0)
											{
												set_player_wanted_level(player_id(), false, 0);
												set_player_wanted_level_now(player_id(), 0);
											}
											iLocal_1333 = 7;
											clear_help(1);
											iLocal_1472 = 1;
										}
									}
								}
								else
								{
									iLocal_1697 = 1;
									fLocal_1752 = 0f;
									if (!iLocal_1590)
									{
										reset_wanted_level_difficulty(player_id());
										iLocal_1788 = get_game_timer();
										iLocal_1766 = get_game_timer() + 11000;
										iLocal_1590 = 1;
									}
									else if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
									{
										if (get_game_timer() >= iLocal_1834 + 300)
										{
											func_202("FC_LETOUT", 1, !iLocal_1674, 100);
										}
									}
								}
							}
						}
						else
						{
							if (!iLocal_1642)
							{
								_0x552369F549563AD5(1);
								iLocal_1642 = 1;
							}
							if (!iLocal_1701)
							{
								play_police_report("SCRIPTED_SCANNER_REPORT_FRANLIN_0_KIDNAP", 0f);
								iLocal_1701 = 1;
							}
							iLocal_1697 = 1;
							iLocal_1590 = 0;
							iLocal_1788 = get_game_timer();
						}
						if (iVar6)
						{
							if (!func_201("FC_POSHLP"))
							{
								func_200("FC_POSHLP");
							}
						}
						else if (func_201("FC_POSHLP"))
						{
							clear_help(1);
						}
						if (!iLocal_1472)
						{
							func_224(0, 0, 1, 1);
						}
						break;
					
					case 7:
						if (!iLocal_1656)
						{
							disable_control_action(0, 75, 1);
							if (is_entity_playing_anim(iLocal_1367[0], func_199(4), "InCar_GetOutofBack_Speedo", 3))
							{
								if (get_entity_anim_current_time(iLocal_1367[0], func_199(4), "InCar_GetOutofBack_Speedo") >= 0.33f)
								{
									stop_entity_anim(iLocal_1367[0], "InCar_GetOutofBack_Speedo", func_199(4), -1000f);
									set_vehicle_door_shut(iLocal_1367[0], 2, 1);
									set_vehicle_door_shut(iLocal_1367[0], 3, 1);
									_0x293220DA1B46CEBC(8f, 8f, 4);
									iLocal_1656 = true;
								}
							}
							else
							{
								iLocal_1656 = true;
							}
						}
						if (!iLocal_1629)
						{
							if (does_entity_exist(iLocal_1386))
							{
								if (!is_entity_at_entity(player_ped_id(), iLocal_1386, 100f, 100f, 100f, 0, 0, 0))
								{
									set_object_as_no_longer_needed(&iLocal_1386);
									func_198(20);
									iLocal_1629 = 1;
								}
							}
						}
						if (!iLocal_1630)
						{
							if (does_entity_exist(Local_1159))
							{
								if (!is_ped_injured(Local_1159))
								{
									if (!is_entity_at_entity(player_ped_id(), Local_1159, 150f, 150f, 150f, 0, 0, 0))
									{
										if (!is_entity_on_screen(Local_1159))
										{
											set_ped_as_no_longer_needed(&Local_1159);
											func_198(2);
											iLocal_1630 = 1;
										}
									}
								}
							}
						}
						if (iLocal_1347 != 3)
						{
							if (iLocal_1347 > 0)
							{
								if (is_entity_playing_anim(player_ped_id(), func_199(4), "Take_off_Bandana", 3))
								{
									fVar33 = get_entity_anim_current_time(player_ped_id(), func_199(4), "Take_off_Bandana");
								}
								else if (get_game_timer() >= iLocal_1812 + 500)
								{
									func_81(0);
									if (does_entity_exist(iLocal_1387))
									{
										delete_object(&iLocal_1387);
									}
									iLocal_1347 = 3;
								}
							}
							switch (iLocal_1347)
							{
								case 0:
									iVar34 = false;
									if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
									{
										if (!is_ped_injured(Local_1159))
										{
											if (is_entity_at_coord(player_ped_id(), func_80(4), 120f, 120f, 120f, false, false, 0) || !is_entity_at_entity(player_ped_id(), Local_1159, 75f, 75f, 75f, 0, 0, 0))
											{
												iVar34 = true;
											}
										}
										else
										{
											iVar34 = true;
										}
										if (iVar34)
										{
											if (get_follow_vehicle_cam_view_mode() != 4)
											{
												task_play_anim(player_ped_id(), func_199(4), "Take_off_Bandana", 8f, -8f, -1, 48, 0, 0, 0, 0);
												_0x2208438012482A1A(player_ped_id(), 0, 0);
												iLocal_1387 = create_object(func_73(21), 0f, 1f, 2f, 1, true, false);
												set_entity_visible(iLocal_1387, false, 0);
												attach_entity_to_entity(iLocal_1387, player_ped_id(), get_ped_bone_index(player_ped_id(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
												play_entity_anim(iLocal_1387, "take_off_bandana_bandana", func_199(4), 8f, false, 0, 0, 0f, 0);
												iLocal_1812 = get_game_timer();
												iLocal_1347 = 1;
											}
											else
											{
												func_81(0);
												iLocal_1347 = 3;
											}
										}
									}
									break;
								
								case 1:
									if (fVar33 >= 0.2f)
									{
										func_81(0);
										if (does_entity_exist(iLocal_1387))
										{
											set_entity_visible(iLocal_1387, true, 0);
										}
										iLocal_1347 = 2;
									}
									break;
								
								case 2:
									if (fVar33 >= 0.95f)
									{
										if (does_entity_exist(iLocal_1387))
										{
											delete_object(&iLocal_1387);
										}
										iLocal_1347 = 3;
									}
									break;
							}
						}
						else
						{
							func_72("fra_0_mcs_5_p1", func_80(4), 100f, 120f);
							if (_0xB56BBBCC2955D9CB())
							{
								if (!is_ped_injured(iLocal_1352))
								{
									_0x2A56C06EBEF2B0D9("Lamar", iLocal_1352, false);
								}
								if (!is_ped_injured(iLocal_1353))
								{
									_0x2A56C06EBEF2B0D9("Chop", iLocal_1353, false);
								}
							}
						}
						if (!iLocal_1471)
						{
							if (iVar0 == 0 && !iLocal_1475)
							{
								if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
								{
									if (!iLocal_1478)
									{
										if (!iLocal_1612)
										{
											if (!is_ped_injured(Local_1159))
											{
												if (is_entity_at_entity(player_ped_id(), Local_1159, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1612 = func_240("FKN0_DSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1612 = 1;
												}
											}
											else
											{
												iLocal_1612 = 1;
											}
										}
										else if (!iLocal_1614)
										{
											if (!is_ped_injured(Local_1159))
											{
												if (is_entity_at_entity(player_ped_id(), Local_1159, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1614 = func_240("FKN0_FSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1614 = 1;
												}
											}
											else
											{
												iLocal_1614 = 1;
											}
										}
										else if (!iLocal_1613)
										{
											if (!is_ped_injured(Local_1159))
											{
												if (is_entity_at_entity(player_ped_id(), Local_1159, 30f, 30f, 4f, 0, 1, 0))
												{
													iLocal_1613 = func_240("FKN0_LAMFU", 0, 0, 0, 1);
												}
												else
												{
													iLocal_1613 = 1;
												}
											}
											else
											{
												iLocal_1613 = 1;
											}
										}
										else if (!iLocal_1600)
										{
											iLocal_1600 = func_240("FKN0_GOREC", 0, 0, 0, 1);
										}
										else if (iLocal_1476)
										{
											if (!iLocal_1475)
											{
												iLocal_1478 = func_240("FKN0_B3AV1", 0, 0, 0, 1);
											}
										}
									}
									else if (!iLocal_1625)
									{
										if (iLocal_1479)
										{
											if (func_222())
											{
												iLocal_1479 = 0;
											}
										}
										if (!func_71(2))
										{
											if (func_221())
											{
												Var35 = {func_70()};
												if (are_strings_equal(&Var35, "FKN0_B3AV1_12"))
												{
													func_206();
													iLocal_1625 = 1;
												}
											}
										}
									}
								}
							}
						}
						if (!iLocal_1475)
						{
							if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_1367[0]))
							{
								if (func_204())
								{
									if (iVar0 == 0)
									{
										if (iLocal_1656)
										{
											if (is_entity_at_coord(player_ped_id(), func_80(4), Global_19, true, true, 0))
											{
												if (func_69(1, 0, 1))
												{
													func_68();
													func_220();
													func_206();
													iLocal_1764 = get_game_timer();
													iLocal_1475 = true;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							func_68();
							if (func_67(iLocal_1367[0], 10f, 1, 1056964608, 0, 1, 0))
							{
								if (get_game_timer() >= iLocal_1764 + 1000)
								{
									if (!func_221())
									{
										if (func_204())
										{
											if (iLocal_1110 > 0)
											{
												if (func_66())
												{
													iLocal_1472 = 1;
												}
											}
										}
									}
								}
							}
						}
						func_65();
						if (!iLocal_1475)
						{
							func_224(1, 0, 1, 1);
						}
						break;
				}
				if (!iLocal_1602)
				{
					if (!is_ped_injured(Local_1159))
					{
						if (!is_entity_attached(Local_1159))
						{
							vVar41 = {get_anim_initial_offset_rotation(func_199(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, 0f, 2) + Vector(206f, 0f, 0f)};
							func_64(iLocal_1353, iLocal_1367[0], vVar41.z, 0, 0, 0, 0, 0, 0);
							set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
							task_play_anim(iLocal_1353, func_199(5), "CHOP_GROWL_TO_SIT", 8f, -8f, -1, 4098, 0, 0, 0, 0);
							_0x2208438012482A1A(iLocal_1353, 0, 0);
							iLocal_1602 = 1;
						}
					}
				}
				else if (!iLocal_1603)
				{
					if (!is_ped_injured(iLocal_1353))
					{
						if (is_entity_playing_anim(iLocal_1353, func_199(5), "CHOP_GROWL_TO_SIT", 3))
						{
							fVar44 = get_entity_anim_current_time(iLocal_1353, func_199(5), "CHOP_GROWL_TO_SIT");
							if (fVar44 >= 0.98f)
							{
								task_play_anim(iLocal_1353, func_199(5), "CHOP_SIT_LOOP", 8f, -8f, -1, 4097, 0, 0, 0, 0);
								iLocal_1603 = 1;
							}
							else if (fVar44 >= 0f)
							{
								vVar45 = {get_anim_initial_offset_rotation(func_199(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, fVar44, 2) + Vector(206f, 0f, 0f)};
								func_64(iLocal_1353, iLocal_1367[0], vVar45.z, 0, 0, 0, 0, 0, 0);
								set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
							}
						}
					}
				}
				else
				{
					func_62(iLocal_1353, iLocal_1367[0], &uLocal_1346, &uLocal_1751, &uLocal_1822, &uLocal_1823, 0);
				}
				if (!iLocal_1599)
				{
					if (!is_entity_at_coord(player_ped_id(), func_80(19), 150f, 150f, 150f, false, false, 0))
					{
						func_61();
					}
				}
			}
		}
		else
		{
			if (!is_ped_injured(iLocal_1353))
			{
				set_ped_move_rate_override(iLocal_1353, 1f);
				if (is_waypoint_playback_going_on_for_ped(iLocal_1353))
				{
					waypoint_playback_override_speed(iLocal_1353, 2f, 0);
				}
			}
			if (!is_ped_injured(iLocal_1352))
			{
				set_ped_move_rate_override(iLocal_1352, 1.15f);
			}
			if (get_game_timer() >= iLocal_1811 + 3200)
			{
				if (does_entity_exist(iLocal_1352))
				{
					delete_ped(&iLocal_1352);
				}
				if (does_entity_exist(iLocal_1353))
				{
					delete_ped(&iLocal_1353);
				}
				func_57();
			}
		}
	}
	else if (!iLocal_1611)
	{
		func_48();
	}
	else
	{
		func_6();
	}
	if (!is_ped_injured(iLocal_1352) && !is_ped_injured(player_ped_id()))
	{
		switch (iLocal_1327)
		{
			case 0:
				iLocal_1386 = create_object(func_73(20), 0f, 1f, 2f, 1, true, false);
				attach_entity_to_entity(iLocal_1386, iLocal_1352, get_ped_bone_index(iLocal_1352, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				if (!is_entity_playing_anim(iLocal_1352, func_199(4), "InCar_PhoneIdle_Lem", 3))
				{
					task_play_anim(iLocal_1352, func_199(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				iLocal_1327 = 1;
				break;
			
			case 1:
				func_5(&iLocal_1349, 0, 0);
				if (iLocal_1333 >= 3)
				{
					task_play_anim(iLocal_1352, func_199(4), "Incar_Phonetalk_enter_Lem", 8f, -8f, -1, 2, 0, 0, 0, 0);
					iLocal_1327 = 2;
				}
				break;
			
			case 2:
				func_5(&iLocal_1349, 0, 3);
				if (is_entity_playing_anim(iLocal_1352, func_199(4), "Incar_Phonetalk_enter_Lem", 3))
				{
					if (get_entity_anim_current_time(iLocal_1352, func_199(4), "Incar_Phonetalk_enter_Lem") >= 0.98f)
					{
						task_play_anim(iLocal_1352, func_199(4), "Incar_Phonetalk_loop_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
						iLocal_1327 = 3;
					}
				}
				break;
			
			case 3:
				func_5(&iLocal_1349, 0, 3);
				if (iLocal_1333 >= 5)
				{
					task_play_anim(iLocal_1352, func_199(4), "Incar_Phonetalk_exit_Lem", 8f, -8f, -1, 2, 0, 0, 0, 0);
					iLocal_1327 = 4;
				}
				break;
			
			case 4:
				func_5(&iLocal_1349, 0, 0);
				if (is_entity_playing_anim(iLocal_1352, func_199(4), "Incar_Phonetalk_exit_Lem", 3))
				{
					if (get_entity_anim_current_time(iLocal_1352, func_199(4), "Incar_Phonetalk_exit_Lem") >= 0.98f)
					{
						task_play_anim(iLocal_1352, func_199(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0, 0, 0, 0);
						iLocal_1327 = 5;
					}
				}
				break;
			
			case 5:
				func_5(&iLocal_1349, 0, 0);
				if (iLocal_1333 == 7)
				{
					if (iLocal_1645 && iLocal_1111 == 1)
					{
						task_clear_look_at(player_ped_id());
						task_play_anim(iLocal_1352, func_199(4), "InCar_PhoneSnatch_Lem", 8f, -8f, -1, 0, 0, 0, 0, 0);
						task_play_anim(player_ped_id(), func_199(4), "InCar_PhoneSnatch_Fra", 8f, -8f, -1, 32, 0, 0, 0, 0);
						iLocal_1327 = 6;
					}
				}
				break;
			
			case 6:
				func_5(&iLocal_1349, 0, 0);
				if (!is_entity_playing_anim(player_ped_id(), func_199(4), "InCar_PhoneSnatch_Fra", 3))
				{
					iLocal_1327 = 7;
				}
				else if (!iLocal_1601)
				{
					if (get_entity_anim_current_time(player_ped_id(), func_199(4), "InCar_PhoneSnatch_Fra") >= 0.47f)
					{
						if (does_entity_exist(iLocal_1386))
						{
							detach_entity(iLocal_1386, 1, true);
							apply_force_to_entity_center_of_mass(iLocal_1386, 1, 3f, 0.5f, 0f, 0, 1, 1, 0);
							iLocal_1601 = 1;
						}
					}
				}
				break;
			
			case 7:
				func_5(&iLocal_1349, 0, 0);
				break;
			}
	}
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		if (iParam1)
		{
			get_mobile_phone_render_id(&iVar0);
		}
		else
		{
			if (!is_named_rendertarget_registered("npcphone"))
			{
				register_named_rendertarget("npcphone", 0);
				link_named_rendertarget(joaat("prop_npc_phone"));
			}
			iVar0 = get_named_rendertarget_render_id("npcphone");
		}
		set_text_render_id(iVar0);
		_push_scaleform_movie_function(*iParam0, "DISPLAY_VIEW");
		_push_scaleform_movie_function_parameter_int(iParam2);
		_pop_scaleform_movie_function_void();
		draw_scaleform_movie(*iParam0, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
	}
}

void func_6()
{
	set_all_random_peds_flee_this_frame(player_id());
	switch (iLocal_1111)
	{
		case 0:
			iLocal_1763 = get_game_timer();
			if (!is_ped_injured(player_ped_id()))
			{
				register_entity_for_cutscene(player_ped_id(), "Franklin", 0, false, 0);
			}
			if (!is_ped_injured(iLocal_1352))
			{
				task_clear_look_at(iLocal_1352);
				register_entity_for_cutscene(iLocal_1352, "Lamar", 0, false, 0);
			}
			if (!is_ped_injured(iLocal_1353))
			{
				detach_entity(iLocal_1353, 1, true);
				register_entity_for_cutscene(iLocal_1353, "Chop", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				register_entity_for_cutscene(iLocal_1367[0], "Kidnapping_van", 0, false, 0);
			}
			start_cutscene(0);
			_0x48621C9FCA3EBD28(4);
			set_cutscene_fade_values(0, 0, 0, 0);
			iLocal_1111 = 1;
			break;
		
		case 1:
			if (!iLocal_1474)
			{
				if (is_cutscene_playing())
				{
					func_47();
					clear_area(-214.28f, -1488.487f, 30.23007f, 8.7f, 1, 0, 0, false);
					clear_area_of_projectiles(-217.5089f, -1498.443f, 30.23968f, 15f, 0);
					stop_fire_in_range(-217.5089f, -1498.443f, 30.23968f, 15f);
					remove_particle_fx_in_range(-217.5089f, -1498.443f, 30.23968f, 15f);
					if (does_entity_exist(Local_1159))
					{
						delete_ped(&Local_1159);
					}
					if (is_vehicle_driveable(iLocal_1367[0], 0))
					{
						set_vehicle_door_control(iLocal_1367[0], true, 0, 0f);
						set_vehicle_door_control(iLocal_1367[0], 3, 0, 0f);
						set_vehicle_door_control(iLocal_1367[0], 2, 0, 0f);
					}
					func_46(iLocal_1367[0]);
					func_81(0);
					func_45(0);
					func_43(8);
					if (does_entity_exist(Local_1159))
					{
						delete_ped(&Local_1159);
					}
					if (is_screen_faded_out())
					{
						do_screen_fade_in(800);
					}
					iLocal_1474 = 1;
				}
			}
			if (can_set_exit_state_for_registered_entity("Lamar", false))
			{
				if (!is_ped_injured(iLocal_1352))
				{
					set_entity_coords(iLocal_1352, -220.9665f, -1506.377f, 30.44023f, 1, false, 0, 1);
					set_entity_heading(iLocal_1352, 152.7f);
					task_follow_waypoint_recording(iLocal_1352, "hood9", 5, 0, -1);
					force_ped_motion_state(iLocal_1352, -668482597, true, 1, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Chop", false))
			{
				if (!is_ped_injured(iLocal_1353))
				{
					set_entity_proofs(iLocal_1353, false, false, false, false, false, false, 0, true);
					set_entity_coords(iLocal_1353, -219.7466f, -1505.899f, 30.45473f, 1, false, 0, 1);
					set_entity_heading(iLocal_1353, 144f);
					task_follow_waypoint_recording(iLocal_1353, "hood10", 5, 0, -1);
					force_ped_motion_state(iLocal_1353, -530524, true, 1, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Franklin", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0) && !is_ped_injured(player_ped_id()))
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_1367[0], -1);
					_0x2208438012482A1A(player_ped_id(), 0, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Kidnapping_van", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					set_vehicle_on_ground_properly(iLocal_1367[0]);
					func_42();
				}
				iLocal_1811 = get_game_timer();
				iLocal_1618 = true;
			}
			else if (!iLocal_1618)
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
				}
			}
			if (can_set_exit_state_for_camera(0))
			{
				_0x81CBAE94390F9F89();
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
				set_player_control(player_id(), false, 256);
			}
			break;
		
		case 2:
			break;
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (iParam4)
	{
		func_41(1, 1, 1, 0);
	}
	if (iParam0)
	{
		func_24();
		func_15(1, 1, iParam7, 0);
		display_radar(false);
		display_hud(false);
		iLocal_1762 = get_game_timer();
	}
	else
	{
		func_15(0, 1, iParam7, 0);
		if (iParam1)
		{
			set_player_control(player_id(), true, 0);
			display_radar(true);
			display_hud(true);
			func_9(0);
			if (iParam2 < 0)
			{
				iVar0 = false;
			}
			else
			{
				iVar0 = true;
			}
			if (iParam6)
			{
				render_script_cams(false, iVar0, iParam2, 1, 0, 0);
			}
			if (does_cam_exist(iLocal_1396))
			{
				destroy_cam(iLocal_1396, 0);
			}
			if (does_cam_exist(iLocal_1397))
			{
				destroy_cam(iLocal_1397, 0);
			}
			func_8(&iLocal_1394);
			func_8(&iLocal_1395);
			if (iParam3)
			{
				set_gameplay_cam_relative_heading(0f);
			}
		}
		iLocal_1472 = 0;
		iLocal_1473 = false;
		iLocal_1474 = 0;
		iLocal_1475 = false;
		iLocal_1111 = 0;
		if (iParam5)
		{
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
		}
	}
}

void func_8(int iParam0)
{
	if (does_cam_exist(*iParam0))
	{
		destroy_cam(*iParam0, 0);
	}
}

void func_9(int iParam0)
{
	if (iParam0)
	{
		func_14();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_13(0))
		{
			func_10(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_10(int iParam0)
{
	if (Global_14571)
	{
		func_12(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_11())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_11()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_13(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

void func_14()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_23(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_11())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_23(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_20(player_id())) && !func_17(player_id(), 0)) && !func_16())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_20(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_16()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

var func_19()
{
	return Global_1312747;
}

bool func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return true;
	}
	if (func_21())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_21()
{
	return is_bit_set(Global_2359301, 3);
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

void func_24()
{
	func_9(1);
	func_27(&Local_1185, &Local_1112, 0, 1, 1, 1, 0, 3000);
	_0xCB0360EFEFB2580D(0);
	func_43(9);
	func_26(0, -1);
	func_25(1);
	set_player_control(player_id(), false, 0);
}

void func_25(int iParam0)
{
	if (does_particle_fx_looped_exist(iLocal_1845))
	{
		if (iParam0)
		{
			remove_particle_fx(iLocal_1845, 0);
		}
		else
		{
			stop_particle_fx_looped(iLocal_1845, 0);
		}
	}
	if (iParam0)
	{
		remove_particle_fx_in_range(Local_1185.f_13, 2f);
	}
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (iParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_29(iParam0, iParam1);
	func_28(iParam0);
	if (iParam2)
	{
		*iParam1.f_7 = 4;
	}
	if (iParam3)
	{
		set_player_control(player_id(), true, 0);
	}
	if (iParam4)
	{
		display_hud(true);
		display_radar(true);
	}
	if (iParam5)
	{
		render_script_cams(false, iParam6, iParam7, 1, 0, 0);
		if (iParam6)
		{
			*iParam0.f_5 = get_game_timer() + iParam7;
		}
	}
	*iParam0 = 0;
}

void func_28(int iParam0)
{
	switch (*iParam0.f_2)
	{
		case 1:
			if (((get_script_task_status(player_ped_id(), 1056466932) != 7 || get_script_task_status(player_ped_id(), -1689270312) != 7) || get_script_task_status(player_ped_id(), -875674219) != 7) || get_script_task_status(player_ped_id(), 1227113341) != 7)
			{
				if (((get_script_task_status(player_ped_id(), 1056466932) == 0 || get_script_task_status(player_ped_id(), -1689270312) == 0) || get_script_task_status(player_ped_id(), -875674219) == 0) || get_script_task_status(player_ped_id(), 1227113341) == 0)
				{
					*iParam0.f_9 = 1;
				}
				clear_ped_tasks(player_ped_id());
			}
			break;
	}
}

void func_29(int iParam0, var uParam1)
{
	clear_timecycle_modifier();
	if (_get_screen_effect_is_active("ChopVision"))
	{
		_stop_screen_effect("ChopVision");
	}
	func_32(iParam0, uParam1, 0);
	func_23(0);
	if (*iParam0.f_12 != -1)
	{
		if (!has_sound_finished(*iParam0.f_12))
		{
			stop_sound(*iParam0.f_12);
		}
	}
	func_31(iParam0, 0);
	_0xF239400E16C23E08(0, -1);
	if (!is_ped_injured(*iParam0.f_3))
	{
		stop_ped_speaking(*iParam0.f_3, 0);
	}
	if (does_entity_exist(*iParam0.f_3))
	{
		if (is_entity_dead(*iParam0.f_3, 0) || !is_entity_dead(*iParam0.f_3, 0))
		{
			set_entity_visible(*iParam0.f_3, true, 0);
		}
	}
	switch (*iParam0.f_2)
	{
		case 1:
			func_30();
			break;
	}
}

void func_30()
{
	Global_55756 = 0;
}

void func_31(int iParam0, int iParam1)
{
	release_named_script_audio_bank("CHOP_CAM_A_01");
	release_named_script_audio_bank("CHOP_CAM_A_02");
	release_named_script_audio_bank("CHOP_CAM_B_01");
	release_named_script_audio_bank("CHOP_CAM_B_02");
	release_named_script_audio_bank("CHOP_CAM_C_01");
	release_named_script_audio_bank("CHOP_CAM_C_02");
	*iParam0.f_10 = 0;
	if (iParam1)
	{
		if (*iParam0.f_12 != -1)
		{
			release_sound_id(*iParam0.f_12);
			*iParam0.f_12 = -1;
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (iVar1 != *iParam0.f_1)
			{
				if (func_34(iVar1))
				{
					func_33(iParam1, iVar1, 2);
				}
			}
			else
			{
				func_33(iParam1, iVar1, 3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar2 = iVar0;
			func_33(iParam1, iVar2, 0);
			iVar0++;
		}
	}
	if (*iParam0.f_8)
	{
		func_33(iParam1, 2, 0);
	}
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != 4)
	{
		*uParam0.f_34[iParam1] = iParam2;
		Global_17118.f_2 = 1;
	}
}

bool func_34(int iParam0)
{
	if (Global_101154.f_7775 || Global_3)
	{
		if (!Global_69489 || (Global_69489 && iParam0 != func_39(func_40())))
		{
			if (!func_35(func_38(iParam0)))
			{
				return false;
			}
		}
	}
	return true;
}

int func_35(int iParam0)
{
	if (func_37(iParam0))
	{
		if ((Global_101154.f_7775 || Global_3) || func_36(0))
		{
			return Global_101154.f_1826.f_539.f_1576[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return is_bit_set(Global_69737, false);
}

int func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

int func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

var func_40()
{
	return Global_101154.f_1826.f_539.f_3551;
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		func_206();
	}
	if (iParam1)
	{
		if (!func_221() || (iParam0 && !iParam3))
		{
			clear_prints();
		}
		_0xB57D8DD645CFA2CF();
	}
	if (iParam2)
	{
		clear_help(1);
	}
}

void func_42()
{
	if (is_vehicle_driveable(iLocal_1367[0], 0))
	{
		set_vehicle_door_shut(iLocal_1367[0], true, 1);
		set_vehicle_door_shut(iLocal_1367[0], false, 1);
		set_vehicle_door_shut(iLocal_1367[0], 2, 1);
		set_vehicle_door_shut(iLocal_1367[0], 3, 1);
	}
}

void func_43(int iParam0)
{
	stop_audio_scene(func_44(iParam0));
}

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FRANKLIN_0_WALK_TO_VAN";
			break;
		
		case 1:
			return "FRANKLIN_0_DRIVE_TO_VINEWOOD";
			break;
		
		case 2:
			return "FRANKLIN_0_CAR_CHASE";
			break;
		
		case 3:
			return "FRANKLIN_0_FOOT_CHASE_START";
			break;
		
		case 4:
			return "FRANKLIN_0_BREAK_THROUGH_FENCE";
			break;
		
		case 5:
			return "FRANKLIN_0_D_ESCAPES";
			break;
		
		case 6:
			return "FRANKLIN_0_SEARCH_BOXCARS";
			break;
		
		case 7:
			return "FRANKLIN_0_DRIVE_TO_LAMARS";
			break;
		
		case 8:
			return "FRANKLIN_0_TAKE_LAMAR_BACK";
			break;
		
		case 9:
			return "FRANKLIN_0_CHOP_CAM";
			break;
		
		case 10:
			return "FRANKLIN_0_FOCUS_ON_BIKER";
			break;
	}
	return "";
}

void func_45(int iParam0)
{
	if (!is_ped_injured(iLocal_1352))
	{
		if (iParam0)
		{
			set_ped_component_variation(iLocal_1352, 8, 1, false, 0);
		}
		else
		{
			set_ped_component_variation(iLocal_1352, 8, 0, false, 0);
		}
	}
}

void func_46(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			if (is_entity_on_fire(iParam0))
			{
				stop_entity_fire(iParam0);
				set_entity_health(iParam0, get_entity_health(iParam0) + 200);
				set_vehicle_engine_health(iParam0, get_vehicle_engine_health(iParam0) + 200f);
				set_vehicle_petrol_tank_health(iParam0, get_vehicle_petrol_tank_health(iParam0) + 200f);
				stop_fire_in_range(get_entity_coords(iParam0, 1), 5f);
				clear_area(get_entity_coords(iParam0, 1), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_47()
{
	func_41(1, 1, 1, 0);
	func_24();
	func_15(1, 1, 1, 0);
}

void func_48()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	
	set_all_random_peds_flee_this_frame(player_id());
	switch (iLocal_1111)
	{
		case 0:
			if (!iLocal_1645)
			{
				func_41(0, 1, 0, 0);
				set_player_control(player_id(), false, 256);
				iLocal_1824 = get_game_timer();
				iLocal_1645 = 1;
			}
			else if (!iLocal_1610)
			{
				iVar0 = false;
				if (!iLocal_1674)
				{
					if (_0xE73364DB90778FFA())
					{
						iVar0 = true;
					}
				}
				if (iVar0)
				{
					func_56();
					iLocal_1824 = get_game_timer();
					iLocal_1610 = 1;
				}
				else if (func_240("FKN0_OPEN", 0, 0, 0, 1))
				{
					iLocal_1824 = get_game_timer();
					iLocal_1610 = 1;
				}
			}
			else
			{
				if (is_scripted_conversation_loaded())
				{
				}
				if ((get_game_timer() >= iLocal_1824 + 1800 && is_scripted_conversation_loaded()) || get_game_timer() >= iLocal_1824 + 5000)
				{
					func_7(1, 1, -1, 1, 0, 1, 1, 1);
					func_55();
					iLocal_1803 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (is_vehicle_driveable(iLocal_1367[0], 0))
					{
						attach_synchronized_scene_to_entity(iLocal_1803, iLocal_1367[0], get_entity_bone_index_by_name(iLocal_1367[0], "seat_dside_f"));
						play_synchronized_cam_anim(iLocal_1396, iLocal_1803, "incar_phonesnatch_cam", func_199(4));
					}
					_0x394B9CD12435C981(iLocal_1803, false);
					set_ped_can_play_gesture_anims(player_ped_id(), 0);
					vVar1 = {get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -3.1f, -0.75f)};
					clear_area(vVar1, 2.5f, 1, 0, 0, false);
					clear_area_of_projectiles(vVar1, 20f, 0);
					stop_fire_in_range(vVar1, 8f);
					remove_particle_fx_in_range(vVar1, 8f);
					if (!is_ped_injured(iLocal_1352))
					{
						task_look_at_entity(player_ped_id(), iLocal_1352, -1, 2049, 2);
					}
					if (is_vehicle_driveable(iLocal_1367[0], 0) && !is_ped_injured(Local_1159))
					{
						set_vehicle_interiorlight(iLocal_1367[0], 1);
						set_vehicle_on_ground_properly(iLocal_1367[0]);
						clear_area(get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, 0f, -8f), 7f, 1, 0, 0, false);
						iLocal_1797 = _0x2CE544C68FB812A0(get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, 0f, -10f), 10f, 0f, 0);
						func_46(iLocal_1367[0]);
					}
					iLocal_1703 = 0;
					iLocal_1763 = get_game_timer();
					iLocal_1111 = 1;
				}
			}
			break;
		
		case 1:
			func_244(3);
			if (!is_ped_injured(Local_1159) && is_vehicle_driveable(iLocal_1367[0], 0))
			{
				switch (iLocal_1157)
				{
					case 0:
						iVar4 = false;
						if (!is_synchronized_scene_running(iLocal_1803))
						{
							iVar4 = true;
						}
						else if (get_synchronized_scene_phase(iLocal_1803) >= 0.98f)
						{
							iVar4 = true;
						}
						if (iVar4)
						{
							task_clear_look_at(Local_1159);
							set_entity_coords(Local_1159, get_entity_coords(Local_1159, 1), 1, false, 0, 1);
							Local_1159.f_9 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(Local_1159.f_9, iLocal_1367[0], 0);
							task_synchronized_scene(Local_1159, Local_1159.f_9, func_199(4), "InCar_GetOutofBack_Ballas", 1000f, -8f, 0, 0, 1000f, 0);
							_0x394B9CD12435C981(Local_1159.f_9, false);
							_0x2208438012482A1A(Local_1159, 0, 0);
							task_vehicle_play_anim(iLocal_1367[0], func_199(4), "InCar_GetOutofBack_Speedo");
							force_entity_ai_and_animation_update(iLocal_1367[0]);
							iLocal_1803 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iLocal_1803, iLocal_1367[0], 0);
							play_synchronized_cam_anim(iLocal_1396, iLocal_1803, "Incar_GetOutofBack_CAM", func_199(4));
							_0x394B9CD12435C981(iLocal_1803, false);
							iLocal_1825 = get_game_timer();
							iLocal_1157 = 1;
						}
						break;
					
					case 1:
						func_65();
						break;
					}
			}
			if (iLocal_1157 == 1)
			{
				iVar5 = false;
				if (!is_synchronized_scene_running(iLocal_1803))
				{
					if (get_game_timer() >= iLocal_1825 + 100)
					{
						iVar5 = true;
					}
				}
				else
				{
					fVar6 = get_synchronized_scene_phase(iLocal_1803);
					if (!iLocal_1703)
					{
						if (get_follow_vehicle_cam_view_mode() == 4)
						{
							if (fVar6 >= 0.276f)
							{
								_start_screen_effect("CamPushInNeutral", false, 0);
								play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1703 = 1;
							}
						}
					}
					if (is_vehicle_driveable(iLocal_1367[0], 0))
					{
						if (!iLocal_1647)
						{
							if (fVar6 >= 0.25f)
							{
								iLocal_1647 = 1;
							}
						}
						if (!iLocal_1648)
						{
							if (fVar6 >= 0.21f)
							{
								iLocal_1648 = 1;
							}
						}
					}
					if (fVar6 >= 0.3f)
					{
						iVar5 = true;
					}
				}
				if (iVar5)
				{
					iLocal_1111 = 2;
				}
			}
			func_51();
			break;
		
		case 2:
			func_43(7);
			func_50(8);
			func_246(0);
			_0x1033371FC8E842A7(iLocal_1797);
			set_ped_can_play_gesture_anims(player_ped_id(), 1);
			if (!is_ped_injured(iLocal_1352))
			{
				clear_ped_tasks(iLocal_1352);
				set_blocking_of_non_temporary_events(iLocal_1352, false);
				set_ped_combat_attributes(iLocal_1352, 3, false);
			}
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_tasks(player_ped_id());
			}
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				set_vehicle_interiorlight(iLocal_1367[0], 0);
				if (!is_ped_injured(Local_1159))
				{
					if (is_entity_attached(Local_1159) && !is_ped_in_any_vehicle(Local_1159, 0))
					{
						detach_entity(Local_1159, 1, true);
					}
					if (iLocal_1473)
					{
						clear_ped_tasks_immediately(Local_1159);
						set_entity_coords(Local_1159, get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -3.1f, -0.75f), 1, false, 0, 1);
						set_entity_heading(Local_1159, get_entity_heading(iLocal_1367[0]) - 180f);
						if (is_entity_playing_anim(iLocal_1367[0], func_199(4), "InCar_GetOutofBack_Speedo", 3))
						{
							stop_entity_anim(iLocal_1367[0], "InCar_GetOutofBack_Speedo", func_199(4), -1000f);
							set_vehicle_door_shut(iLocal_1367[0], 2, 1);
							set_vehicle_door_shut(iLocal_1367[0], 3, 1);
						}
					}
					force_ped_motion_state(Local_1159, -530524, true, 1, 0);
					set_ped_min_move_blend_ratio(Local_1159, 2f);
					task_follow_nav_mesh_to_coord(Local_1159, get_offset_from_entity_in_world_coords(iLocal_1367[0], 0f, -12f, 0.4f), 2f, 20000, 0.25f, 0, 1193033728);
					set_ped_relationship_group_hash(Local_1159, -1033021910);
					iLocal_1810 = get_game_timer() + 6000;
				}
			}
			if (does_entity_exist(iLocal_1386))
			{
			}
			iLocal_1327 = 7;
			func_220();
			if (!is_ped_injured(Local_1159))
			{
			}
			iLocal_1476 = 0;
			iLocal_1600 = 0;
			iLocal_1765 = 2;
			iLocal_1477 = 1;
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			if (iLocal_1473)
			{
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
			}
			else
			{
				func_49(0f, 3, 1);
			}
			iLocal_1611 = 1;
			iLocal_1472 = 0;
			break;
	}
}

void func_49(float fParam0, int iParam1, int iParam2)
{
	set_player_control(player_id(), true, 0);
	display_radar(true);
	display_hud(true);
	func_9(0);
	if (iParam2)
	{
		_0x21E253A7F8DA5DFB("SPEEDO");
		_0x59424BD75174C9B1();
	}
	_0xC819F3CBB62BF692(0, fParam0, iParam1, 0);
	func_15(0, 1, 1, 0);
	iLocal_1472 = 0;
	iLocal_1473 = false;
	iLocal_1474 = 0;
	iLocal_1475 = false;
	iLocal_1111 = 0;
	if (is_screen_faded_out())
	{
		if (does_cam_exist(iLocal_1396))
		{
			destroy_cam(iLocal_1396, 0);
		}
		do_screen_fade_in(800);
	}
}

int func_50(int iParam0)
{
	return start_audio_scene(func_44(iParam0));
}

void func_51()
{
	if (func_54() && get_game_timer() >= iLocal_1762 + 1000)
	{
		do_screen_fade_out(800);
		while (!is_screen_faded_out())
		{
			wait(0);
		}
		func_10(0);
		func_52();
		iLocal_1473 = true;
		iLocal_1111 = 2;
	}
}

void func_52()
{
	Global_14578 = 0;
	func_53();
}

void func_53()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_54()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_55()
{
	if (does_cam_exist(iLocal_1396))
	{
		destroy_cam(iLocal_1396, 0);
	}
	iLocal_1396 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
	render_script_cams(true, false, 3000, 1, 0, 0);
}

void func_56()
{
	start_preloaded_conversation();
	Global_16704 = 0;
}

void func_57()
{
	func_58(0, 0);
	func_962();
}

void func_58(int iParam0, int iParam1)
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
		if ((func_36(0) && Global_69735.f_1 == 1) && func_60(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_36(0))
	{
		iVar0 = func_59();
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

int func_59()
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

bool func_60(int iParam0)
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

void func_61()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1356)
	{
		if (does_entity_exist(iLocal_1356[iVar0]))
		{
			set_ped_as_no_longer_needed(&(iLocal_1356[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (does_entity_exist(iLocal_1370[iVar0]))
		{
			set_vehicle_as_no_longer_needed(&(iLocal_1370[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(iLocal_1378[iVar0]))
		{
			set_mission_train_as_no_longer_needed(&(iLocal_1378[iVar0]), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_entity_exist(Local_1205[iVar0 /*5*/]))
		{
			set_ped_as_no_longer_needed(&(Local_1205[iVar0 /*5*/]));
		}
		iVar0++;
	}
	if (does_entity_exist(iLocal_1355))
	{
		set_ped_as_no_longer_needed(&iLocal_1355);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (does_entity_exist(Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				delete_object(&(Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/]));
			}
			if (does_entity_exist(Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1))
			{
				delete_object(&(Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1));
			}
			iVar1++;
		}
		if (does_entity_exist(Local_1236[iVar0 /*12*/]))
		{
			delete_object(&(Local_1236[iVar0 /*12*/]));
		}
		iVar0++;
	}
	iLocal_1599 = 1;
}

void func_62(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	if (!is_ped_injured(iParam0) && is_vehicle_driveable(iParam1, 0))
	{
		vVar0 = {get_entity_rotation_velocity(iParam1)};
		vVar3 = {get_entity_speed_vector(iParam1, 1)};
		fVar6 = get_entity_speed(iParam1);
		fVar7 = vVar3.y - *uParam3;
		fVar7 /= get_frame_time();
		if (vVar3.y < 0f)
		{
			vVar0.z *= -1f;
		}
		if (vVar0.z < -0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 3;
			}
		}
		else if (vVar0.z > 0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 4;
			}
		}
		else if (fVar7 > 2f)
		{
			iVar8 = 2;
		}
		else if (fVar7 < -8f)
		{
			iVar8 = 1;
		}
		else if ((iParam6 && fVar6 <= 3f) && (get_game_timer() >= *uParam5 || *uParam2 == 5))
		{
			iVar8 = 5;
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 != *uParam2 && get_game_timer() >= *uParam4)
		{
			switch (iVar8)
			{
				case 0:
					sVar9 = "CHOP_SIT_LOOP";
					break;
				
				case 1:
					sVar9 = "CHOP_LEAN_FORWARDS_LOOP";
					break;
				
				case 2:
					sVar9 = "CHOP_LEAN_BACK_LOOP";
					break;
				
				case 3:
					sVar9 = "CHOP_LEAN_RIGHT_LOOP";
					break;
				
				case 4:
					sVar9 = "CHOP_LEAN_LEFT_LOOP";
					break;
				
				case 5:
					sVar9 = "CHOP_BARK";
					break;
			}
			*uParam4 = get_game_timer() + 500;
			if (iVar8 == 5)
			{
				*uParam5 = get_game_timer() + 3000;
			}
			task_play_anim(iParam0, func_63(), sVar9, 0.8f, -0.8f, -1, 1, 0, 0, 0, 0);
			*uParam2 = iVar8;
		}
		*uParam3 = vVar3.y;
	}
}

char* func_63()
{
	return "MISSCHOP_VEHICLE@BACK_OF_VAN";
}

void func_64(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	Vector3 fVar3;
	
	if (!is_ped_injured(iParam0) && is_vehicle_driveable(iParam1, 0))
	{
		if (!iParam4)
		{
			if (!iParam3)
			{
				vVar0 = {0f, -0.5f, 0.3f};
			}
			else
			{
				vVar0 = {0.129f, -1.522f, 0.3f};
			}
			fVar3 = fParam2;
		}
		else
		{
			vVar0 = {iParam5, iParam6, iParam7};
			fVar3 = iParam8;
		}
		attach_entity_to_entity(iParam0, iParam1, 0, vVar0, 0f, 0f, fVar3, 0, 0, 0, 1, 2, 1);
	}
}

void func_65()
{
	if (!is_ped_injured(Local_1159) && !is_ped_injured(player_ped_id()))
	{
		if ((!is_ped_in_any_vehicle(Local_1159, 0) && !is_entity_attached_to_any_vehicle(Local_1159)) && !is_synchronized_scene_running(Local_1159.f_9))
		{
			if (!iLocal_1472)
			{
				if (get_script_task_status(Local_1159, 1805844857) == 7)
				{
					task_smart_flee_ped(Local_1159, player_ped_id(), 1000f, -1, 0, 0);
				}
			}
		}
	}
}

int func_66()
{
	int iVar0;
	
	iVar0 = has_cutscene_loaded();
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

bool func_67(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
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

void func_68()
{
	set_wanted_level_multiplier(0f);
	set_max_wanted_level(0);
	set_player_wanted_level(player_id(), false, 0);
	set_player_wanted_level_now(player_id(), 0);
}

bool func_69(int iParam0, int iParam1, int iParam2)
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

struct<6> func_70()
{
	char[24] cVar0;
	int iVar6;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

int func_71(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_72(char* sParam0, vector3 vParam1, Vector3 fParam2, Vector3 fParam3)
{
	switch (iLocal_1110)
	{
		case 0:
			if (is_entity_at_coord(player_ped_id(), vParam1, fParam4, fParam4, fParam4, false, true, 0))
			{
				request_cutscene(sParam0, 8);
				iLocal_1110 = 1;
			}
			break;
		
		case 1:
			if (has_cutscene_loaded())
			{
				iLocal_1110 = 2;
			}
			break;
		
		case 2:
			if (!is_entity_at_coord(player_ped_id(), vParam1, fParam5, fParam5, fParam5, false, true, 0))
			{
				remove_cutscene();
				iLocal_1110 = 0;
			}
			break;
	}
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_79(1);
			break;
		
		case 1:
			return func_78(19);
			break;
		
		case 2:
			return joaat("ig_ballasog");
			break;
		
		case 3:
			return func_77();
			break;
		
		case 4:
			return joaat("a_c_rottweiler");
			break;
		
		case 5:
			return joaat("a_f_y_genhot_01");
			break;
		
		case 6:
			return joaat("s_m_y_construct_02");
			break;
		
		case 7:
			return func_75(19, 0);
			break;
		
		case 8:
			return joaat("bati");
			break;
		
		case 9:
			return joaat("emperor");
			break;
		
		case 10:
			return joaat("bison");
			break;
		
		case 11:
			return joaat("bus");
			break;
		
		case 12:
			return joaat("trailers2");
			break;
		
		case 13:
			return joaat("freight");
			break;
		
		case 14:
			return joaat("tankercar");
			break;
		
		case 15:
			return joaat("freightcont2");
			break;
		
		case 16:
			return joaat("rubble");
			break;
		
		case 17:
			return joaat("rocoto");
			break;
		
		case 18:
			return joaat("prop_rail_boxcar5_d");
			break;
		
		case 19:
			return joaat("prop_boxcar5_handle");
			break;
		
		case 20:
			return joaat("prop_npc_phone");
			break;
		
		case 21:
			return joaat("p_cs_bandana_s");
			break;
		
		case 22:
			return joaat("prop_ld_test_01");
			break;
		
		case 23:
			return func_74();
			break;
	}
	return 0;
}

var func_74()
{
	return Global_93091.f_2311.f_12.f_66;
}

int func_75(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (!func_37(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_76(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_76(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = {Var1};
}

int func_77()
{
	return joaat("a_c_chop");
}

int func_78(int iParam0)
{
	if (!func_37(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_79(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

Vector3 func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77.8f, -1456.7f, 31.03f;
			break;
		
		case 1:
			return -15.79069f, -1451.12f, 29.55704f;
			break;
		
		case 2:
			return 363.7493f, 323.3702f, 102.71f;
			break;
		
		case 3:
			return -52.78f, -1456.56f, 31.03f;
			break;
		
		case 4:
			return -216.7787f, -1494.965f, 30.23503f;
			break;
		
		case 5:
			return 456.0452f, -691.4726f, 26.83633f;
			break;
		
		case 6:
			return 360.19f, 323.68f, 102.81f;
			break;
		
		case 8:
			return 458.02f, -691.39f, 27.43f;
			break;
		
		case 7:
			return 509.78f, -654.11f, 23.75f;
			break;
		
		case 10:
			return 387.98f, 358.86f, 101.45f;
			break;
		
		case 11:
			return 372.3202f, 353.4908f, 101.7117f;
			break;
		
		case 12:
			return -17.96112f, -1452.734f, 29.57574f;
			break;
		
		case 13:
			return 369.8667f, 350.7225f, 101.8453f;
			break;
		
		case 9:
			return 0f, 0f, -90f;
			break;
		
		case 14:
			return 460.1f, -656.61f, 26.67f;
			break;
		
		case 15:
			return -15.26298f, -1453.305f, 29.50939f;
			break;
		
		case 16:
			return 459.3754f, -679.7192f, 26.55455f;
			break;
		
		case 17:
			return 491.34f, -556.23f, 26.54f;
			break;
		
		case 18:
			return 552.57f, -561.89f, 23.8f;
			break;
		
		case 19:
			return 514.25f, -640.73f, 23.75f;
			break;
		
		case 20:
			return 556.65f, -565.12f, 23.8f;
			break;
		
		case 21:
			return 525.9822f, -679.1431f, 24.80665f;
			break;
		
		case 22:
			return 529.37f, -679.52f, 23.76f;
			break;
		
		case 23:
			return 558.0582f, -566.7988f, 23.781f;
			break;
		
		case 24:
			return 501.49f, -647.84f, 23.75f;
			break;
		
		case 25:
			return 503.14f, -648.65f, 23.75f;
			break;
		
		case 26:
			return 533.38f, -664.49f, 23.8f;
			break;
		
		case 27:
			return 531.43f, -669.4f, 23.8f;
			break;
		
		case 28:
			return 456.95f, -805.38f, 26.46f;
			break;
		
		case 29:
			return 363.46f, 322f, 102.71f;
			break;
		
		case 30:
			return -19.31f, -1457.8f, 29.47f;
			break;
		
		case 31:
			return 444.7578f, -816.0368f, 27.24718f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_81(int iParam0)
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (iParam0)
		{
			func_175(player_ped_id(), 8, 9, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			func_82(player_ped_id(), 8, 9);
		}
	}
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_106(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (!func_97(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = {func_93(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_82(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = {func_87(iVar0, iParam2)};
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_82(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		clear_ped_prop(iParam0, Global_69311[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = {func_93(iVar0, 0)};
		Global_69311[1 /*14*/] = {func_106(iVar0, iParam1, uVar30[iParam1])};
		if (get_number_of_ped_drawable_variations(iParam0, func_86(iParam1)) > 0 && get_number_of_ped_texture_variations(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3) > 0)
		{
			set_ped_component_variation(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, 0);
		}
	}
	if (func_85(iParam0, iVar0, &iVar46, 0))
	{
		func_175(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_83(iParam0, iVar0, &iVar46))
	{
		func_175(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

bool func_83(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_84(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 != -99)
	{
		if (!func_97(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_64, Global_101154.f_1826.f_539[uVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

bool func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_84(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 != -99)
	{
		if (!func_97(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_61, Global_101154.f_1826.f_539[uVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_87(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_92(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_92(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_92(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_92(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_92(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_92(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_92(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_92(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_92(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_92(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_92(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_92(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_92(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_92(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_92(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_92(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_92(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_92(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_92(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_92(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_92(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_92(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_92(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_92(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_92(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_92(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_92(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_92(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		*iParam0[0] = 0;
		*iParam0[1] = 1;
		*iParam0[2] = 2;
		*iParam0[3] = 3;
		*iParam0[4] = 4;
		*iParam0[5] = 5;
		*iParam0[6] = 6;
		*iParam0[7] = 7;
		*iParam0[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		get_shop_ped_outfit(iParam2, &Var1);
		if (!_is_dlc_data_empty(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						*iParam0[vVar16.z] = func_89(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						*iParam0[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return func_91(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_86(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_90(iParam0, func_86(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_90(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	*iParam0[0] = iParam1;
	*iParam0[1] = iParam2;
	*iParam0[2] = iParam3;
	*iParam0[3] = iParam4;
	*iParam0[4] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[6] = iParam7;
	*iParam0[7] = iParam8;
	*iParam0[8] = iParam9;
}

struct<16> func_93(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_96(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_96(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_96(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_96(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_96(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_96(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_96(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_96(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	int iVar19;
	
	*iParam0[0] = 0;
	*iParam0[2] = -99;
	*iParam0[3] = 0;
	*iParam0[4] = 0;
	*iParam0[6] = 0;
	*iParam0[5] = 0;
	*iParam0[8] = 0;
	*iParam0[9] = 0;
	*iParam0[10] = 0;
	*iParam0[1] = 0;
	*iParam0[7] = 0;
	*iParam0[11] = 0;
	*iParam0[13] = -99;
	*iParam0[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		*iParam0[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	_0xF3FBE2D50A6A8C28(iVar0, 0);
	get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!_is_dlc_data_empty(Var1))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (_get_prop_from_outfit(Var1.f_1, iVar19, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						*iParam0[func_95(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_95(vVar16.z)] = func_89(iParam1, vVar16.x, func_95(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_95(vVar16.z)] = vVar16.y;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			*iParam0[13] = -99;
		}
		else
		{
			*iParam0[13] = Var1.f_1;
		}
	}
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	*iParam0[0] = iParam1;
	*iParam0[2] = iParam2;
	*iParam0[3] = iParam3;
	*iParam0[4] = iParam4;
	*iParam0[6] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[8] = iParam7;
	*iParam0[9] = iParam8;
	*iParam0[10] = iParam9;
	*iParam0[1] = iParam10;
	*iParam0[7] = iParam11;
	*iParam0[11] = iParam12;
	*iParam0[13] = iParam13;
	*iParam0[14] = -99;
}

bool func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_106(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_93(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_97(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_87(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_97(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_106(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_97(iParam0, 14, iVar4))
										{
											if (!func_100(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
											{
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_98(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_106(iVar0, iVar2, iVar1)};
						if (!func_100(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar32 = {func_87(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_97(iParam0, 14, uVar32[iVar31]))
			{
				return false;
			}
			iVar31++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_86(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_86(iParam1)))
	{
		return true;
	}
	return false;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_86(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_99(iParam0, iVar1, iVar2, iParam1);
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_86(iParam3);
	iVar1 = get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1)
	{
		iVar5 = get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 += iVar5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1)
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

bool func_100(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if (*uParam4[iParam2] == iParam3)
	{
		return true;
	}
	if ((*uParam4[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && *uParam4[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return true;
		}
	}
	if (iParam3 == -99 || *uParam5.f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = {func_87(iParam0, *uParam4[13])};
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_105(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_104(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_101(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_104(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return true;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_101(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return true;
			}
		}
		if (func_104(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_101(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_91(iParam0);
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_90(iParam0, func_86(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_86(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			get_shop_ped_query_component(iVar38, &Var21);
			if (!_is_dlc_data_empty(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

bool func_103(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_102(iParam0, iParam2, 1, 3);
					if (_0x341DE7ED1D2A1BFD(iVar0, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_102(iParam0, iParam2, 1, 4);
					if (_0x341DE7ED1D2A1BFD(iVar1, -1757550583, false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return true;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 3), 97230661, true);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

bool func_105(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return true;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

struct<14> func_106(int iParam0, int iParam1, int iParam2)
{
	func_174();
	if (iParam0 == joaat("player_zero"))
	{
		func_156(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_137(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_107(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_136(iParam1);
			break;
		
		case 2:
			func_135(iParam1);
			break;
		
		case 3:
			func_132(iParam1);
			break;
		
		case 4:
			func_131(iParam1);
			break;
		
		case 6:
			func_130(iParam1);
			break;
		
		case 5:
			func_129(iParam1);
			break;
		
		case 8:
			func_128(iParam1);
			break;
		
		case 9:
			func_127(iParam1);
			break;
		
		case 10:
			func_126(iParam1);
			break;
		
		case 1:
			func_125(iParam1);
			break;
		
		case 7:
			func_124(iParam1);
			break;
		
		case 11:
			func_123(iParam1);
			break;
		
		case 12:
			func_122(iParam1);
			break;
		
		case 13:
			func_121(iParam1);
			break;
		
		case 14:
			func_108(iParam1);
			break;
	}
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 155);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_119(iParam8);
	if ((*uParam0.f_2 >= 10 && *uParam0.f_5 >= 0) && *uParam0.f_5 < 3)
	{
		if (!iParam10)
		{
		}
		*uParam0.f_2 = 0;
	}
	if (get_hash_key(sParam3) != get_hash_key("NO_LABEL"))
	{
	}
	if (iParam7)
	{
		set_bit(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		set_bit(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			set_bit(uParam0.f_6, 5);
		}
		set_bit(uParam0.f_6, true);
		set_bit(uParam0.f_6, 2);
		set_bit(uParam0.f_6, 6);
		if (func_118(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, false))
			{
				set_bit(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_115(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_115(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_115(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_118(14))
			{
				return;
			}
			iVar0 = func_112(func_114(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_112(func_111(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_110(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_112(uVar1, Global_69309, 0);
				if (!is_bit_set(iVar0, *uParam0.f_1))
				{
					set_bit(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
}

int func_110(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_113(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

int func_115(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_117(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_112(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_117(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (iParam4)
	{
		if (Global_2560780)
		{
			iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = _0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (iParam5)
	{
		iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = _0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

int func_118(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = _0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_outfit(iVar17, &Var2);
			if (!_is_dlc_data_empty(Var2))
			{
				if (iVar18 == iParam1 - iParam2)
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_109(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_109(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = _get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			get_shop_ped_query_prop(iVar38, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iVar39 == iParam1 - iParam2)
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_109(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_86(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			get_shop_ped_query_component(iVar58, &Var41);
			if (!_is_dlc_data_empty(Var41))
			{
				if (iVar59 == iParam1 - iParam2)
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_109(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 9);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 48);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 1);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 1);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 6);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_120(iVar10, iParam0, 33);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_120(iVar10, iParam0, 17);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 18);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 7);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_120(iVar10, iParam0, 84);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_120(iVar10, iParam0, 104);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	if (iParam0 < 136)
	{
		func_134(iParam0);
	}
	else
	{
		func_133(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_120(3, iParam0, 242);
	}
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 9);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_120(iVar10, iParam0, 7);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_155(iParam1);
			break;
		
		case 2:
			func_154(iParam1);
			break;
		
		case 3:
			func_150(iParam1);
			break;
		
		case 4:
			func_149(iParam1);
			break;
		
		case 6:
			func_148(iParam1);
			break;
		
		case 5:
			func_147(iParam1);
			break;
		
		case 8:
			func_146(iParam1);
			break;
		
		case 9:
			func_145(iParam1);
			break;
		
		case 10:
			func_144(iParam1);
			break;
		
		case 1:
			func_143(iParam1);
			break;
		
		case 7:
			func_142(iParam1);
			break;
		
		case 11:
			func_141(iParam1);
			break;
		
		case 12:
			func_140(iParam1);
			break;
		
		case 13:
			func_139(iParam1);
			break;
		
		case 14:
			func_138(iParam1);
			break;
	}
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 175);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 9);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 47);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_120(iVar10, iParam0, 63);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 1);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 5);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 53);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 12);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 77);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 7);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_120(iVar10, iParam0, 134);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_120(iVar10, iParam0, 117);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0)
{
	if (iParam0 < 107)
	{
		func_153(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_152(iParam0);
	}
	else
	{
		func_151(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_120(3, iParam0, 318);
	}
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 21);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_120(iVar10, iParam0, 10);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(iParam1);
			break;
		
		case 2:
			func_172(iParam1);
			break;
		
		case 3:
			func_169(iParam1);
			break;
		
		case 4:
			func_168(iParam1);
			break;
		
		case 6:
			func_167(iParam1);
			break;
		
		case 5:
			func_166(iParam1);
			break;
		
		case 8:
			func_165(iParam1);
			break;
		
		case 9:
			func_164(iParam1);
			break;
		
		case 10:
			func_163(iParam1);
			break;
		
		case 1:
			func_162(iParam1);
			break;
		
		case 7:
			func_161(iParam1);
			break;
		
		case 11:
			func_160(iParam1);
			break;
		
		case 12:
			func_159(iParam1);
			break;
		
		case 13:
			func_158(iParam1);
			break;
		
		case 14:
			func_157(iParam1);
			break;
	}
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_120(iVar10, iParam0, 113);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 10);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 53);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 45);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 1);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 5);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_120(iVar10, iParam0, 48);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 20);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 24);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_120(iVar10, iParam0, 14);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_120(iVar10, iParam0, 99);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 113);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_169(int iParam0)
{
	if (iParam0 < 60)
	{
		func_171(iParam0);
	}
	else
	{
		func_170(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_120(3, iParam0, 181);
	}
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_120(iVar10, iParam0, 6);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_120(iVar10, iParam0, 7);
			return;
			break;
	}
	func_109(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_174()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

bool func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	Global_69310++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = get_entity_model(iParam0);
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_106(iVar10, iParam1, iParam2)};
		if (!func_197(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_194(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_98(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_98(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_190(iParam0, 1);
			if (!func_104(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_190(iParam0, 0);
			if (!func_103(iVar10, 14, iVar8) && !func_101(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_190(iParam0, 2);
			}
		}
		clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = {Global_69354};
		}
		else
		{
			uVar11 = {func_93(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = {func_106(iVar10, iVar0, uVar11[iVar0])};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = {Global_69370};
						}
						else
						{
							uVar27 = {func_87(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = {func_106(iVar10, 14, uVar27[iVar1])};
							func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_194(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_181(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_180(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_86(iVar0)));
						}
						else
						{
							set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_194(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_181(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_106(iVar10, iVar0, func_179(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_85(iParam0, iVar10, &iVar4, 1))
							{
								func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = {func_93(iVar10, 0)};
						func_175(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = {func_106(iVar10, 8, iVar5)};
			if (iVar5 != -99)
			{
				if (func_100(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_175(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_106(iVar10, 9, iVar6)};
			if (iVar6 != -99)
			{
				if (func_100(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_175(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_106(iVar10, 14, iVar7)};
			if (iVar7 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_175(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_106(iVar10, 14, iVar8)};
			if (iVar8 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_175(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_106(iVar10, 14, iVar9)};
			if (iVar9 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_175(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = {func_87(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_106(iVar10, 14, uVar67[iVar1])};
			func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_194(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_181(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_194(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_181(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_86(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_181(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_176(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_85(iParam0, iVar10, &iVar4, 0))
		{
			func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_83(iParam0, iVar10, &iVar4))
		{
			func_175(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310--;
	return true;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_178(iParam0, 12, iVar0))
	{
		if (func_177(iParam0, iParam1, iParam2))
		{
			uVar1 = func_84(iParam0);
			if (iParam1 == 3)
			{
				Global_101154.f_1826.f_539.f_196[uVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101154.f_1826.f_539.f_200[uVar1] = iParam2;
			}
		}
	}
}

bool func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_106(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, 2);
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_97(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_97(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_190(iParam0, iParam2);
			}
		}
		else
		{
			return func_98(iParam0, iParam1);
		}
	}
	return -99;
}

bool func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_84(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_98(iParam0, 1);
				iVar0 = func_188(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_98(iParam0, 2);
				iVar0 = func_188(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_180(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_187(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_186(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_185(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_185(iParam0, 3, 135, 150))
									{
										iVar0 = func_184(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_185(iParam0, 3, 209, 222))
									{
										iVar0 = func_184(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_185(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_184(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_184(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_184(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_184(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_185(iParam0, 3, 176, 191) && !func_185(iParam0, 3, 227, 242))
									{
										iVar0 = func_184(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_98(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_98(iParam0, 11);
								iVar5 = func_183(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_98(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_182(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_98(iParam0, 8);
								iVar8 = func_98(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_183(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_183(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_98(iParam0, 11);
								iVar0 = func_183(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 59 + iVar0;
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 43 + iVar0;
							}
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 43;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 43;
								*uParam4 = 59 + iVar0;
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 59;
								*uParam4 = 43 + iVar0;
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_184(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_184(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1)
	{
		iVar1 = iVar0;
		if (func_178(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_98(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_186(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

bool func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_84(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		clear_ped_prop(iParam0, iParam1);
	}
	else
	{
		set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network_is_game_in_progress());
	}
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_193(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_191(iParam0, iVar0, iVar1, iParam1);
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_193(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_89(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_89(get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1)
	{
		iVar6 = get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 += iVar6;
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1)
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 += func_192(iParam0, iParam3);
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_193(iParam3);
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_193(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

void func_194(int iParam0)
{
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		func_115(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_117(iParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_112(uVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_196(uVar2, iVar3, iVar0, 1);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_113(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

bool func_197(int iParam0)
{
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

void func_198(int iParam0)
{
	int iVar0;
	
	if (iLocal_1398[iParam0])
	{
		iVar0 = func_73(iParam0);
		if (has_model_loaded(iVar0))
		{
			set_model_as_no_longer_needed(iVar0);
		}
		iLocal_1398[iParam0] = 0;
	}
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "missfra0_chop_shared";
			break;
		
		case 1:
			return "missfra0_chop_tovan";
			break;
		
		case 2:
			return "missfra0_chop_fchase";
			break;
		
		case 3:
			return "missfra0_chop_find";
			break;
		
		case 4:
			return "missfra0_chop_drhome";
			break;
		
		case 5:
			return func_63();
			break;
	}
	return "invalid!";
}

void func_200(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

int func_201(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

bool func_202(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 || !is_message_being_displayed())
	{
		if ((iParam2 || !func_221()) || !is_subtitle_preference_switched_on())
		{
			if (func_204())
			{
				func_203(sParam0, iParam3, 1);
				return true;
			}
		}
	}
	return false;
}

void func_203(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_204()
{
	if (iLocal_1106 == 0 && !func_205())
	{
		return true;
	}
	return false;
}

int func_205()
{
	return Global_91330.f_297 > 0;
}

void func_206()
{
	Global_14578 = 0;
	func_207();
}

void func_207()
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

int func_208(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_219(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16705 = 1;
	Global_16709 = 0;
	Global_16707 = iParam7;
	Global_2621441 = 0;
	return func_209(sParam2, iParam3, 0);
}

bool func_209(char* sParam0, int iParam1, int iParam2)
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
					func_207();
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
		if (func_218(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_217();
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
				func_213();
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
				if (func_212())
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
			if (func_11())
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
			func_211();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_210();
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
		func_207();
	}
	return false;
}

void func_210()
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

void func_211()
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

bool func_212()
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

void func_213()
{
	if (func_118(14))
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
		Global_14413 = func_214();
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

var func_214()
{
	func_215();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_215()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_79(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_216(player_ped_id());
			if (func_37(iVar0) && (!func_118(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_37(Global_101154.f_1826.f_539.f_3549))
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

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_217()
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

int func_218(int iParam0, int iParam1)
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

void func_219(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_220()
{
	int iVar0;
	
	if (does_blip_exist(iLocal_1388))
	{
		remove_blip(&iLocal_1388);
	}
	if (does_blip_exist(iLocal_1389))
	{
		remove_blip(&iLocal_1389);
	}
	if (does_blip_exist(iLocal_1390))
	{
		remove_blip(&iLocal_1390);
	}
	if (does_blip_exist(iLocal_1391))
	{
		remove_blip(&iLocal_1391);
	}
	if (does_blip_exist(iLocal_1392))
	{
		remove_blip(&iLocal_1392);
	}
	if (does_blip_exist(iLocal_1393))
	{
		remove_blip(&iLocal_1393);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_blip_exist(Local_1236[iVar0 /*12*/].f_1))
		{
			remove_blip(&(Local_1236[iVar0 /*12*/].f_1));
		}
		iVar0++;
	}
}

bool func_221()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_222()
{
	if (iLocal_1479)
	{
		if (func_204())
		{
			if (func_223(&uLocal_1847, "FKN0AUD", &Local_2013, &Local_2019, 8, 0, 0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_223(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_209(sParam2, iParam4, 0);
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	char* sVar8;
	
	iVar0 = true;
	iVar1 = true;
	iVar2 = true;
	iVar3 = true;
	iVar4 = false;
	if (iParam1)
	{
		if (!is_ped_injured(iLocal_1352))
		{
			if (!is_ped_group_member(iLocal_1352, func_239()) && !(iLocal_1107 == 0 && iLocal_1339 < 4))
			{
				if (!iLocal_1668)
				{
					iVar2 = false;
				}
			}
		}
	}
	if (is_vehicle_driveable(iLocal_1367[0], 0))
	{
		if (iParam1 || !iLocal_1639)
		{
			if (!is_ped_injured(iLocal_1352))
			{
				if (!is_ped_in_vehicle(iLocal_1352, iLocal_1367[0], 0))
				{
					if (!iLocal_1668)
					{
						iVar1 = false;
					}
				}
			}
		}
		if (!is_ped_in_vehicle(player_ped_id(), iLocal_1367[0], 0))
		{
			iVar0 = false;
		}
	}
	if (iParam2)
	{
		if (get_player_wanted_level(player_id()) > 0)
		{
			iVar3 = false;
		}
	}
	if (iVar2)
	{
		if (iVar0)
		{
			if (iLocal_1765 < 2)
			{
				iLocal_1765 = 2;
			}
			if (iVar1)
			{
				iLocal_1481 = 0;
				if (iVar3)
				{
					iLocal_1606 = 0;
					if (iLocal_1107 != 4 || iLocal_1333 <= 5)
					{
						iLocal_1604 = false;
					}
					iLocal_1592 = false;
					if (iLocal_1107 == 0 || iLocal_1107 == 4)
					{
						iVar4 = true;
						iLocal_1480 = 0;
						if (!does_blip_exist(iLocal_1392))
						{
							if (iParam0)
							{
								func_41(0, 1, 0, 0);
								func_220();
								switch (iLocal_1107)
								{
									case 0:
										vVar5 = {func_80(2)};
										break;
									
									case 4:
										if (iLocal_1333 < 6)
										{
											vVar5 = {func_80(3)};
										}
										else
										{
											vVar5 = {func_80(4)};
										}
										break;
								}
								iLocal_1392 = func_237(vVar5, 1);
							}
						}
						if (does_blip_exist(iLocal_1388))
						{
							remove_blip(&iLocal_1388);
						}
						if (!iLocal_1476)
						{
							if (iLocal_1600)
							{
								switch (iLocal_1107)
								{
									case 0:
										iLocal_1476 = func_202("FC_GOVINEW", 1, 0, 7500);
										break;
									
									case 4:
										if (iLocal_1333 < 6)
										{
											iLocal_1476 = func_202("FC_GOHOUSE1", 1, 0, 7500);
										}
										else if (iLocal_1333 >= 7)
										{
											iLocal_1476 = func_202("FC_GOREC", 1, 0, 7500);
										}
										break;
									}
								}
						}
					}
					else if (!does_blip_exist(iLocal_1391) && !does_blip_exist(iLocal_1390))
					{
						if (is_vehicle_driveable(iLocal_1367[1], 0) && !is_ped_injured(Local_1159))
						{
							if (func_204())
							{
								func_41(0, 1, 0, 0);
								func_220();
								if (is_ped_in_any_vehicle(Local_1159, 0))
								{
									iLocal_1391 = func_235(iLocal_1367[1], 1);
								}
								else
								{
									iLocal_1390 = func_231(Local_1159, 1, 145);
								}
								if (!iLocal_1476)
								{
									iLocal_1476 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (!iLocal_1606)
					{
						func_220();
						iLocal_1606 = 1;
					}
					else
					{
						func_229();
					}
					if (!iLocal_1604)
					{
						if (is_ped_in_vehicle(player_ped_id(), iLocal_1367[0], 0))
						{
							if (iLocal_1480)
							{
								if (iLocal_1107 == 0)
								{
									iLocal_1604 = func_240("FC_WANTBEF", 0, 0, 0, 1);
								}
								else if (iLocal_1107 == 4 && iLocal_1333 == 6)
								{
									if (iLocal_1820 < 0)
									{
										iLocal_1820 = get_game_timer();
									}
									else if (get_game_timer() >= iLocal_1820 + 1500)
									{
										iLocal_1604 = func_240("FC_WANTED", 0, 0, 0, 1);
									}
								}
								else if (iLocal_1107 == 4 && iLocal_1333 <= 5)
								{
									iLocal_1604 = func_240("FC_WANTVAN", 0, 0, 0, 1);
								}
								else
								{
									iLocal_1604 = true;
								}
							}
						}
						else
						{
							iLocal_1604 = true;
						}
					}
					else if (!iLocal_1592)
					{
						iLocal_1592 = func_202("LOSE_WANTED", 1, 0, 7500);
						func_228(10000, -1, -1);
					}
				}
			}
			else
			{
				if (!does_blip_exist(iLocal_1389))
				{
					func_41(0, 1, 0, 0);
					func_220();
					iLocal_1389 = func_231(iLocal_1352, 0, 145);
				}
				if (!iLocal_1490)
				{
					iLocal_1490 = func_202("FC_WAIT", 1, 0, 7500);
				}
			}
		}
		else
		{
			if (!does_blip_exist(iLocal_1388))
			{
				func_41(0, 1, 0, 0);
				func_220();
				if (iLocal_1765 == 0 || iLocal_1765 == 2)
				{
					iLocal_1477 = 1;
				}
				iLocal_1388 = func_235(iLocal_1367[0], 0);
			}
			if (iLocal_1477)
			{
				if (iLocal_1481)
				{
					switch (iLocal_1765)
					{
						case 0:
							sVar8 = "FC_GOVAN1";
							break;
						
						case 2:
							sVar8 = "FC_GOVAN2";
							break;
					}
					if (func_202(sVar8, 1, 0, 7500))
					{
						iLocal_1477 = 0;
						_0x293220DA1B46CEBC(4f, 4f, 3);
						iLocal_1765++;
					}
				}
			}
			if (!iLocal_1481)
			{
				if (iLocal_1480)
				{
					if (iLocal_1107 == 1 && !is_ped_in_vehicle(iLocal_1352, iLocal_1367[0], 0))
					{
						iLocal_1481 = func_240("FC_VANNOW", 0, 0, 0, 1);
					}
					else if (iLocal_1107 != 0 || iLocal_1494)
					{
						iLocal_1481 = func_240("FC_FGOTOUT", 0, 0, 0, 1);
					}
					else
					{
						iLocal_1481 = 1;
					}
				}
			}
		}
	}
	else if (is_entity_at_entity(player_ped_id(), iLocal_1352, 12f, 12f, 6f, 0, 1, 0))
	{
		if (iParam3)
		{
			if (iLocal_1339 == 4 || iLocal_1107 > 0)
			{
				set_ped_as_group_member(iLocal_1352, func_239());
			}
		}
	}
	else
	{
		if (!does_blip_exist(iLocal_1389))
		{
			func_41(0, 1, 0, 0);
			func_220();
			iLocal_1389 = func_231(iLocal_1352, 0, 145);
		}
		if (!iLocal_1491)
		{
			iLocal_1491 = func_202("FC_LEAVE", 1, 0, 7500);
		}
	}
	if (iVar4)
	{
		if (func_205())
		{
			iVar4 = false;
		}
	}
	if (!iVar4)
	{
		if (!iLocal_1479)
		{
			if (func_225())
			{
				func_206();
			}
			iLocal_1480 = 1;
		}
	}
}

bool func_225()
{
	struct<6> Var0;
	
	if (func_221())
	{
		Var0 = {func_227()};
		if (((((((are_strings_equal(&Var0, "FKN0_WALK") || are_strings_equal(&Var0, "FKN0_WALK2")) || are_strings_equal(&Var0, "FKN0_B1AV1")) || are_strings_equal(&Var0, "FKN0_B1AV2")) || are_strings_equal(&Var0, "FKN0_B2AV1")) || are_strings_equal(&Var0, "FKN0_B2AV2")) || are_strings_equal(&Var0, "FKN0_B3AV1")) || are_strings_equal(&Var0, "FKN0_NOARM2"))
		{
			iLocal_1479 = 1;
			Local_2013 = {Var0};
			Local_2019 = {func_226()};
			return true;
		}
	}
	return false;
}

struct<6> func_226()
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

struct<6> func_227()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= 0)
	{
		iLocal_1766 = get_game_timer() + iParam0;
	}
	else
	{
		if (iParam1 < 0)
		{
			iVar0 = 8000;
		}
		else
		{
			iVar0 = iParam1;
		}
		if (iParam2 < 0)
		{
			iVar1 = 14000;
		}
		else
		{
			iVar1 = iParam2;
		}
		iLocal_1766 = get_game_timer() + get_random_int_in_range(iVar0, iVar1);
	}
}

void func_229()
{
	if (does_blip_exist(iLocal_1388))
	{
		remove_blip(&iLocal_1388);
	}
	if (func_230("FC_GOVAN2", 0, 0) || func_230("FC_GOVAN1", 0, 0))
	{
		func_41(1, 1, 0, 0);
	}
}

var func_230(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	if (func_204())
	{
		return func_232(iParam0, iParam1, iParam2);
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_233(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_234(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_234(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_234(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_234(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_235(int iParam0, int iParam1)
{
	if (func_204())
	{
		return func_236(iParam0, iParam1, 0);
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	return func_233(iParam0, !iParam1, iParam2);
}

int func_237(vector3 vParam0, int iParam1)
{
	if (func_204())
	{
		return func_238(vParam0, iParam3);
	}
	return 0;
}

int func_238(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_234(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

int func_239()
{
	return get_player_group(get_player_index());
}

int func_240(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<4> Var1;
	
	if ((iParam1 || !is_message_being_displayed()) || !is_subtitle_preference_switched_on())
	{
		if (!func_221())
		{
			if (func_204())
			{
				if (iParam4)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				if (iParam2 == 0)
				{
					return func_242(&uLocal_1847, "FKN0AUD", sParam0, 8, iVar0, 0, 0);
				}
				else
				{
					StringCopy(&Var1, sParam0, 16);
					StringConCat(&Var1, "_", 16);
					StringIntConCat(&Var1, iParam2, 16);
					if (!iParam3)
					{
						return func_241(&uLocal_1847, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
					else
					{
						return func_223(&uLocal_1847, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
				}
			}
		}
	}
	return 0;
}

int func_241(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_209(sParam2, iParam4, 0);
}

int func_242(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_219(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_209(sParam2, iParam3, 0);
}

void func_243(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iLocal_1766 < 0)
	{
		func_228(-1, -1, -1);
	}
	if (get_game_timer() >= iLocal_1766)
	{
		if (func_240(sParam0, iParam4, 0, 0, 1))
		{
			if (iParam1 >= 0)
			{
				func_228(iParam1, -1, -1);
			}
			else
			{
				func_228(-1, iParam2, iParam3);
			}
		}
	}
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (get_game_timer() >= iLocal_1767)
	{
		iVar0 = 800;
		iVar1 = 3000;
		iVar2 = get_random_int_in_range(false, 100);
		switch (iParam0)
		{
			case 0:
				switch (get_random_int_in_range(false, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 5;
						break;
				}
				iVar0 = 2000;
				iVar1 = 6000;
				break;
			
			case 1:
				if (iVar2 >= 90)
				{
					iVar3 = 4;
				}
				else if (iVar2 >= 70)
				{
					iVar3 = 7;
				}
				else if (iVar2 >= 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 5;
				}
				iVar0 = 2000;
				iVar1 = 5500;
				break;
			
			case 2:
				if (iLocal_1331 == 8 || iLocal_1331 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (get_random_int_in_range(false, 4))
					{
						case 0:
							iVar3 = 0;
							break;
						
						case 1:
							iVar3 = 5;
							break;
						
						case 2:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 3:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
			
			case 3:
				switch (get_random_int_in_range(false, 2))
				{
					case 0:
						iVar3 = 1;
						break;
					
					case 1:
						iVar3 = 3;
						break;
				}
				break;
			
			case 5:
				iVar3 = 5;
				if (Local_1185 == 2 || Local_1185 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				break;
			
			case 6:
				switch (get_random_int_in_range(false, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 5;
						break;
				}
				if (Local_1185 == 2 || Local_1185 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 -= 100;
					iVar1 -= 800;
				}
				break;
			
			case 7:
				if (iLocal_1331 == 8 || iLocal_1331 == 9)
				{
					if (iVar2 >= 90)
					{
						iVar3 = 10;
						iVar0 = 400;
						iVar1 = 700;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
					}
				}
				else
				{
					switch (get_random_int_in_range(false, 3))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 2:
							iVar3 = 7;
							break;
						}
				}
				break;
			
			case 4:
				switch (get_random_int_in_range(false, 4))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 1;
						break;
					
					case 2:
						iVar3 = 2;
						break;
					
					case 3:
						iVar3 = 3;
						break;
				}
				if ((Local_1185 == 2 || Local_1185 == 1) || (iLocal_1107 == 2 && get_game_timer() < iLocal_1768 + 6000))
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 -= 100;
					iVar1 -= 800;
				}
				break;
			
			case 8:
				switch (get_random_int_in_range(false, 3))
				{
					case 0:
						iVar3 = 0;
						break;
					
					case 1:
						iVar3 = 1;
						break;
					
					case 2:
						iVar3 = 3;
						break;
				}
				iVar0 -= 100;
				iVar1 -= 800;
				break;
			
			case 9:
				if (iLocal_1331 == 8 || iLocal_1331 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (get_random_int_in_range(false, 2))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
		}
		func_245(iVar3);
		iLocal_1767 = get_game_timer() + get_random_int_in_range(iVar0, iVar1);
	}
}

void func_245(int iParam0)
{
	if (!is_ped_injured(iLocal_1353))
	{
		iLocal_1331 = iParam0;
	}
}

void func_246(int iParam0)
{
	func_247(39, iParam0);
	func_247(40, iParam0);
	func_247(41, iParam0);
	func_247(42, iParam0);
	func_247(43, iParam0);
	func_247(44, iParam0);
}

void func_247(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_252(iParam0, 2, 1))
		{
			func_251(iParam0, 2, 1);
		}
	}
	else if (func_252(iParam0, 2, 1))
	{
		func_248(iParam0, 2, 1);
	}
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_250() == 0)
		{
			iVar0 = func_112(func_249(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_196(func_249(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

var func_250()
{
	return Global_25120;
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_250() == 0)
		{
			iVar0 = func_112(func_249(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_196(func_249(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_250() == 0)
		{
			return is_bit_set(func_112(func_249(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

void func_253()
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	vector3 vVar16;
	
	func_767();
	iLocal_1573 = false;
	if (Local_1185 != 2)
	{
		func_766(&Local_1112, 1, 0);
	}
	if (!is_ped_injured(iLocal_1353))
	{
		if (get_game_timer() <= iLocal_1768 + 3000)
		{
			set_ped_min_move_blend_ratio(iLocal_1353, 2f);
		}
	}
	if (!iLocal_1472)
	{
		if (!iLocal_1692)
		{
			if (!iLocal_1471)
			{
				iLocal_1692 = prepare_music_event("FRA0_BADDY");
			}
		}
		if (iLocal_1471)
		{
			if (!iLocal_1652)
			{
				if (!is_ped_injured(iLocal_1353))
				{
					set_entity_coords(iLocal_1353, 517.267f, -648.6511f, 23.75121f, 1, false, 0, 1);
				}
				if (!is_ped_injured(Local_1159))
				{
					set_entity_coords(Local_1159, 516.2095f, -646.3057f, 23.75121f, 1, false, 0, 1);
				}
				iLocal_1580 = true;
				iLocal_1583 = 1;
				iLocal_1652 = 1;
			}
		}
		if (!iLocal_1471)
		{
			if (!is_ped_injured(iLocal_1355))
			{
				if (has_entity_been_damaged_by_entity(iLocal_1355, player_ped_id(), 1))
				{
					apply_damage_to_ped(iLocal_1355, 1000, 1);
				}
			}
			if (Local_1185 == 2)
			{
				func_765(!iLocal_1580);
			}
			else
			{
				func_25(1);
			}
			func_764();
			func_761();
			func_760();
			func_759();
			if (!iLocal_1690)
			{
				if (iLocal_1571)
				{
					iLocal_1690 = trigger_music_event("FRA0_OPEN_CAR");
				}
			}
			func_732();
			if (iLocal_1573)
			{
				func_731();
			}
			if (!iLocal_1471)
			{
				if (!is_ped_injured(iLocal_1353))
				{
					if (func_730(player_ped_id(), iLocal_1353, 0) > 100f)
					{
						func_720(9);
					}
				}
			}
			switch (iLocal_1344)
			{
				case 0:
					if (is_synchronized_scene_running(iLocal_1806) && iLocal_1673)
					{
						if (iLocal_1343 >= 1)
						{
							if (does_entity_exist(iLocal_1355))
							{
								delete_ped(&iLocal_1355);
							}
							clear_ped_tasks_immediately(Local_1159);
							task_play_anim(Local_1159, func_199(3), "open_train_car_og", 1000f, -8f, -1, 2, 0.2f, 0, 0, 0);
							_0x2208438012482A1A(Local_1159, 0, 0);
							iLocal_1344 = 1;
						}
					}
					break;
				
				case 1:
					if (!iLocal_1691)
					{
						iLocal_1691 = trigger_music_event("FRA0_FOUND");
					}
					if (is_entity_playing_anim(Local_1159, func_199(3), "open_train_car_og", 3))
					{
						if (get_entity_anim_current_time(Local_1159, func_199(3), "open_train_car_og") >= 0.98f)
						{
							task_play_anim(Local_1159, func_199(3), "find_ballasog_og", -8f, -8f, -1, 32768, 0, 0, 0, 0);
							iLocal_1344 = 2;
						}
					}
					break;
				
				case 2:
					set_ped_min_move_blend_ratio(Local_1159, 2f);
					if (!is_entity_playing_anim(Local_1159, func_199(3), "find_ballasog_og", 3))
					{
						task_follow_waypoint_recording(Local_1159, "hood5", 5, 32, -1);
						iLocal_1774 = get_game_timer();
						iLocal_1344 = 3;
					}
					break;
				}
		}
		if (!iLocal_1580)
		{
			func_719();
			if (!iLocal_1600)
			{
				if (func_240("FKN0_FIND", 0, 0, 0, 1))
				{
					iLocal_1600 = 1;
					iLocal_1815 = get_game_timer() + 6000;
				}
			}
			else
			{
				if (!iLocal_1476)
				{
					if (iLocal_1553)
					{
						iLocal_1476 = 1;
					}
					else if (Local_1185 == 0)
					{
						iLocal_1476 = func_202("FC_GOCHOP", 1, 0, 7500);
					}
				}
				if (!iLocal_1555)
				{
					if (get_game_timer() >= iLocal_1815)
					{
						iLocal_1555 = func_240("FKN0_FIND2", 0, 0, 0, 1);
					}
				}
				func_710();
				if (iLocal_1203 == 0 || iLocal_1203 == 7)
				{
					fVar0 = 20f;
				}
				else
				{
					fVar0 = 40f;
				}
				if (!is_ped_injured(iLocal_1353))
				{
					if (is_entity_at_entity(player_ped_id(), iLocal_1353, fVar0, fVar0, 4f, 0, 1, 0) && !iLocal_1573)
					{
						if (!is_ped_headtracking_entity(player_ped_id(), iLocal_1353))
						{
							task_look_at_entity(player_ped_id(), iLocal_1353, -1, 2048, 4);
						}
					}
					else if (is_ped_headtracking_entity(player_ped_id(), iLocal_1353))
					{
						task_clear_look_at(player_ped_id());
					}
				}
				if (iLocal_1553)
				{
					if (iLocal_1203 == 0 || iLocal_1203 == 7)
					{
						if (!is_ped_injured(iLocal_1353))
						{
							iVar1 = is_entity_at_entity(player_ped_id(), iLocal_1353, fVar0, fVar0, 2f, 0, 1, 0);
							iVar2 = is_entity_at_coord(iLocal_1353, 530.0251f, -678.9529f, 23.70727f, 2.5f, 2.5f, 2.5f, false, true, 0);
							if (iVar1 && !iLocal_1573)
							{
								if (iLocal_1476)
								{
									func_243("FKN0_FOLLOW", -1, 6000, 9000, 0);
								}
							}
							switch (iLocal_1329)
							{
								case 0:
									if (!iVar2)
									{
										func_244(5);
										if (is_waypoint_playback_going_on_for_ped(iLocal_1353))
										{
											waypoint_playback_override_speed(iLocal_1353, 1f, 0);
										}
										if (!is_entity_at_coord(iLocal_1353, 528.3346f, -679.3179f, 23.79582f, 3f, 3f, 3f, false, false, 0))
										{
											if (get_game_timer() >= iLocal_1791)
											{
												iLocal_1329 = 1;
											}
										}
									}
									else
									{
										clear_sequence_task(&iLocal_1844);
										open_sequence_task(&iLocal_1844);
										task_go_straight_to_coord(false, 529.8922f, -679.1262f, 23.71802f, 1f, 20000, 83.2f, 0.5f);
										task_play_anim(false, func_199(0), "CHOP_BARK_AT_CARRIAGE", 8f, -8f, -1, 1, 0, 0, 0, 0);
										close_sequence_task(iLocal_1844);
										task_perform_sequence(iLocal_1353, iLocal_1844);
										set_ped_can_ragdoll_from_player_impact(iLocal_1353, 0);
										iLocal_1634 = 0;
										iLocal_1329 = 4;
									}
									break;
								
								case 1:
									if (is_waypoint_playback_going_on_for_ped(iLocal_1353))
									{
										waypoint_playback_override_speed(iLocal_1353, 0f, 0);
									}
									if (get_entity_speed(iLocal_1353) <= 0.2f)
									{
										iLocal_1329 = 2;
										iLocal_1790 = get_game_timer();
									}
									break;
								
								case 2:
									if (is_waypoint_playback_going_on_for_ped(iLocal_1353))
									{
										waypoint_playback_override_speed(iLocal_1353, 0f, 0);
									}
									if (get_game_timer() >= iLocal_1790 + 100)
									{
										task_play_anim(iLocal_1353, func_199(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 2f, 2f, -1, 0, 0, 0, 0, 0);
										iLocal_1790 = get_game_timer();
										iLocal_1329 = 3;
									}
									break;
								
								case 3:
									set_ped_min_move_blend_ratio(iLocal_1353, 1f);
									if (!is_entity_playing_anim(iLocal_1353, func_199(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 3))
									{
										iLocal_1329 = 0;
										iLocal_1568 = 0;
										iLocal_1790 = get_game_timer();
										iLocal_1791 = get_game_timer() + get_random_int_in_range(7000, 11000);
									}
									else if (!iLocal_1568)
									{
										if (get_game_timer() >= iLocal_1790 + 600)
										{
											func_245(6);
											iLocal_1568 = 1;
										}
									}
									break;
								
								case 4:
									set_ped_reset_flag(iLocal_1353, 71, true);
									func_244(8);
									break;
							}
							if (iLocal_1329 == 0)
							{
								if (!is_waypoint_playback_going_on_for_ped(iLocal_1353))
								{
									vVar3 = {get_entity_coords(iLocal_1353, 1)};
									if (vVar3.y < -607.75f)
									{
										waypoint_recording_get_closest_waypoint("hood8", get_offset_from_entity_in_world_coords(iLocal_1353, 0f, 1.5f, 0f), &iVar6);
										task_follow_waypoint_recording(iLocal_1353, "hood8", iVar6, 4, -1);
										iLocal_1791 = get_game_timer() + get_random_int_in_range(4000, 7000);
									}
								}
								else
								{
									iVar7 = get_ped_waypoint_progress(iLocal_1353);
									if (iVar7 > iLocal_1794)
									{
										iLocal_1794 = iVar7;
									}
								}
							}
						}
					}
				}
				else if (!is_ped_injured(iLocal_1353))
				{
					vVar8 = {get_entity_coords(iLocal_1353, 1)};
					if (vVar8.y < -614.75f)
					{
						set_ped_max_move_blend_ratio(iLocal_1353, 1f);
					}
					else if (vVar8.y < -608.75f)
					{
						set_ped_max_move_blend_ratio(iLocal_1353, 2f);
					}
					if (!iLocal_1554)
					{
						if (is_entity_at_coord(iLocal_1353, 542.4755f, -618.7315f, 23.74781f, 2f, 2f, 2f, false, true, 0))
						{
							if (!is_entity_at_entity(player_ped_id(), iLocal_1353, 30f, 30f, 30f, 0, 0, 0))
							{
								task_play_anim(iLocal_1353, func_199(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
							}
							iLocal_1791 = get_game_timer() + 1000;
							iLocal_1554 = 1;
						}
					}
					else if (is_entity_at_entity(player_ped_id(), iLocal_1353, 30f, 30f, 30f, 0, 0, 0))
					{
						if (func_709(0))
						{
							iLocal_1553 = 1;
						}
					}
				}
				switch (iLocal_1343)
				{
					case 0:
						if (Local_1236[2 /*12*/].f_3[1 /*4*/].f_2 == 2 && ((is_synchronized_scene_running(iLocal_1806) && iLocal_1673) || get_game_timer() >= iLocal_1802 + 5000))
						{
							if (does_entity_exist(iLocal_1355))
							{
								delete_ped(&iLocal_1355);
							}
							if (!is_ped_injured(iLocal_1353))
							{
								clear_ped_tasks_immediately(iLocal_1353);
								_0x7D7A2E43E74E2EB8(iLocal_1353);
								Local_1171.f_9 = create_synchronized_scene(func_708(2), 0f, 0f, 83.079f, 2);
								set_synchronized_scene_looped(Local_1171.f_9, false);
								task_synchronized_scene(iLocal_1353, Local_1171.f_9, func_199(3), "find_ballasog_chop", 1000f, -8f, 6, 0, 1000f, 0);
								set_synchronized_scene_rate(Local_1171.f_9, fLocal_1755);
								iLocal_1329 = 4;
							}
							task_clear_look_at(player_ped_id());
							freeze_entity_position(Local_1159, false);
							func_206();
							func_220();
							if (!does_blip_exist(iLocal_1393))
							{
								iLocal_1393 = func_231(iLocal_1353, 0, 102);
							}
							if (!does_blip_exist(iLocal_1390))
							{
								iLocal_1390 = func_231(Local_1159, 1, 145);
							}
							Local_1236[2 /*12*/].f_3[0 /*4*/].f_3 = 3f;
							func_707(2, 0);
							iLocal_1799 = get_game_timer();
							func_706(&Local_1185, -0.75f, 0f);
							iLocal_1343 = 1;
						}
						break;
					
					case 1:
						func_705();
						if (get_game_timer() >= iLocal_1799 + 3400)
						{
							if (!iLocal_1581)
							{
								iLocal_1581 = func_240("FKN0_FOUND1", 0, 0, 0, 1);
							}
						}
						if (!is_synchronized_scene_running(iLocal_1803))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								task_play_anim(player_ped_id(), func_199(3), "find_ballasOG_Fra", 8f, -1f, -1, 0, 0, 0, 0, 0);
							}
							func_704();
							if (!is_ped_injured(Local_1159))
							{
								_0x7D7A2E43E74E2EB8(Local_1159);
							}
							iLocal_1774 = get_game_timer();
							iLocal_1476 = 0;
							iLocal_1600 = 0;
							iLocal_1580 = true;
							iLocal_1343 = 2;
						}
						break;
					}
			}
		}
		else
		{
			if (!iLocal_1471)
			{
				set_ped_move_rate_override(player_ped_id(), 0.97f);
				if (!iLocal_1582)
				{
					func_704();
				}
				if (is_entity_playing_anim(player_ped_id(), func_199(3), "find_ballasOG_Fra", 3))
				{
					func_705();
				}
				func_703();
				func_244(4);
			}
			if (!is_ped_injured(Local_1159))
			{
				if (is_entity_on_fire(Local_1159))
				{
					func_720(4);
				}
			}
			func_72("FRA_0_MCS_4_P2_T3", func_80(22), 100f, 120f);
			if (_0xB56BBBCC2955D9CB())
			{
				if (!is_ped_injured(iLocal_1352))
				{
					_0x2A56C06EBEF2B0D9("Lamar", iLocal_1352, false);
					set_cutscene_ped_component_variation("Lamar", 8, 0, false, false);
				}
				if (!is_ped_injured(iLocal_1353))
				{
					_0x2A56C06EBEF2B0D9("Chop", iLocal_1353, false);
				}
				if (!is_ped_injured(Local_1159))
				{
					_0x2A56C06EBEF2B0D9("Ballas_OG", Local_1159, false);
					set_cutscene_ped_prop_variation("Ballas_OG", false, 0, 0, false);
				}
			}
			if (!is_ped_injured(Local_1159) && !is_ped_injured(iLocal_1353))
			{
				iVar11 = false;
				vVar12 = {get_entity_coords(Local_1159, 1)};
				set_ped_reset_flag(iLocal_1353, 71, true);
				set_ped_reset_flag(Local_1159, 71, true);
				if (!iLocal_1471)
				{
					if (!iLocal_1583)
					{
						if (is_waypoint_playback_going_on_for_ped(Local_1159))
						{
							waypoint_playback_override_speed(Local_1159, 3f, 0);
							if (iVar11)
							{
								set_ped_move_rate_override(Local_1159, 0.5f);
							}
							else
							{
								set_ped_move_rate_override(Local_1159, 0.99f);
							}
						}
						if (is_waypoint_playback_going_on_for_ped(iLocal_1353))
						{
							waypoint_playback_override_speed(iLocal_1353, 3f, 0);
							if (vVar12.y <= -670f)
							{
								if (!is_entity_at_entity(iLocal_1353, Local_1159, 3f, 3f, 3f, 0, 0, 0))
								{
									fVar15 = 1.15f;
								}
								else
								{
									fVar15 = 1.05f;
								}
							}
							else if (is_entity_at_entity(iLocal_1353, Local_1159, 2f, 2f, 2f, 0, 0, 0))
							{
								fVar15 = 1.13f;
							}
							else
							{
								fVar15 = 1.15f;
							}
							if (fVar15 > fLocal_1754)
							{
								fLocal_1754 += 0.1f * timestep();
								if (fLocal_1754 > fVar15)
								{
									fLocal_1754 = fVar15;
								}
							}
							else if (fVar15 < fLocal_1754)
							{
								fLocal_1754 -= 0.1f * timestep();
								if (fLocal_1754 < fVar15)
								{
									fLocal_1754 = fVar15;
								}
							}
							if (iVar11)
							{
								set_ped_move_rate_override(iLocal_1353, fLocal_1754 / 2f);
							}
							else
							{
								set_ped_move_rate_override(iLocal_1353, fLocal_1754);
							}
						}
						else if (!iLocal_1582)
						{
							if (is_synchronized_scene_running(Local_1171.f_9))
							{
								if (get_synchronized_scene_phase(Local_1171.f_9) >= 0.98f)
								{
									_set_ped_ragdoll_flag(iLocal_1353, iLocal_2012);
									task_follow_waypoint_recording(iLocal_1353, "hood5", 5, 32, -1);
									iLocal_1582 = 1;
								}
							}
						}
					}
				}
			}
			if (!iLocal_1471)
			{
				if (!iLocal_1588)
				{
					iLocal_1588 = func_240("FKN0_DFYOU", 0, 0, 0, 1);
				}
				else if (!iLocal_1600)
				{
					if (iLocal_1328 < 1)
					{
						iLocal_1600 = func_240("FKN0_DOWN", 0, 0, 0, 1);
					}
					else
					{
						iLocal_1600 = func_240("FKN0_DOWN2", 0, 0, 0, 1);
					}
					iLocal_1816 = get_game_timer() + 2800;
				}
				else
				{
					if (!iLocal_1476)
					{
						if (Local_1185 == 0)
						{
							iLocal_1476 = 1;
						}
					}
					if (!iLocal_1587)
					{
						if (get_game_timer() >= iLocal_1816)
						{
							iLocal_1587 = func_240("FKN0_FOUND2", 0, 0, 0, 1);
						}
					}
				}
			}
			if (!is_ped_injured(Local_1159) && !is_ped_injured(iLocal_1353))
			{
				vVar16 = {get_entity_coords(Local_1159, 1)};
				if (!iLocal_1583)
				{
					if (!iLocal_1585)
					{
						if (vVar16.y >= -647.2f || (vVar16.y >= -660f && is_entity_at_entity(iLocal_1353, Local_1159, 1.6f, 1.6f, 3f, 0, 0, 0)))
						{
							Local_1171.f_3 = {get_entity_coords(iLocal_1353, 1)};
							Local_1171.f_6 = {get_entity_rotation(iLocal_1353, 2)};
							Local_1171.f_6.f_2 = func_702(Local_1171.f_6.f_2);
							Local_1171.f_9 = create_synchronized_scene(Local_1171.f_3, Local_1171.f_6, 2);
							task_synchronized_scene(iLocal_1353, Local_1171.f_9, func_199(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_CHOP", 4f, -8f, 5, 0, 1000f, 0);
							set_synchronized_scene_phase(Local_1171.f_9, 0.03f);
							Local_1159.f_3 = {get_entity_coords(Local_1159, 1)};
							Local_1159.f_6 = {get_entity_rotation(Local_1159, 2)};
							Local_1159.f_6.f_2 = func_702(Local_1159.f_6.f_2);
							vLocal_1728 = {_get_object_offset_from_coords(Local_1159.f_3, Local_1159.f_6.f_2, 0f, -1.5f, -0.6f)};
							vLocal_1731 = {Local_1159.f_6};
							Local_1159.f_9 = create_synchronized_scene(Local_1159.f_3, Local_1159.f_6, 2);
							task_synchronized_scene(Local_1159, Local_1159.f_9, func_199(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_VICTIM", 4f, -8f, 5, 0, 1000f, 0);
							set_synchronized_scene_phase(Local_1159.f_9, 0.03f);
							_0x293220DA1B46CEBC(2f, 2f, 3);
							set_audio_flag("DisableAbortConversationForRagdoll", 1);
							iLocal_1585 = 1;
						}
					}
					else
					{
						func_700(&(Local_1171.f_3), vLocal_1728, 0.85f * 2f);
						func_700(&(Local_1171.f_6), vLocal_1731, 7.5f * 2f);
						set_synchronized_scene_origin(Local_1171.f_9, Local_1171.f_3, Local_1171.f_6, 2);
						if (is_synchronized_scene_running(Local_1159.f_9))
						{
							if (get_synchronized_scene_phase(Local_1159.f_9) >= 0.237f)
							{
								func_699(0);
							}
							if (!iLocal_1584)
							{
								if (get_synchronized_scene_phase(Local_1159.f_9) >= 0.147f)
								{
									iLocal_1584 = 1;
								}
							}
							if (get_synchronized_scene_phase(Local_1159.f_9) >= 0.98f)
							{
								iLocal_1583 = 1;
							}
						}
						else
						{
							func_699(0);
							iLocal_1583 = 1;
						}
						if (!iLocal_1589)
						{
							if (func_240("FKN0_DFALL", 0, 0, 0, 1))
							{
								iLocal_1589 = 1;
								iLocal_1766 = get_game_timer() + 3000;
							}
						}
					}
				}
				else if (!iLocal_1471)
				{
					if (is_entity_at_entity(player_ped_id(), Local_1159, 30f, 30f, 8f, 0, 1, 0))
					{
						func_243("FKN0_DHELP", -1, 5000, 10000, 0);
					}
					if (!is_entity_at_entity(iLocal_1353, Local_1159, 2f, 2f, 2f, 0, 1, 0))
					{
						if (get_game_timer() >= iLocal_1808 + 2000)
						{
							clear_sequence_task(&iLocal_1844);
							open_sequence_task(&iLocal_1844);
							task_go_straight_to_coord(false, get_entity_coords(Local_1159, 1) + Vector(0f, 0f, 1.5f), 2f, 20000, 1193033728, 0.5f);
							close_sequence_task(iLocal_1844);
							task_perform_sequence(iLocal_1353, iLocal_1844);
							iLocal_1808 = get_game_timer();
						}
					}
					else if (get_script_task_status(iLocal_1353, 242628503) == 7)
					{
						clear_sequence_task(&iLocal_1844);
						open_sequence_task(&iLocal_1844);
						task_turn_ped_to_face_entity(false, Local_1159, 0);
						task_play_anim(false, func_199(3), "CHOP_BARK_AT_BALLAS", 8f, -8f, -1, 1, 0, 0, 0, 0);
						close_sequence_task(iLocal_1844);
						task_perform_sequence(iLocal_1353, iLocal_1844);
					}
					if (!iLocal_1586)
					{
						if (get_game_timer() >= iLocal_1807 + 2500)
						{
							if (is_entity_at_entity(player_ped_id(), Local_1159, 35f, 35f, 35f, 0, 0, 0))
							{
								set_ped_to_ragdoll(Local_1159, 2000, 3000, 1, 1, 1, 0);
								create_nm_message(1, 34);
								give_ped_nm_message(Local_1159);
								iLocal_1586 = 1;
							}
						}
					}
					else if (is_ped_running_ragdoll_task(Local_1159))
					{
						reset_ped_ragdoll_timer(Local_1159);
					}
					else if (can_ped_ragdoll(Local_1159))
					{
						set_ped_to_ragdoll(Local_1159, 2000, 3000, 1, 1, 1, 0);
					}
				}
				if (is_entity_at_entity(player_ped_id(), iLocal_1353, 7f, 7f, 2f, 0, 1, 0) || iLocal_1471)
				{
					if ((iLocal_1583 || iLocal_1584) || iLocal_1471)
					{
						if (func_204() || iLocal_1471)
						{
							if (func_66())
							{
								iLocal_1472 = 1;
							}
						}
					}
				}
			}
		}
	}
	else if (!iLocal_1560)
	{
		if (!iLocal_1580)
		{
		}
		else
		{
			func_256();
		}
	}
	else
	{
		func_254();
	}
}

void func_254()
{
	switch (iLocal_1111)
	{
		case 0:
			func_7(1, 1, -1, 1, 1, 1, 1, 1);
			clear_area(502.85f, -648.35f, 23.75f, 4f, 1, 0, 0, false);
			if ((!is_ped_injured(iLocal_1353) && !is_ped_injured(iLocal_1355)) && !is_ped_injured(player_ped_id()))
			{
				Local_1171.f_9 = create_synchronized_scene(get_entity_coords(iLocal_1355, 1), get_entity_rotation(iLocal_1355, 2), 2);
				clear_ped_tasks_immediately(player_ped_id());
				clear_ped_secondary_task(player_ped_id());
				task_clear_look_at(player_ped_id());
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
				set_ped_stealth_movement(player_ped_id(), 0, 0);
				task_synchronized_scene(player_ped_id(), Local_1171.f_9, func_199(3), "Hump_Exit_Scene_FRANKLIN", 1000f, -4f, 0, 0, 1000f, 0);
				task_synchronized_scene(iLocal_1353, Local_1171.f_9, func_199(3), "Hump_Exit_Scene_CHOP", 1000f, -4f, 0, 0, 1000f, 0);
				task_synchronized_scene(iLocal_1355, Local_1171.f_9, func_199(3), "Hump_Exit_Scene_LADYDOG", 1000f, -4f, 0, 0, 1000f, 0);
				_0x394B9CD12435C981(Local_1171.f_9, false);
				_0x2208438012482A1A(player_ped_id(), 0, 0);
				_0x2208438012482A1A(iLocal_1353, 0, 0);
				_0x2208438012482A1A(iLocal_1355, 0, 0);
				func_55();
				play_synchronized_cam_anim(iLocal_1396, Local_1171.f_9, "Hump_Exit_Scene_CAM", func_199(3));
			}
			iLocal_1763 = get_game_timer();
			iLocal_1111 = 1;
			break;
		
		case 1:
			if (!iLocal_1565)
			{
				if (!iLocal_1566)
				{
					if (func_240("FKN0_MALE", 1, 0, 0, 1))
					{
						iLocal_1566 = 1;
						iLocal_1565 = 1;
					}
				}
				else
				{
					iLocal_1565 = func_240("FC_GOAWAY", 1, 0, 0, 1);
				}
			}
			if (is_synchronized_scene_running(Local_1171.f_9))
			{
			}
			else
			{
				iLocal_1111 = 2;
			}
			break;
		
		case 2:
			func_255(6);
			func_49(0, 3, 0);
			iLocal_1562 = 1;
			iLocal_1560 = 0;
			iLocal_1472 = 0;
			break;
	}
}

void func_255(int iParam0)
{
	if (!is_ped_injured(iLocal_1353))
	{
		switch (iParam0)
		{
			case 2:
				task_play_anim(iLocal_1353, func_199(3), "FRA_0_IG_15_CHOP_SPOTS_DOG", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_1572 = 1;
				iLocal_1568 = 0;
				break;
			
			case 1:
				task_play_anim(iLocal_1353, func_199(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
				break;
			
			case 3:
				if (!is_ped_injured(iLocal_1355))
				{
					clear_sequence_task(&iLocal_1844);
					open_sequence_task(&iLocal_1844);
					vLocal_1713 = {502.9178f, -648.6818f, 23.75121f};
					task_follow_nav_mesh_to_coord(false, 506.2516f, -650.0049f, 23.75121f, 3f, 20000, 10f, 0, 69.6f);
					task_follow_nav_mesh_to_coord(false, 506.2516f, -650.0049f, 23.75121f, 2f, 20000, 1.1f, 0, 69.6f);
					task_follow_nav_mesh_to_coord(false, vLocal_1713, 1f, 20000, 0.08f, 0, 71.1f);
					close_sequence_task(iLocal_1844);
					task_perform_sequence(iLocal_1353, iLocal_1844);
				}
				break;
			
			case 4:
				func_228(8000, -1, -1);
				iLocal_1800 = get_game_timer();
				break;
			
			case 5:
				if (func_230("FC_CLOSER", 0, 0))
				{
					func_41(0, 1, 0, 0);
				}
				func_26(0, -1);
				break;
			
			case 6:
				iLocal_1785 = get_game_timer();
				func_26(0, -1);
				if (!is_ped_injured(iLocal_1355))
				{
					if (iLocal_1203 >= 4)
					{
						task_smart_flee_ped(iLocal_1355, player_ped_id(), 1000f, -1, 0, 0);
					}
				}
				set_ped_can_ragdoll(iLocal_1353, 1);
				set_ped_can_ragdoll_from_player_impact(iLocal_1353, 1);
				clear_sequence_task(&iLocal_1844);
				open_sequence_task(&iLocal_1844);
				task_follow_nav_mesh_to_coord(false, 519.48f, -657.47f, 23.79f, 3f, 20000, 2f, 0, 1193033728);
				task_follow_nav_mesh_to_coord(false, func_80(27), 3f, 20000, 1f, 0, 1193033728);
				close_sequence_task(iLocal_1844);
				task_perform_sequence(iLocal_1353, iLocal_1844);
				break;
			
			case 7:
				iLocal_1568 = 0;
				break;
		}
		iLocal_1786 = get_game_timer();
		iLocal_1203 = iParam0;
	}
}

void func_256()
{
	int iVar0;
	
	set_all_random_peds_flee_this_frame(player_id());
	if (is_vehicle_driveable(iLocal_1367[0], 0))
	{
		set_vehicle_brake_lights(iLocal_1367[0], 0);
	}
	switch (iLocal_1111)
	{
		case 0:
			iLocal_1763 = get_game_timer();
			set_audio_flag("DisableAbortConversationForRagdoll", 0);
			if (!is_ped_injured(player_ped_id()))
			{
				register_entity_for_cutscene(player_ped_id(), "Franklin", 0, false, 0);
			}
			if (!is_ped_injured(iLocal_1352))
			{
				task_clear_look_at(iLocal_1352);
				register_entity_for_cutscene(iLocal_1352, "Lamar", 0, false, 0);
			}
			if (!is_ped_injured(iLocal_1353))
			{
				detach_entity(iLocal_1353, 1, true);
				register_entity_for_cutscene(iLocal_1353, "Chop", 0, false, 0);
			}
			if (!is_ped_injured(Local_1159))
			{
				register_entity_for_cutscene(Local_1159, "Ballas_OG", 0, false, 0);
			}
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				freeze_entity_position(iLocal_1367[0], false);
				register_entity_for_cutscene(iLocal_1367[0], "Kidnapping_Van", 0, false, 32);
			}
			func_52();
			start_cutscene(2048);
			iLocal_1703 = 0;
			_0x48621C9FCA3EBD28(4);
			set_cutscene_fade_values(0, 0, 0, 0);
			iLocal_1111 = 1;
			break;
		
		case 1:
			if (!iLocal_1474)
			{
				if (is_cutscene_playing())
				{
					func_47();
					clear_area(511.55f, -652.05f, 23.75f, 20f, 1, 1, 0, false);
					clear_area_of_projectiles(511.9636f, -658.3705f, 23.75104f, 25f, 0);
					stop_fire_in_range(511.9636f, -658.3705f, 23.75104f, 25f);
					remove_particle_fx_in_range(511.9636f, -658.3705f, 23.75104f, 25f);
					func_766(&Local_1112, 1, 0);
					if (is_vehicle_driveable(iLocal_1367[0], 0))
					{
						remove_vehicle_window(iLocal_1367[0], false);
						set_vehicle_door_control(iLocal_1367[0], false, 0, 0f);
						set_vehicle_door_control(iLocal_1367[0], 3, 0, 0f);
						set_vehicle_door_control(iLocal_1367[0], 2, 0, 0f);
					}
					func_46(iLocal_1367[0]);
					func_43(6);
					if (iLocal_1471)
					{
						do_screen_fade_in(800);
						iLocal_1471 = false;
					}
					else if (is_screen_faded_out())
					{
						do_screen_fade_in(800);
					}
					iLocal_1474 = 1;
				}
			}
			if (!iLocal_1664)
			{
				if (does_entity_exist(get_entity_index_of_cutscene_entity("Ballas_OG", 0)))
				{
					iVar0 = get_ped_index_from_entity_index(get_entity_index_of_cutscene_entity("Ballas_OG", joaat("csb_ballasog")));
					if (!is_ped_injured(iVar0))
					{
						apply_ped_blood_specific(iVar0, 2, 0.536f, 0.601f, 93.24f, 0.695f, -1, 0f, "stab");
						apply_ped_blood_specific(iVar0, 2, 0.536f, 0.561f, 95.04f, 0.695f, -1, 0f, "stab");
						apply_ped_blood_specific(iVar0, 2, 0.476f, 0.531f, 95.14f, 0.695f, -1, 0f, "stab");
						iLocal_1664 = 1;
					}
				}
			}
			if (!iLocal_1693)
			{
				if (iLocal_1692)
				{
					iLocal_1693 = func_698("FRA0_BADDY");
				}
			}
			if (get_cutscene_time() >= 37400)
			{
			}
			if (!iLocal_1703)
			{
				if (get_follow_vehicle_cam_view_mode() == 4)
				{
					if (get_cutscene_time() >= get_cutscene_total_duration() - 300)
					{
						_start_screen_effect("CamPushInNeutral", false, 0);
						play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1703 = 1;
					}
				}
			}
			if (can_set_exit_state_for_registered_entity("Franklin", false))
			{
				_0x81CBAE94390F9F89();
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_1367[0], -1);
					_0x2208438012482A1A(player_ped_id(), 0, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Ballas_OG", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0) && !is_ped_injured(Local_1159))
				{
					set_ped_can_play_ambient_base_anims(Local_1159, 0);
					set_ped_can_play_ambient_anims(Local_1159, 0);
					set_ped_into_vehicle(Local_1159, iLocal_1367[0], 2);
					_0x2208438012482A1A(Local_1159, 0, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Chop", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0) && !is_ped_injured(iLocal_1353))
				{
					func_697(iLocal_1353, iLocal_1367[0], &uLocal_1346, &uLocal_1751, 1, 1, 0, 0, 0, 0, 0, 0);
					set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
					set_ped_can_ragdoll(iLocal_1353, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Lamar", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0) && !is_ped_injured(iLocal_1352))
				{
					func_45(0);
					set_ped_into_vehicle(iLocal_1352, iLocal_1367[0], false);
					task_play_anim(iLocal_1352, func_199(4), "InCar_PhoneIdle_Lem", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					_0x2208438012482A1A(iLocal_1352, 0, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Kidnapping_Van", false))
			{
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					func_42();
					func_7(0, 1, -1, was_cutscene_skipped(), 1, 1, 1, 1);
					func_257(4, 0, 1, 1, 0, 1, 1, 1);
				}
			}
			else if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				set_all_vehicles_spawn(iLocal_1367[0], 1, 1, 1);
			}
			if (was_cutscene_skipped())
			{
				can_set_exit_state_for_camera(0);
			}
			break;
		
		case 2:
			break;
	}
	hide_hud_and_radar_this_frame();
}

void func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	iParam7 = iParam7;
	if (iParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!iLocal_1471)
				{
					vVar0 = {func_80(1)};
					fVar3 = 93.3f;
				}
				else
				{
					vVar0 = {func_80(2)};
					fVar3 = -106.5f;
				}
				break;
			
			case 1:
				vVar0 = {func_80(11)};
				fVar3 = 164.8f;
				break;
			
			case 2:
				vVar0 = {func_80(5)};
				fVar3 = -19.4f;
				break;
			
			case 3:
				if (!iLocal_1471)
				{
					vVar0 = {func_80(20)};
					fVar3 = 137.26f;
				}
				else
				{
					vVar0 = {517.1f, -647.4f, 24.2f};
					fVar3 = -86f;
				}
				break;
			
			case 4:
				if (!iLocal_1471)
				{
					vVar0 = {func_80(7)};
					fVar3 = 175.46f;
				}
				else
				{
					vVar0 = {func_80(4)};
					fVar3 = 143.1f;
				}
				break;
		}
		func_696();
		if (iParam5)
		{
			clear_area(vVar0, 10000f, 1, 0, 0, false);
			if (iParam0 == 3)
			{
				remove_particle_fx_in_range(539.1184f, -626.1908f, 23.78954f, 40f);
			}
		}
		wait(0);
		set_weather_type_now_persist("extrasunny");
		if (func_695() && !iLocal_1694)
		{
			func_694(vVar0, fVar3, 1, 0);
		}
		else
		{
			set_entity_coords(player_ped_id(), vVar0, 1, false, 0, 1);
			set_entity_heading(player_ped_id(), fVar3);
		}
	}
	func_690(iParam0, 1, 0);
	func_685(iParam0, 1, 0);
	func_680(iParam0, 1, 0);
	func_674(iParam0, 1, 0);
	func_669(iParam0, 1, 0);
	func_664(iParam0, 1, 0);
	func_658(iParam0, 1, 0);
	func_647(iParam0, 1, 0);
	func_646(1);
	remove_cutscene();
	iLocal_1110 = 0;
	func_644(iParam0);
	if (iParam6)
	{
		func_220();
	}
	func_41((iParam2 || iParam1), (iParam2 || iParam1), 1, 0);
	func_643(&uLocal_28, 0, 0);
	if (iParam1)
	{
		iVar4 = func_642(iParam0);
		iVar5 = func_39(iVar4);
		if (func_214() != iVar4)
		{
			while (!func_487(&(Local_1112[iVar5]), iVar4, get_entity_coords(player_ped_id(), 1), get_entity_heading(player_ped_id()), 0, 0, 0))
			{
				wait(0);
			}
			while (!func_485(&Local_1112, iVar5))
			{
				wait(0);
			}
			while (!func_439(&Local_1112, 1, 0, 0))
			{
				wait(0);
			}
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (does_entity_exist(Local_1112[iVar6]))
				{
					delete_ped(&(Local_1112[iVar6]));
				}
				iVar6++;
			}
		}
	}
	if (iParam1 || iParam4)
	{
		if (iParam1)
		{
			iVar7 = 0;
			while (iVar7 <= 9)
			{
				func_438(&uLocal_1847, iVar7);
				iVar7++;
			}
		}
		func_437(&uLocal_1847, 2, player_ped_id(), "FRANKLIN", 0, 1);
		Local_1112.f_6 = func_39(func_642(iParam0));
		func_436(iParam0);
		func_435(player_ped_id(), func_642(iParam0), iParam0);
		if (iParam1)
		{
			func_434();
			while (!_0x7350823473013C02(player_ped_id()))
			{
				wait(0);
			}
		}
		if (is_vehicle_driveable(iLocal_1367[0], 0))
		{
			if (iParam0 >= 4)
			{
				remove_vehicle_window(iLocal_1367[0], false);
			}
		}
		if (iParam0 > 0)
		{
			func_425(iParam0);
		}
	}
	if (iParam3)
	{
		render_script_cams(false, false, 3000, 1, 0, 0);
	}
	if (iParam1)
	{
		delete_all_trains();
	}
	func_32(&Local_1185, &Local_1112, 0);
	switch (iParam0)
	{
		case 0:
			if (iParam1)
			{
				func_424();
				if (func_695())
				{
					if (func_423())
					{
						if (func_421(func_74(), 0f, 0f, 0f, 1))
						{
							iVar8 = func_399(func_80(30), 95.68f);
							func_374(iVar8, func_80(30), 95.68f, 24, 0);
						}
					}
				}
			}
			iLocal_1398[23] = 0;
			func_368(iParam0, 1);
			func_366(iParam0, 1);
			func_365(1, 0);
			func_364(0);
			if (!iLocal_1471)
			{
				func_50(0);
			}
			set_gps_disabled_zone(164f, -257f, -80f, 436f, 62f, 120f);
			if (iParam1)
			{
				if (!is_ped_injured(iLocal_1352))
				{
					set_entity_coords(iLocal_1352, func_80(12), 1, false, 0, 1);
				}
				if (!is_ped_injured(iLocal_1353))
				{
					set_entity_coords(iLocal_1353, func_80(15), 1, false, 0, 1);
				}
			}
			if (!is_ped_injured(iLocal_1353))
			{
				set_animal_mood(iLocal_1353, 1);
			}
			iLocal_1814 = get_game_timer() + 100;
			iLocal_1813 = get_game_timer() + 1500;
			iLocal_1840 = get_game_timer() + 2000;
			set_player_control(player_id(), true, 0);
			break;
		
		case 1:
			if (iParam1)
			{
				iLocal_1670 = 0;
				func_368(iParam0, 1);
				func_366(iParam0, 1);
				func_363(iParam0);
				if (!is_ped_injured(player_ped_id()) && is_vehicle_driveable(iLocal_1367[0], 0))
				{
					set_vehicle_engine_on(iLocal_1367[0], true, 1, 0);
				}
			}
			else
			{
				if (!is_ped_injured(iLocal_1353))
				{
					detach_entity(iLocal_1353, 1, true);
				}
				func_697(iLocal_1353, iLocal_1367[0], &uLocal_1346, &uLocal_1751, 0, 1, 0, 0, 0, 0, 0, 0);
				set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
				set_ped_can_ragdoll(iLocal_1353, 0);
			}
			_0x7D7A2E43E74E2EB8(iLocal_1353);
			func_365(1, 1);
			if (!iParam1)
			{
				clear_area(143.22f, -458.9f, 41.05f, 810f, 1, 0, 0, false);
			}
			func_81(1);
			func_45(1);
			set_ped_config_flag(player_ped_id(), 170, true);
			if (!is_ped_injured(iLocal_1354))
			{
				task_cower(iLocal_1354, -1);
			}
			special_ability_fill_meter(player_id(), 1);
			set_gps_disabled_zone(0f, 0f, 0f, 0f, 0f, 0f);
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				iLocal_1760 = get_entity_health(iLocal_1367[0]);
				set_vehicle_is_considered_by_player(iLocal_1367[0], 1);
			}
			fLocal_462 = 50f;
			iLocal_62 = true;
			iLocal_69 = true;
			iLocal_1797 = _0x2CE544C68FB812A0(293.1273f, -83.67029f, 69.13698f, 5.1f, 0f, 0);
			func_359(func_362(), 1, 1, 1);
			func_358(0);
			func_357(1);
			func_356();
			func_355();
			func_50(2);
			set_ped_population_budget(2);
			if (!is_ped_injured(iLocal_1353))
			{
				stop_ped_speaking(iLocal_1353, 1);
			}
			if (is_vehicle_driveable(iLocal_1367[1], 0))
			{
				_0x153973AB99FE8980(iLocal_1367[1], "FRANKLIN_0_Bike_Group", 0f);
			}
			if (iParam1)
			{
				if (!is_ped_injured(player_ped_id()))
				{
					func_354();
				}
				func_698("FRA0_CHASE_RESTART");
			}
			break;
		
		case 2:
			if (iParam1)
			{
				iLocal_1341 = 2;
				func_353();
				func_368(iParam0, 1);
				func_366(iParam0, 1);
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					set_vehicle_engine_on(iLocal_1367[0], true, 1, 0);
				}
			}
			_0x1033371FC8E842A7(iLocal_1797);
			func_364(0);
			func_352();
			if (iParam1)
			{
				clear_area(466f, -579f, 28f, 10000f, 1, 0, 0, false);
			}
			func_365(1, 1);
			if (iParam1)
			{
				clear_area_of_objects(494f, -516f, 23f, 10f, 2);
			}
			Local_1171 = iLocal_1353;
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				set_vehicle_is_considered_by_player(iLocal_1367[0], 0);
			}
			func_228(11000, -1, -1);
			if (!is_ped_injured(Local_1159))
			{
				if (!iParam1)
				{
					_0x153973AB99FE8980(Local_1159, "FRANKLIN_0_D_Group", 0f);
				}
				_0x7D7A2E43E74E2EB8(Local_1159);
				if (!does_blip_exist(iLocal_1390))
				{
					iLocal_1390 = func_231(Local_1159, 1, 145);
				}
				set_blocking_of_non_temporary_events(Local_1159, true);
				_set_ped_ragdoll_flag(Local_1159, iLocal_2012);
				if (iParam1)
				{
					force_ped_motion_state(Local_1159, -1115154469, true, 1, 0);
				}
				set_ped_min_move_blend_ratio(Local_1159, 3f);
			}
			if (!is_ped_injured(iLocal_1353))
			{
				set_entity_proofs(iLocal_1353, false, false, false, false, false, false, 0, true);
				detach_entity(iLocal_1353, 1, true);
				_set_ped_ragdoll_flag(iLocal_1353, iLocal_2012);
				if (iParam1)
				{
				}
				set_ped_can_ragdoll(iLocal_1353, 1);
				set_ped_min_move_blend_ratio(iLocal_1353, 3f);
				iLocal_1393 = func_231(iLocal_1353, 0, 102);
			}
			if (!is_ped_injured(iLocal_1352) && is_vehicle_driveable(iLocal_1367[0], 0))
			{
				if (!iParam1)
				{
					if (!is_ped_in_vehicle(iLocal_1352, iLocal_1367[0], 0))
					{
						detach_entity(iLocal_1352, 1, true);
						set_ped_into_vehicle(iLocal_1352, iLocal_1367[0], -1);
					}
				}
				set_entity_only_damaged_by_player(iLocal_1367[0], true);
				task_look_at_entity(iLocal_1352, player_ped_id(), -1, 2048, 2);
			}
			func_350(&Local_1185);
			if (iParam1)
			{
				func_347(1, 0, 1, 1, 1);
				iLocal_1631 = false;
			}
			else
			{
				iLocal_1631 = true;
			}
			func_344();
			func_343();
			if (iParam1)
			{
				func_698("FRA0_FOOT_CHASE_RESTART");
				func_50(3);
			}
			else
			{
				func_698("FRA0_FRANK_CHASE");
				if (is_vehicle_driveable(iLocal_1367[1], 0))
				{
					_0x18EB48CFC41F2EA0(iLocal_1367[1], 0f);
				}
			}
			if (!iParam1)
			{
				iLocal_1476 = 1;
			}
			break;
		
		case 3:
			func_342();
			func_365(1, 1);
			func_364(0);
			iLocal_1806 = 123;
			if (iParam1)
			{
				func_368(iParam0, 1);
				func_366(iParam0, 1);
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					set_entity_only_damaged_by_player(iLocal_1367[0], true);
					set_vehicle_engine_on(iLocal_1367[0], true, 1, 0);
				}
				iLocal_1569 = 0;
				iLocal_1817 = func_339(1, 1);
				iLocal_1595 = 0;
				iLocal_1597 = 0;
				iLocal_1643 = false;
				iLocal_1345 = 2;
				iLocal_1774 = get_game_timer();
				iLocal_1774 = iLocal_1774;
				func_337(1, 3, 0);
				func_337(2, 3, 0);
				iLocal_1779[0] = get_game_timer();
				iLocal_1779[1] = get_game_timer() - 10000;
				iLocal_1779[2] = get_game_timer() - 10000;
				func_767();
				wait(0);
				func_344();
				func_350(&Local_1185);
			}
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				set_entity_coords(iLocal_1367[0], func_80(31), 1, false, 0, 1);
				set_entity_heading(iLocal_1367[0], 87.3f);
				freeze_entity_position(iLocal_1367[0], true);
			}
			iVar9 = 0;
			while (iVar9 < 6)
			{
				if (does_entity_exist(Local_1205[iVar9 /*5*/]))
				{
					delete_ped(&(Local_1205[iVar9 /*5*/]));
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < iLocal_1356)
			{
				if (does_entity_exist(iLocal_1356[iVar9]))
				{
					delete_ped(&(iLocal_1356[iVar9]));
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (does_entity_exist(iLocal_1370[iVar9]))
				{
					delete_vehicle(&(iLocal_1370[iVar9]));
				}
				iVar9++;
			}
			if (!is_ped_injured(iLocal_1353))
			{
				_set_ped_reset_ragdoll_flag(iLocal_1353, iLocal_2012);
				iLocal_1393 = func_231(iLocal_1353, 0, 102);
				task_clear_look_at(iLocal_1353);
				waypoint_recording_get_coord("hood8", 6, &vVar10);
				clear_sequence_task(&iLocal_1844);
				open_sequence_task(&iLocal_1844);
				if (!iParam1)
				{
					task_pause(false, 3500);
				}
				task_follow_nav_mesh_to_coord(false, vVar10, 3f, 20000, 0.25f, 0, 175.5f);
				close_sequence_task(iLocal_1844);
				task_perform_sequence(iLocal_1353, iLocal_1844);
				set_ped_can_ragdoll(iLocal_1353, 1);
			}
			if (!is_ped_injured(Local_1159))
			{
				_set_ped_ragdoll_flag(Local_1159, iLocal_2012);
			}
			if (!is_ped_injured(iLocal_1352))
			{
				task_look_at_entity(iLocal_1352, player_ped_id(), -1, 2048, 2);
			}
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				remove_vehicle_window(iLocal_1367[0], false);
			}
			if (!iLocal_1471)
			{
				func_43(4);
				func_43(3);
				func_50(6);
				if (iParam1)
				{
					func_698("FRA0_HIDING_RESTART");
				}
				else
				{
					func_698("FRA0_SEARCH");
				}
			}
			break;
		
		case 4:
			func_365(0, 0);
			if (iParam1)
			{
				iLocal_1699 = 1;
				func_368(iParam0, 1);
				func_366(iParam0, 1);
			}
			func_364(0);
			if (is_vehicle_driveable(iLocal_1367[0], 0))
			{
				remove_vehicle_window(iLocal_1367[0], false);
				set_entity_only_damaged_by_player(iLocal_1367[0], false);
				set_vehicle_is_considered_by_player(iLocal_1367[0], 1);
				set_vehicle_engine_on(iLocal_1367[0], true, 1, 0);
			}
			if (!is_ped_injured(Local_1159))
			{
				_set_ped_reset_ragdoll_flag(Local_1159, iLocal_2012);
				set_ped_can_ragdoll(Local_1159, 1);
				func_699(0);
				set_entity_proofs(Local_1159, false, false, false, false, false, false, 0, false);
				set_ped_can_play_ambient_base_anims(Local_1159, 0);
				set_ped_can_play_ambient_anims(Local_1159, 0);
				if (iParam1)
				{
					set_ped_into_vehicle(Local_1159, iLocal_1367[0], 2);
				}
				task_look_at_entity(Local_1159, iLocal_1367[0], -1, 2048, 2);
				set_ped_relationship_group_hash(Local_1159, 1862763509);
			}
			func_50(7);
			if (iParam1)
			{
				if (iLocal_1471)
				{
					iLocal_1333 = 7;
					iLocal_1611 = 1;
					iLocal_1327 = 7;
				}
			}
			break;
	}
	if (iParam1)
	{
		set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1)
	{
		if (iParam0 >= 4)
		{
			func_81(1);
			func_45(0);
		}
		else if (iParam0 >= 2)
		{
			func_81(1);
			func_45(1);
		}
		else if (iParam0 < 1)
		{
			func_81(0);
			func_45(0);
		}
	}
	if (iParam0 == 1)
	{
		_set_unk_map_flag(2);
	}
	else
	{
		_set_unk_map_flag(0);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		set_vehicle_model_is_suppressed(joaat("bus"), true);
	}
	else
	{
		set_vehicle_model_is_suppressed(joaat("bus"), false);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		func_336(1);
		Global_101098 = 1;
	}
	else
	{
		func_336(0);
		Global_101098 = 0;
	}
	Global_101098 = 1;
	if (iParam0 == 2)
	{
		_0x949F397A288B28B3(4f);
	}
	else
	{
		_0x949F397A288B28B3(1f);
	}
	if (iParam0 == 2)
	{
		func_335(0, 1);
		func_335(2, 1);
	}
	else
	{
		func_335(0, 0);
		func_335(2, 0);
	}
	if (iParam0 != 1)
	{
		set_ped_population_budget(3);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		set_wanted_level_multiplier(0f);
		set_max_wanted_level(0);
		_0xDC0F817884CDD856(5, false);
		_0xDC0F817884CDD856(3, false);
		set_create_random_cops(false);
	}
	else
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		_0xDC0F817884CDD856(5, true);
		_0xDC0F817884CDD856(3, true);
		set_create_random_cops(true);
	}
	iVar13 = 0;
	if (iParam0 >= 4)
	{
		iVar13 = 1;
	}
	if (func_334(iParam0))
	{
		func_266(iParam0, func_333(iParam0), iVar13, 0, 0, 1);
		if (iParam0 != 0 && !iParam1)
		{
			iLocal_1761 = 0;
		}
	}
	if (iParam1)
	{
		while (is_screen_fading_out())
		{
			wait(0);
		}
		if (!iLocal_1694)
		{
			if (func_695())
			{
				if (func_265())
				{
					switch (iParam0)
					{
						case 4:
							iVar14 = iLocal_1367[0];
							break;
					}
					iVar15 = 1;
					iVar16 = -1;
					func_263(iVar14, iVar16, iVar15);
					iLocal_1694 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 0:
				if (!iLocal_1471)
				{
					func_261();
					func_260();
					func_258();
				}
				break;
			
			case 1:
				set_ped_stealth_movement(player_ped_id(), 0, 0);
				if (get_follow_ped_cam_view_mode() != 4)
				{
					force_ped_motion_state(player_ped_id(), -1115154469, false, 1, 0);
					set_ped_min_move_blend_ratio(player_ped_id(), 3f);
				}
				else
				{
					force_ped_motion_state(player_ped_id(), 1063765679, false, 1, 0);
					simulate_player_input_gait(player_id(), 3f, 2000, 0, 1, 0);
				}
				break;
			
			case 2:
				if (get_follow_ped_cam_view_mode() != 4)
				{
					force_ped_motion_state(player_ped_id(), -1115154469, true, 1, 0);
				}
				else
				{
					force_ped_motion_state(player_ped_id(), 1063765679, true, 1, 0);
				}
				if (!is_ped_injured(iLocal_1353))
				{
					force_ped_motion_state(iLocal_1353, -1115154469, true, 1, 0);
					set_ped_min_move_blend_ratio(iLocal_1353, 3f);
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 2:
			if (get_follow_ped_cam_view_mode() != 4)
			{
				set_ped_min_move_blend_ratio(player_ped_id(), 2f);
			}
			else
			{
				simulate_player_input_gait(player_id(), 2f, 2000, 0, 1, 0);
			}
			break;
	}
	if (iParam0 != 2)
	{
		iLocal_1767 = get_game_timer() + get_random_int_in_range(1500, 3000);
	}
	else
	{
		iLocal_1767 = get_game_timer() + 300;
	}
	iLocal_1768 = get_game_timer();
	iLocal_1107 = iParam0;
}

void func_258()
{
	if (!is_ped_injured(iLocal_1353))
	{
		set_entity_heading(iLocal_1353, 91.93f);
		force_ped_motion_state(iLocal_1353, -668482597, false, 1, 0);
		set_ped_min_move_blend_ratio(iLocal_1353, 1f);
		func_259();
	}
}

void func_259()
{
	task_goto_entity_offset_xy(iLocal_1353, iLocal_1352, -1, 0.2f, -0.8f, 3f, 1.25f, 1);
}

void func_260()
{
	if (!is_ped_injured(player_ped_id()))
	{
		set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		set_ped_stealth_movement(player_ped_id(), 0, 0);
		if (get_follow_ped_cam_view_mode() != 4)
		{
			force_ped_motion_state(player_ped_id(), -668482597, false, 1, 0);
			set_ped_min_move_blend_ratio(player_ped_id(), 1f);
		}
		else
		{
			force_ped_motion_state(player_ped_id(), 1063765679, false, 1, 0);
			simulate_player_input_gait(player_id(), 1f, 2000, 0, 1, 0);
		}
	}
}

void func_261()
{
	if (!is_ped_injured(iLocal_1352))
	{
		iLocal_1389 = func_231(iLocal_1352, 0, 145);
		set_entity_heading(iLocal_1352, 95.7f);
		func_262();
		force_ped_motion_state(iLocal_1352, -668482597, false, 1, 0);
		set_ped_min_move_blend_ratio(iLocal_1352, 1f);
	}
}

void func_262()
{
	int iVar0;
	
	waypoint_recording_get_closest_waypoint("hood6", get_entity_coords(iLocal_1352, 1), &iVar0);
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	task_follow_waypoint_recording(iLocal_1352, "hood6", iVar0 + 1, 517, -1);
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	if (func_695() && func_265())
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
		func_264(0);
	}
}

void func_264(int iParam0)
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

int func_265()
{
	return is_bit_set(Global_91278.f_20, 13);
}

void func_266(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[8] cVar3;
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!are_strings_equal("FinaleC2", get_this_script_name()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91315)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91315)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_332(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_330(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_328(iVar1);
			cVar3 = {Global_82399[iVar1 /*34*/].f_8};
			if (iVar1 == 90)
			{
				switch (Global_101154.f_7775.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			playstats_mission_checkpoint(&cVar3, iVar2, Global_91315, iParam0);
		}
		else
		{
			iVar5 = func_323(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_322(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_321(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_267(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_267(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_268(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_268(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_214();
	*uParam0.f_1 = func_310();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!is_ped_injured(player_ped_id()))
	{
		func_298(uParam0.f_2305, 0);
		func_297(player_ped_id());
		func_291(player_ped_id(), 0);
		get_current_ped_weapon(player_ped_id(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_290())
		{
			func_286(player_ped_id(), uParam0.f_616[iVar1 /*65*/], 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				*(uParam0.f_616[iVar1 /*65*/])[iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			*(uParam0.f_616[iVar1 /*65*/]).f_59 = Global_91068[iVar1 /*65*/].f_59;
			*(uParam0.f_616[iVar1 /*65*/]).f_60 = Global_91068[iVar1 /*65*/].f_60;
			*(uParam0.f_616[iVar1 /*65*/]).f_61 = Global_91068[iVar1 /*65*/].f_61;
			*(uParam0.f_616[iVar1 /*65*/]).f_62 = Global_91068[iVar1 /*65*/].f_62;
			*(uParam0.f_616[iVar1 /*65*/]).f_63 = Global_91068[iVar1 /*65*/].f_63;
			*(uParam0.f_616[iVar1 /*65*/]).f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				stat_get_int(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				stat_get_int(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				stat_get_int(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
		}
		*uParam0.f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		*uParam0.f_13[iVar1] = Global_52923[iVar1];
		*(uParam0.f_25[0 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		*(uParam0.f_25[1 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stat_get_int(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	stat_get_int(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	stat_get_int(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_270(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_269(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_269(var uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_270(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		*uParam1.f_5 = func_216(iParam2);
	}
	if (func_283(iParam2, &iVar0, iParam3, iParam5))
	{
		func_271(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
			{
				func_271(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_271(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_273(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_272(iParam2))
		{
			*uParam1.f_3 = 1;
		}
		else
		{
			*uParam1.f_3 = 0;
		}
		return true;
	}
	return false;
}

bool func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_273(var uParam0, int iParam1, int iParam2)
{
	func_279(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_276(iParam1, 145, 0);
	*uParam0.f_11 = func_275(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_274(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = {get_entity_coords(iParam1, 1)};
		*uParam0.f_6 = get_entity_heading(iParam1);
		*uParam0.f_3 = {get_entity_velocity(iParam1)};
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			*uParam0.f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_275(int iParam0)
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

bool func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || get_entity_model(iParam0) == func_277(iParam1, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_277(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_37(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_278(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_278(int iParam0, var uParam1, int iParam2)
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

void func_279(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_282(uParam1);
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
		func_281(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_280(iVar0 + 1));
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

int func_280(int iParam0)
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

bool func_281(int iParam0, var uParam1, var uParam2)
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

void func_282(var uParam0)
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

bool func_283(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam0 == player_ped_id())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (does_entity_exist(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, 0))
				{
					if (iParam2 == 0 || get_distance_between_coords(get_entity_coords(*uParam1, 1), get_entity_coords(iParam0, 1), 1) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1) != 0)
							{
								return false;
							}
						}
						if (func_284(*uParam1, func_214(), 1))
						{
							sVar0 = get_this_script_name();
							if (!are_strings_equal(sVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!is_ped_in_any_vehicle(iParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_284(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &uVar9))
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

bool func_285(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_286(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_216(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_289(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_288(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_37(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			if (func_287(161, -1))
			{
				*uParam1.f_59 = func_112(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_112(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_112(746, Global_69309, 0);
			*uParam1.f_61 = func_112(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_287(161, -1))
			{
				*uParam1.f_59 = func_112(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_112(745, Global_69309, 0);
			}
		}
	}
}

int func_287(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_113(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_288(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && _0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_289(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

var func_290()
{
	func_215();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_292(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= 8 - 1)
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (iParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_292(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_296(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_296(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_294(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_294(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_293(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						set_bit(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								set_bit(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_293(int iParam0)
{
	if (network_is_game_in_progress())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_294(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_295(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_295(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_298(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(player_ped_id(), 1)};
	*uParam0.f_3 = get_entity_heading(player_ped_id());
	*uParam0.f_5 = get_ped_parachute_state(player_ped_id());
	if (is_player_playing(player_id()))
	{
		*uParam0.f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		*uParam0.f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		*uParam0.f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		*uParam0.f_3 = 353.8757f;
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		*uParam0.f_3 = 203.6746f;
	}
	else if (is_bit_set(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (is_bit_set(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (is_bit_set(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (is_bit_set(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		*uParam0.f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		*uParam0.f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		*uParam0.f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		*uParam0.f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_302(&iVar0))
		{
			if (func_300(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_214();
			if (iVar5 == 0)
			{
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				*uParam0.f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				*uParam0.f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				*uParam0.f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_299(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_299(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_are_coords_colliding_with_exterior(vParam0))
	{
		iVar0 = get_interior_at_coords_with_type(vParam4, sParam3);
		if (!is_valid_interior(iVar0))
		{
			return false;
		}
		iVar1 = get_interior_from_collision(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_300(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-829.842f, -191.7454f, 36.4386f};
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = {129.8484f, -1716.528f, 28.0702f};
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = {1938.028f, 3718.736f, 31.3154f};
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = {1197.866f, -469.3809f, 65.0885f};
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = {99.2876f, -1395.16f, 28.2759f};
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = {1679.445f, 4819.056f, 41.0035f};
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = {411.3063f, -809.1863f, 28.1554f};
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = {1194.163f, 2695.644f, 36.9225f};
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = {623.1845f, 2739.191f, 40.9588f};
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = {130.9555f, -198.2084f, 53.41f};
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = {325.6833f, 164.3263f, 102.4425f};
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = {1858.774f, 3742.393f, 32.0779f};
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = {-1161.596f, -1417.7f, 3.712f};
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = {1308.952f, -1660.611f, 50.2362f};
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = {28.423f, -1110.814f, 28.2848f};
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = {1704.966f, 3749.709f, 33.0188f};
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = {223.949f, -38.7894f, 68.6483f};
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = {837.7854f, -1017.963f, 26.3045f};
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = {2562.882f, 312.8641f, 107.4612f};
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = {822.48f, -2142.875f, 27.8496f};
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = {717.8107f, -1084.081f, 21.3094f};
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = {117.8835f, 6599.415f, 31.0134f};
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = {1201.709f, 2664.813f, 36.8102f};
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = {-200.1521f, -1297.502f, 30.296f};
			*uParam2 = 269.0687f;
			break;
	}
	return !func_301(*uParam1, 0f, 0f, 0f, 0);
}

int func_301(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_302(var uParam0)
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (func_309())
		{
			*uParam0 = func_305(get_entity_coords(player_ped_id(), 0), 5, -1, 0, 1, -1);
			if (func_304(*uParam0) && !func_303(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_303(int iParam0)
{
	return func_252(iParam0, 0, 1);
}

int func_304(int iParam0)
{
	return func_252(iParam0, 5, 1);
}

int func_305(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_308(iVar0))
		{
			if (!iParam5 || func_307(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_306(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (iParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_307(int iParam0)
{
	return func_252(iParam0, 0, 0);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_309()
{
	return Global_91330.f_296 > 0;
}

var func_310()
{
	var uVar0;
	
	func_320(&uVar0, get_clock_seconds());
	func_319(&uVar0, get_clock_minutes());
	func_318(&uVar0, get_clock_hours());
	func_313(&uVar0, get_clock_day_of_month());
	func_312(&uVar0, get_clock_month());
	func_311(&uVar0, get_clock_year());
	return uVar0;
}

void func_311(var uParam0, int iParam1)
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

void func_312(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_313(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_317(*uParam0);
	iVar1 = func_315(*uParam0);
	if (iParam1 < 1 || iParam1 > func_314(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_314(int iParam0, int iParam1)
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

var func_315(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_316(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_317(int iParam0)
{
	return (iParam0 && 15);
}

void func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_319(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_320(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_321(char* sParam0)
{
	if (are_strings_equal("BailBond1", sParam0))
	{
		return 0;
	}
	else if (are_strings_equal("BailBond2", sParam0))
	{
		return 1;
	}
	else if (are_strings_equal("BailBond3", sParam0))
	{
		return 2;
	}
	else if (are_strings_equal("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_322(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

int func_323(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_324(iVar0, &sVar1);
		if (get_hash_key(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_324(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_325(uParam1, "Abigail1", func_327(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 1:
			func_325(uParam1, "Abigail2", func_327(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 2:
			func_325(uParam1, "Barry1", func_327(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 3:
			func_325(uParam1, "Barry2", func_327(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 4:
			func_325(uParam1, "Barry3", func_327(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 5:
			func_325(uParam1, "Barry3A", func_327(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 6:
			func_325(uParam1, "Barry3C", func_327(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 7:
			func_325(uParam1, "Barry4", func_327(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_326(iParam0), 0, 0);
			break;
		
		case 8:
			func_325(uParam1, "Dreyfuss1", func_327(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 9:
			func_325(uParam1, "Epsilon1", func_327(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 10:
			func_325(uParam1, "Epsilon2", func_327(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 11:
			func_325(uParam1, "Epsilon3", func_327(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 12:
			func_325(uParam1, "Epsilon4", func_327(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 13:
			func_325(uParam1, "Epsilon5", func_327(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 14:
			func_325(uParam1, "Epsilon6", func_327(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 15:
			func_325(uParam1, "Epsilon7", func_327(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 16:
			func_325(uParam1, "Epsilon8", func_327(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 17:
			func_325(uParam1, "Extreme1", func_327(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 18:
			func_325(uParam1, "Extreme2", func_327(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 19:
			func_325(uParam1, "Extreme3", func_327(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 20:
			func_325(uParam1, "Extreme4", func_327(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 21:
			func_325(uParam1, "Fanatic1", func_327(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_326(iParam0), 1, 0);
			break;
		
		case 22:
			func_325(uParam1, "Fanatic2", func_327(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_326(iParam0), 1, 0);
			break;
		
		case 23:
			func_325(uParam1, "Fanatic3", func_327(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_326(iParam0), 0, 1);
			break;
		
		case 24:
			func_325(uParam1, "Hao1", func_327(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_326(iParam0), 0, 1);
			break;
		
		case 25:
			func_325(uParam1, "Hunting1", func_327(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 26:
			func_325(uParam1, "Hunting2", func_327(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 27:
			func_325(uParam1, "Josh1", func_327(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 28:
			func_325(uParam1, "Josh2", func_327(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 29:
			func_325(uParam1, "Josh3", func_327(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 30:
			func_325(uParam1, "Josh4", func_327(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 31:
			func_325(uParam1, "Maude1", func_327(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 32:
			func_325(uParam1, "Minute1", func_327(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 33:
			func_325(uParam1, "Minute2", func_327(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 34:
			func_325(uParam1, "Minute3", func_327(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 35:
			func_325(uParam1, "MrsPhilips1", func_327(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 36:
			func_325(uParam1, "MrsPhilips2", func_327(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 37:
			func_325(uParam1, "Nigel1", func_327(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 38:
			func_325(uParam1, "Nigel1A", func_327(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 39:
			func_325(uParam1, "Nigel1B", func_327(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_326(iParam0), 1, 1);
			break;
		
		case 40:
			func_325(uParam1, "Nigel1C", func_327(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_326(iParam0), 1, 1);
			break;
		
		case 41:
			func_325(uParam1, "Nigel1D", func_327(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_326(iParam0), 1, 1);
			break;
		
		case 42:
			func_325(uParam1, "Nigel2", func_327(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 43:
			func_325(uParam1, "Nigel3", func_327(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_326(iParam0), 1, 1);
			break;
		
		case 44:
			func_325(uParam1, "Omega1", func_327(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 45:
			func_325(uParam1, "Omega2", func_327(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 46:
			func_325(uParam1, "Paparazzo1", func_327(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 47:
			func_325(uParam1, "Paparazzo2", func_327(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 48:
			func_325(uParam1, "Paparazzo3", func_327(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 49:
			func_325(uParam1, "Paparazzo3A", func_327(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 50:
			func_325(uParam1, "Paparazzo3B", func_327(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 51:
			func_325(uParam1, "Paparazzo4", func_327(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 52:
			func_325(uParam1, "Rampage1", func_327(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 54:
			func_325(uParam1, "Rampage3", func_327(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 55:
			func_325(uParam1, "Rampage4", func_327(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 56:
			func_325(uParam1, "Rampage5", func_327(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_326(iParam0), 0, 0);
			break;
		
		case 53:
			func_325(uParam1, "Rampage2", func_327(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_326(iParam0), 1, 0);
			break;
		
		case 57:
			func_325(uParam1, "TheLastOne", func_327(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 58:
			func_325(uParam1, "Tonya1", func_327(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 59:
			func_325(uParam1, "Tonya2", func_327(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 60:
			func_325(uParam1, "Tonya3", func_327(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 61:
			func_325(uParam1, "Tonya4", func_327(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		case 62:
			func_325(uParam1, "Tonya5", func_327(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_326(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_325(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_327(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_322(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_329(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_329(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_329(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_329(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_329(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_330(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_331(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82399[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1)
	{
	}
	return -1;
}

void func_332(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

char* func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Get to Vinewood";
			break;
		
		case 1:
			return "Van chase";
			break;
		
		case 2:
			return "Foot chase";
			break;
		
		case 3:
			return "Find hiding bad guy";
			break;
		
		case 4:
			return "Drop off gangster";
			break;
	}
	return "invalid";
}

bool func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
			break;
	}
	return false;
}

void func_335(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&Global_25364, iParam0);
	}
	else
	{
		clear_bit(&Global_25364, iParam0);
	}
}

void func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_247(iVar0, iParam0);
		iVar0++;
	}
}

void func_337(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	float fVar5;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 18;
			vVar1 = {526.88f, -534.26f, 24.12f};
			iVar4 = 0;
			fVar5 = 0f;
			break;
		
		case 1:
			iVar0 = 19;
			if (iParam1 == 2)
			{
				vVar1 = {543.18f, -579.82f, 25.41f};
				fVar5 = 0f;
			}
			else
			{
				vVar1 = {538.92f, -615f, 24.22f};
				fVar5 = 2.67f;
			}
			iVar4 = 1;
			break;
		
		case 2:
			iVar0 = 20;
			iVar4 = 1;
			if (iParam1 == 2)
			{
				if (iParam2)
				{
					vVar1 = {547.8f, -608.82f, 24.9f};
					fVar5 = 8f;
				}
				else
				{
					vVar1 = {532.1f, -741.2f, 24f};
					fVar5 = 0f;
				}
			}
			else
			{
				vVar1 = {556.5f, -530.7f, 24.2f};
				fVar5 = 5.5f;
			}
			break;
	}
	iLocal_1378[iParam0] = create_mission_train(iVar0, vVar1, iVar4);
	set_train_cruise_speed(iLocal_1378[iParam0], fVar5);
	set_train_speed(iLocal_1378[iParam0], fVar5);
	if (iParam1 == 2)
	{
		func_338(1, iParam0, 1, 1);
	}
	fLocal_1756[iParam0] = fVar5;
	switch (iParam0)
	{
		case 1:
			set_vehicle_extra(get_train_carriage(iLocal_1378[iParam0], 1), 1, true);
			set_vehicle_extra(get_train_carriage(iLocal_1378[iParam0], 2), 1, false);
			break;
		
		case 2:
			set_vehicle_colour_combination(get_train_carriage(iLocal_1378[iParam0], 1), 3);
			set_vehicle_colour_combination(get_train_carriage(iLocal_1378[iParam0], 2), 1);
			set_vehicle_colour_combination(get_train_carriage(iLocal_1378[iParam0], 3), 2);
			break;
	}
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0)
	{
		iVar0 = iLocal_1378[iParam1];
		iVar1 = iParam1 + 7;
	}
	else
	{
		iVar0 = iLocal_1370[iParam1];
		iVar1 = iParam1;
	}
	if (is_vehicle_driveable(iVar0, 0))
	{
		iVar2 = iParam3;
		if (!does_entity_exist(iLocal_1356[iVar1]))
		{
			if (!iVar2)
			{
				if (can_create_random_driver())
				{
					iLocal_1356[iVar1] = create_random_ped_as_driver(iVar0, 1);
				}
				else
				{
					iVar2 = true;
				}
			}
			if (iVar2)
			{
				request_model(func_73(6));
				if (has_model_loaded(func_73(6)))
				{
					iLocal_1356[iVar1] = create_ped_inside_vehicle(iVar0, 26, func_73(6), -1, 1, true);
				}
			}
		}
		if (!is_ped_injured(iLocal_1356[iVar1]))
		{
			if (iParam2)
			{
				set_blocking_of_non_temporary_events(iLocal_1356[iVar1], true);
			}
			task_look_at_entity(iLocal_1356[iVar1], player_ped_id(), -1, 2048, 2);
		}
	}
}

var func_339(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_340(iParam0, iParam1);
	stat_get_int(iVar1, &uVar0, -1);
	return uVar0;
}

var func_340(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_341(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_341(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_342()
{
	iLocal_1355 = create_ped(26, func_73(4), func_80(24), 81.09f, 1, true);
	set_ped_component_variation(iLocal_1355, 3, 0, false, 0);
	set_ped_component_variation(iLocal_1355, 4, 0, true, 0);
	set_blocking_of_non_temporary_events(iLocal_1355, true);
	set_ped_keep_task(iLocal_1355, true);
	set_ped_dies_when_injured(iLocal_1355, true);
	set_ped_can_be_targetted(iLocal_1355, false);
	set_entity_proofs(iLocal_1355, false, false, false, false, false, false, 0, true);
	task_play_anim(iLocal_1355, func_199(3), "FRA_0_IG_15_FEMALE_DOG_IDLE", 8f, -8f, -1, 262153, 0, 0, 0, 0);
}

void func_343()
{
	if (is_vehicle_driveable(iLocal_1367[1], 0))
	{
		if (get_vehicle_engine_health(iLocal_1367[1]) > 300f)
		{
			set_vehicle_engine_health(iLocal_1367[1], 300f);
		}
		iLocal_1633 = true;
	}
}

void func_344()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	Vector3 fVar5;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		vVar2 = {func_708(iVar0)};
		fVar5 = func_346(iVar0);
		Local_1236[iVar0 /*12*/] = create_object(func_73(22), vVar2, 1, true, false);
		set_entity_coords_no_offset(Local_1236[iVar0 /*12*/], vVar2, 0, 0, 1);
		set_entity_heading(Local_1236[iVar0 /*12*/], fVar5);
		set_entity_collision(Local_1236[iVar0 /*12*/], false, 0);
		set_entity_visible(Local_1236[iVar0 /*12*/], false, 0);
		freeze_entity_position(Local_1236[iVar0 /*12*/], true);
		Local_1236[iVar0 /*12*/].f_2 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 0;
			Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/].f_3 = 0.0348647f;
			Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/] = create_object(func_73(18), vVar2, 1, true, false);
			func_707(iVar0, iVar1);
			if (!(iVar0 == 2 && iVar1 == 0))
			{
				Local_1236[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1 = create_object(func_73(19), vVar2, 1, true, false);
				func_345(iVar0, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_345(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = {547.6336f, -625.1866f, 25.0932f};
				vVar3 = {0f, 0f, -97f};
			}
			else
			{
				vVar0 = {550.2516f, -628.7438f, 25.1332f};
				vVar3 = {0f, 0f, 83f};
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				vVar0 = {545.6388f, -641.4614f, 25.0902f};
				vVar3 = {0f, 0f, -97f};
			}
			else
			{
				vVar0 = {548.2568f, -645.0185f, 25.0932f};
				vVar3 = {0f, 0f, 83f};
			}
			break;
		
		case 2:
			vVar0 = {528.0478f, -680.6921f, 25.1482f};
			vVar3 = {0f, 0f, 83.36f};
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				vVar0 = {523.6058f, -693.3036f, 25.1182f};
				vVar3 = {0f, 0f, -96f};
			}
			else
			{
				vVar0 = {526.2855f, -696.8145f, 25.1382f};
				vVar3 = {0f, 0f, 84f};
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				vVar0 = {517.8303f, -704.0568f, 25.1782f};
				vVar3 = {0f, 0f, -95.66f};
			}
			else
			{
				vVar0 = {520.5307f, -707.5518f, 25.1332f};
				vVar3 = {0f, 0f, 84.34f};
			}
			break;
	}
	set_entity_coords_no_offset(Local_1236[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, vVar0, 0, 0, 1);
	set_entity_rotation(Local_1236[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, vVar3, 2, 1);
	freeze_entity_position(Local_1236[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, true);
}

float func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 83f;
			break;
		
		case 1:
			return 83f;
			break;
		
		case 2:
			return 83.36f;
			break;
		
		case 3:
			return 84f;
			break;
		
		case 4:
			return 84.34f;
			break;
	}
	return 0f;
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	Vector3 fVar6;
	Vector3 fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar10 = true;
		iVar11 = 0;
		iVar12 = false;
		iVar9 = 0;
		vVar3 = {IntToFloat(iVar0 * 20), IntToFloat(iVar0 * 10), -10f};
		fVar6 = 0f;
		iVar1 = false;
		iVar2 = -1;
		fVar7 = 0f;
		fVar8 = 1f;
		switch (iVar0)
		{
			case 0:
				vVar3 = {491.43f, -537.62f, 23.75f};
				fVar6 = -92.24f;
				iVar2 = 2;
				iVar12 = true;
				iVar13 = 9;
				iVar11 = 1;
				break;
			
			case 1:
				iVar1 = 11;
				iVar2 = 2;
				iVar13 = 10;
				fVar8 = 0.7f;
				break;
			
			case 2:
				vVar3 = {451.5f, -681.2f, 28.1f};
				fVar6 = -95.1f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 3:
				vVar3 = {488.74f, -541.46f, 23.75f};
				fVar6 = 85.92f;
				iVar2 = 1;
				iVar13 = 10;
				iVar10 = false;
				break;
			
			case 4:
				iVar1 = true;
				fVar7 = 700f;
				fVar8 = 0.8f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 5:
				iVar12 = true;
				vVar3 = {464.37f, -651.16f, 28.06f};
				fVar6 = 173f;
				iVar2 = 0;
				iVar13 = 11;
				iVar11 = 1;
				break;
			
			case 6:
				iVar1 = 12;
				iVar2 = 1;
				iVar13 = 11;
				iVar10 = false;
				break;
		}
		if (iVar0 != 2 || iParam0)
		{
			if ((iVar13 == 11 && iParam3) || (iVar13 != 11 && iParam2))
			{
				if (!does_entity_exist(iLocal_1370[iVar0]))
				{
					iLocal_1370[iVar0] = create_vehicle(func_73(iVar13), vVar3, fVar6, 1, 1);
					iVar9 = 1;
				}
			}
		}
		if (is_vehicle_driveable(iLocal_1370[iVar0], 0) && iVar9)
		{
			if (iVar10)
			{
				func_338(0, iVar0, 1, iVar11);
			}
			if (iVar2 >= 0)
			{
				set_vehicle_colour_combination(iLocal_1370[iVar0], iVar2);
			}
			if (iVar0 == 4)
			{
				_0x153973AB99FE8980(iLocal_1370[iVar0], "FRANKLIN_0_Reversing_Bus", 0f);
			}
			_0x3910051CCECDB00C(iLocal_1370[iVar0], true);
			set_vehicle_doors_locked(iLocal_1370[iVar0], 3);
			if (iVar1 > 0 && !iVar12)
			{
				start_playback_recorded_vehicle(iLocal_1370[iVar0], iVar1, func_349(), 1);
				skip_time_in_playback_recorded_vehicle(iLocal_1370[iVar0], fVar7);
				set_playback_speed(iLocal_1370[iVar0], fVar8);
				_0x1F2E4E06DEA8992B(iLocal_1370[iVar0], 1);
				pause_playback_recorded_vehicle(iLocal_1370[iVar0]);
			}
			else
			{
				set_vehicle_on_ground_properly(iLocal_1370[iVar0]);
				if (iVar10)
				{
					iVar14 = get_ped_in_vehicle_seat(iLocal_1370[iVar0], -1);
					if (!is_ped_injured(iVar14))
					{
						switch (iVar0)
						{
							case 2:
								task_vehicle_temp_action(iVar14, iLocal_1370[iVar0], 24, 20000);
								break;
							
							default:
								if (!iVar12)
								{
									task_vehicle_drive_wander(iVar14, iLocal_1370[iVar0], 2.5f, 786603);
								}
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
	if (iParam1)
	{
		func_348();
	}
	if (iParam4)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar15 = 0;
			iVar16 = iVar0;
			if (iVar16 != 1 && iVar16 != 2)
			{
				switch (iVar16)
				{
					case 0:
						vVar3 = {459.48f, -618.58f, 27.51f};
						fVar6 = 168.82f;
						iVar15 = 1;
						break;
					
					case 1:
						vVar3 = {466.44f, -630.26f, 27.51f};
						fVar6 = 61.25f;
						break;
					
					case 2:
						vVar3 = {464.38f, -629.01f, 27.51f};
						fVar6 = 240.21f;
						break;
					
					case 3:
						vVar3 = {471.04f, -591.71f, 27.51f};
						fVar6 = -27f;
						iVar15 = 1;
						break;
					
					case 4:
						vVar3 = {525.01f, -475.66f, 23.73f};
						fVar6 = 173.22f;
						iVar15 = 1;
						break;
					
					case 5:
						vVar3 = {515.01f, -512.17f, 23.75f};
						fVar6 = -4.39f;
						iVar15 = 1;
						break;
				}
				iVar17 = iVar15;
				if (!iVar17)
				{
					if (can_create_random_ped(0))
					{
						Local_1205[iVar0 /*5*/] = create_random_ped(vVar3);
						set_entity_heading(Local_1205[iVar0 /*5*/], fVar6);
					}
					else
					{
						iVar17 = true;
					}
				}
				if (iVar17)
				{
					Local_1205[iVar0 /*5*/] = create_ped(26, func_73(6), vVar3, fVar6, 1, true);
				}
				if (!is_ped_injured(Local_1205[iVar0 /*5*/]))
				{
					set_blocking_of_non_temporary_events(Local_1205[iVar0 /*5*/], true);
					set_ped_keep_task(Local_1205[iVar0 /*5*/], true);
				}
				Local_1205[iVar0 /*5*/].f_4 = 0;
			}
			iVar0++;
		}
	}
}

void func_348()
{
	func_337(0, 2, 0);
	func_337(1, 2, 0);
	func_337(2, 2, 0);
}

char* func_349()
{
	return "fchase";
}

void func_350(var uParam0)
{
	if (!does_cam_exist(*uParam0.f_4))
	{
		*uParam0.f_4 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
		if (*uParam0.f_12 != -1)
		{
			if (!has_sound_finished(*uParam0.f_12))
			{
				stop_sound(*uParam0.f_12);
			}
			release_sound_id(*uParam0.f_12);
			*uParam0.f_12 = -1;
		}
		*uParam0.f_12 = get_sound_id();
		*uParam0.f_10 = 0;
		*uParam0.f_11 = get_random_int_in_range(false, 3);
		func_351(uParam0);
	}
}

void func_351(var uParam0)
{
	if (!is_ped_injured(*uParam0.f_3))
	{
		*uParam0.f_6 = -0.15f;
		*uParam0.f_7 = 0.05f;
		attach_cam_to_ped_bone(*uParam0.f_4, *uParam0.f_3, 31086, 0f, *uParam0.f_6, *uParam0.f_7, 1);
		set_cam_near_clip(*uParam0.f_4, 0.101f);
		point_cam_at_entity(*uParam0.f_4, *uParam0.f_3, 0f, 10f, *uParam0.f_7, 1);
		set_cam_fov(*uParam0.f_4, 96.76f);
		set_cam_dof_planes(*uParam0.f_4, 0f, 0f, 100000f, 100000f);
	}
}

void func_352()
{
	clear_area(466f, -579f, 28f, 5f, 1, 0, 0, false);
	remove_vehicles_from_generators_in_area(461f, -584f, 23f, 471f, -574f, 33f, 0);
	clear_area(512f, -509f, 25f, 5f, 1, 0, 0, false);
	remove_vehicles_from_generators_in_area(507f, -514f, 20f, 517f, -504f, 30f, 0);
}

void func_353()
{
	int iVar0;
	
	iLocal_1183 = 0;
	iLocal_1184 = 0;
	iLocal_1204 = 0;
	Local_1159.f_1 = 0;
	Local_1159.f_2 = -1;
	Local_1159.f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_1527[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1535[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_1205[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1539[iVar0] = 0;
		iVar0++;
	}
	iLocal_1798 = 0;
	iLocal_1525 = 0;
	iLocal_1543 = 0;
	iLocal_1544 = 0;
	iLocal_1334 = 0;
}

void func_354()
{
	if (is_vehicle_driveable(iLocal_1367[1], 0))
	{
		if (is_playback_going_on_for_vehicle(iLocal_1367[1]))
		{
			stop_playback_recorded_vehicle(iLocal_1367[1]);
		}
		set_vehicle_engine_on(iLocal_1367[1], true, 1, 0);
		start_playback_recorded_vehicle(iLocal_1367[1], true, func_362(), 1);
		skip_time_in_playback_recorded_vehicle(iLocal_1367[1], 6500f);
		_0x1F2E4E06DEA8992B(iLocal_1367[1], 1);
	}
}

void func_355()
{
	iLocal_54 = 1;
}

void func_356()
{
	vLocal_686[0 /*3*/] = {370.608f, 148.292f, 102.507f};
	fLocal_74[0] = -0.006632f;
	fLocal_126[0] = 0.014155f;
	fLocal_178[0] = -0.182076f;
	fLocal_230[0] = 0.98316f;
	iLocal_463[0] = 3;
	fLocal_282[0] = 6300f;
	iLocal_934[0] = joaat("emperor");
	vLocal_686[1 /*3*/] = {331.042f, 319.164f, 104.564f};
	fLocal_74[1] = 0.00314f;
	fLocal_126[1] = -0.035098f;
	fLocal_178[1] = 0.793992f;
	fLocal_230[1] = -0.606906f;
	iLocal_463[1] = 6;
	fLocal_282[1] = 6900f;
	iLocal_934[1] = joaat("emperor");
	vLocal_686[2 /*3*/] = {354.004f, 101.885f, 101.654f};
	fLocal_74[2] = 0.074331f;
	fLocal_126[2] = 0.014374f;
	fLocal_178[2] = -0.163023f;
	fLocal_230[2] = 0.983713f;
	iLocal_463[2] = 5;
	fLocal_282[2] = 9000f;
	iLocal_934[2] = joaat("surfer");
	vLocal_686[3 /*3*/] = {338.717f, 94.4636f, 99.6961f};
	fLocal_74[3] = -0.047298f;
	fLocal_126[3] = -0.086009f;
	fLocal_178[3] = 0.979703f;
	fLocal_230[3] = 0.174778f;
	iLocal_463[3] = 4;
	fLocal_282[3] = 10800f;
	iLocal_934[3] = joaat("surfer");
	vLocal_686[6 /*3*/] = {289.1492f, -78.19f, 69.8117f};
	fLocal_74[6] = -0.0056f;
	fLocal_126[6] = 0.0028f;
	fLocal_178[6] = -0.1669f;
	fLocal_230[6] = 0.986f;
	iLocal_463[6] = 9;
	fLocal_282[6] = 22029f;
	iLocal_934[6] = joaat("surge");
	vLocal_686[7 /*3*/] = {277.135f, -76.6118f, 69.5846f};
	fLocal_74[7] = -0.018861f;
	fLocal_126[7] = -8.8E-05f;
	fLocal_178[7] = 0.983353f;
	fLocal_230[7] = 0.180722f;
	iLocal_463[7] = 10;
	fLocal_282[7] = 22491f;
	iLocal_934[7] = joaat("emperor");
	vLocal_686[8 /*3*/] = {290.813f, -40.5747f, 71.6218f};
	fLocal_74[8] = -0.031225f;
	fLocal_126[8] = -0.06827f;
	fLocal_178[8] = 0.98142f;
	fLocal_230[8] = 0.176577f;
	iLocal_463[8] = 8;
	fLocal_282[8] = 22577f;
	iLocal_934[8] = joaat("picador");
	vLocal_686[9 /*3*/] = {283.2936f, -92.4837f, 69.7937f};
	fLocal_74[9] = -0.0028f;
	fLocal_126[9] = 0.0039f;
	fLocal_178[9] = -0.2089f;
	fLocal_230[9] = 0.9779f;
	iLocal_463[9] = 11;
	fLocal_282[9] = 22100f;
	iLocal_934[9] = joaat("picador");
	vLocal_686[10 /*3*/] = {260.135f, -121.876f, 67.5997f};
	fLocal_74[10] = -0.03257f;
	fLocal_126[10] = -0.065471f;
	fLocal_178[10] = 0.982638f;
	fLocal_230[10] = 0.170511f;
	iLocal_463[10] = 12;
	fLocal_282[10] = 22200f;
	iLocal_934[10] = joaat("dominator");
	vLocal_686[11 /*3*/] = {181.29f, -208.808f, 53.4241f};
	fLocal_74[11] = 0.000229f;
	fLocal_126[11] = -0.000583f;
	fLocal_178[11] = 0.818823f;
	fLocal_230[11] = -0.574044f;
	iLocal_463[11] = 15;
	fLocal_282[11] = 25705f;
	iLocal_934[11] = joaat("dominator");
	vLocal_686[12 /*3*/] = {193.856f, -218.429f, 53.6124f};
	fLocal_74[12] = -0.019551f;
	fLocal_126[12] = -0.00641f;
	fLocal_178[12] = 0.817768f;
	fLocal_230[12] = -0.575179f;
	iLocal_463[12] = 16;
	fLocal_282[12] = 26211f;
	iLocal_934[12] = joaat("picador");
	vLocal_686[13 /*3*/] = {179.383f, -213.776f, 53.5721f};
	fLocal_74[13] = -0.00917f;
	fLocal_126[13] = -0.024153f;
	fLocal_178[13] = 0.815156f;
	fLocal_230[13] = -0.578666f;
	iLocal_463[13] = 18;
	fLocal_282[13] = 26100f;
	iLocal_934[13] = joaat("emperor");
	vLocal_686[14 /*3*/] = {250.805f, -222.757f, 53.7297f};
	fLocal_74[14] = -0.008553f;
	fLocal_126[14] = -0.006151f;
	fLocal_178[14] = 0.578679f;
	fLocal_230[14] = 0.815488f;
	iLocal_463[14] = 13;
	fLocal_282[14] = 26500f;
	iLocal_934[14] = joaat("issi2");
	vLocal_686[15 /*3*/] = {268.287f, -229.843f, 53.546f};
	fLocal_74[15] = -0.011404f;
	fLocal_126[15] = -0.006868f;
	fLocal_178[15] = 0.562785f;
	fLocal_230[15] = 0.826496f;
	iLocal_463[15] = 17;
	fLocal_282[15] = 26800f;
	iLocal_934[15] = 0;
	vLocal_686[20 /*3*/] = {184.405f, -360.884f, 43.522f};
	fLocal_74[20] = 0.028156f;
	fLocal_126[20] = -0.004063f;
	fLocal_178[20] = -0.187644f;
	fLocal_230[20] = 0.981825f;
	iLocal_463[20] = 19;
	fLocal_282[20] = 27100f;
	iLocal_934[20] = joaat("picador");
	vLocal_686[21 /*3*/] = {149.265f, -402.928f, 40.8279f};
	fLocal_74[21] = -0.016245f;
	fLocal_126[21] = -0.006338f;
	fLocal_178[21] = 0.988408f;
	fLocal_230[21] = 0.150818f;
	iLocal_463[21] = 25;
	fLocal_282[21] = 30000f;
	iLocal_934[21] = joaat("picador");
	vLocal_686[22 /*3*/] = {184.745f, -374.707f, 42.5835f};
	fLocal_74[22] = 0.023113f;
	fLocal_126[22] = 0.022802f;
	fLocal_178[22] = -0.207431f;
	fLocal_230[22] = 0.977711f;
	iLocal_463[22] = 22;
	fLocal_282[22] = 31000f;
	iLocal_934[22] = joaat("emperor");
	vLocal_686[23 /*3*/] = {142.21f, -473.939f, 42.6967f};
	fLocal_74[23] = -0.015556f;
	fLocal_126[23] = 0.005188f;
	fLocal_178[23] = -0.1636f;
	fLocal_230[23] = 0.98639f;
	iLocal_463[23] = 27;
	fLocal_282[23] = 32500f;
	iLocal_934[23] = joaat("ruiner");
	vLocal_686[24 /*3*/] = {163.8123f, -430.8667f, 40.8155f};
	fLocal_74[24] = -0.0114f;
	fLocal_126[24] = 0.0023f;
	fLocal_178[24] = -0.1527f;
	fLocal_230[24] = 0.9882f;
	iLocal_463[24] = 24;
	fLocal_282[24] = 33039f;
	iLocal_934[24] = joaat("surge");
	vLocal_686[25 /*3*/] = {141.901f, -496.677f, 42.9011f};
	fLocal_74[25] = -0.008686f;
	fLocal_126[25] = 0.008488f;
	fLocal_178[25] = -0.139259f;
	fLocal_230[25] = 0.990182f;
	iLocal_463[25] = 29;
	fLocal_282[25] = 34000f;
	iLocal_934[25] = joaat("surge");
	vLocal_686[27 /*3*/] = {151.388f, -465.998f, 41.923f};
	fLocal_74[27] = -0.035501f;
	fLocal_126[27] = 0.005991f;
	fLocal_178[27] = -0.151597f;
	fLocal_230[27] = 0.987786f;
	iLocal_463[27] = 28;
	fLocal_282[27] = 35500f;
	iLocal_934[27] = joaat("serrano");
	vLocal_686[29 /*3*/] = {126.577f, -495.934f, 42.7229f};
	fLocal_74[29] = 0.004987f;
	fLocal_126[29] = 0.000985f;
	fLocal_178[29] = 0.986378f;
	fLocal_230[29] = 0.164417f;
	iLocal_463[29] = 30;
	fLocal_282[29] = 37500f;
	iLocal_934[29] = joaat("serrano");
	vLocal_686[30 /*3*/] = {109.107f, -551.095f, 42.9767f};
	fLocal_74[30] = 0.003323f;
	fLocal_126[30] = 0.006051f;
	fLocal_178[30] = 0.985997f;
	fLocal_230[30] = 0.166621f;
	iLocal_463[30] = 34;
	fLocal_282[30] = 38300f;
	iLocal_934[30] = joaat("picador");
	vLocal_686[33 /*3*/] = {138.572f, -587.025f, 43.6916f};
	fLocal_74[33] = -0.009659f;
	fLocal_126[33] = -0.014386f;
	fLocal_178[33] = 0.824594f;
	fLocal_230[33] = -0.565459f;
	iLocal_463[33] = 35;
	fLocal_282[33] = 40500f;
	iLocal_934[33] = joaat("issi2");
	vLocal_686[34 /*3*/] = {231.514f, -688.146f, 36.2398f};
	fLocal_74[34] = 0.034012f;
	fLocal_126[34] = 0.021372f;
	fLocal_178[34] = -0.157919f;
	fLocal_230[34] = 0.986635f;
	iLocal_463[34] = 40;
	fLocal_282[34] = 44000f;
	iLocal_934[34] = joaat("dilettante");
	vLocal_686[35 /*3*/] = {244.913f, -595.018f, 42.6265f};
	fLocal_74[35] = -0.022264f;
	fLocal_126[35] = -0.018083f;
	fLocal_178[35] = 0.975585f;
	fLocal_230[35] = 0.217742f;
	iLocal_463[35] = 36;
	fLocal_282[35] = 45000f;
	iLocal_934[35] = joaat("surge");
	vLocal_686[36 /*3*/] = {232.357f, -637.287f, 39.5948f};
	fLocal_74[36] = -0.007482f;
	fLocal_126[36] = -0.045975f;
	fLocal_178[36] = 0.98294f;
	fLocal_230[36] = 0.17793f;
	iLocal_463[36] = 37;
	fLocal_282[36] = 45800f;
	iLocal_934[36] = joaat("issi2");
	vLocal_686[37 /*3*/] = {190.257f, -798.034f, 31.049f};
	fLocal_74[37] = 0.023148f;
	fLocal_126[37] = 0.011794f;
	fLocal_178[37] = -0.181103f;
	fLocal_230[37] = 0.98312f;
	iLocal_463[37] = 41;
	fLocal_282[37] = 47700f;
	iLocal_934[37] = joaat("ruiner");
	vLocal_686[38 /*3*/] = {185.226f, -799.949f, 30.9391f};
	fLocal_74[38] = 0.009881f;
	fLocal_126[38] = -0.000991f;
	fLocal_178[38] = -0.157923f;
	fLocal_230[38] = 0.987401f;
	iLocal_463[38] = 42;
	fLocal_282[38] = 47700f;
	iLocal_934[38] = joaat("issi2");
	vLocal_686[39 /*3*/] = {209.914f, -698.063f, 35.545f};
	fLocal_74[39] = -0.006113f;
	fLocal_126[39] = -0.035622f;
	fLocal_178[39] = 0.983831f;
	fLocal_230[39] = 0.175416f;
	iLocal_463[39] = 38;
	fLocal_282[39] = 49000f;
	iLocal_934[39] = joaat("surge");
	vLocal_686[40 /*3*/] = {210.827f, -712.926f, 34.6642f};
	fLocal_74[40] = -0.003782f;
	fLocal_126[40] = -0.025728f;
	fLocal_178[40] = 0.980536f;
	fLocal_230[40] = 0.194608f;
	iLocal_463[40] = 39;
	fLocal_282[40] = 49000f;
	iLocal_934[40] = joaat("dilettante");
	vLocal_686[41 /*3*/] = {178.818f, -847.36f, 30.6204f};
	fLocal_74[41] = 0.013997f;
	fLocal_126[41] = 0.004302f;
	fLocal_178[41] = -0.155335f;
	fLocal_230[41] = 0.987753f;
	iLocal_463[41] = 44;
	fLocal_282[41] = 51000f;
	iLocal_934[41] = joaat("ruiner");
	vLocal_686[42 /*3*/] = {389.96f, -854.675f, 29.5846f};
	fLocal_74[42] = 0.005696f;
	fLocal_126[42] = 0.002982f;
	fLocal_178[42] = 0.725659f;
	fLocal_230[42] = 0.688024f;
	iLocal_463[42] = 48;
	fLocal_282[42] = 51600f;
	iLocal_934[42] = joaat("hauler");
	vLocal_686[43 /*3*/] = {146.167f, -815.117f, 30.7372f};
	fLocal_74[43] = 0.000773f;
	fLocal_126[43] = -0.001176f;
	fLocal_178[43] = 0.802925f;
	fLocal_230[43] = -0.596078f;
	iLocal_463[43] = 46;
	fLocal_282[43] = 52000f;
	iLocal_934[43] = joaat("dilettante");
	vLocal_686[45 /*3*/] = {269.023f, -847.023f, 28.8521f};
	fLocal_74[45] = -0.00897f;
	fLocal_126[45] = -0.000601f;
	fLocal_178[45] = 0.549913f;
	fLocal_230[45] = 0.835174f;
	iLocal_463[45] = 45;
	fLocal_282[45] = 54500f;
	iLocal_934[45] = joaat("emperor");
	vLocal_686[46 /*3*/] = {474.185f, -848.452f, 36.2803f};
	fLocal_74[46] = -0.036736f;
	fLocal_126[46] = -0.035333f;
	fLocal_178[46] = 0.709033f;
	fLocal_230[46] = 0.703331f;
	iLocal_463[46] = 51;
	fLocal_282[46] = 56000f;
	iLocal_934[46] = joaat("dilettante");
	vLocal_686[48 /*3*/] = {338.219f, -865.494f, 28.824f};
	fLocal_74[48] = 0.015373f;
	fLocal_126[48] = 0.015142f;
	fLocal_178[48] = -0.70616f;
	fLocal_230[48] = 0.707723f;
	iLocal_463[48] = 50;
	fLocal_282[48] = 59000f;
	iLocal_934[48] = joaat("dilettante");
	vLocal_844[1 /*3*/] = {285.644f, 159.194f, 103.819f};
	fLocal_338[1] = 0.009833f;
	fLocal_354[1] = -0.014362f;
	fLocal_370[1] = 0.808141f;
	fLocal_386[1] = -0.588732f;
	iLocal_619[1] = 7;
	fLocal_402[1] = 14800f;
	fLocal_418[1] = 1f;
	iLocal_988[1] = joaat("emperor");
	vLocal_844[2 /*3*/] = {443.814f, 112.308f, 99.295f};
	fLocal_338[2] = 0.01759f;
	fLocal_354[2] = 0.011825f;
	fLocal_370[2] = 0.579222f;
	fLocal_386[2] = 0.814895f;
	iLocal_619[2] = 2;
	fLocal_402[2] = 15500f;
	fLocal_418[2] = 1f;
	iLocal_988[2] = joaat("surge");
	vLocal_844[3 /*3*/] = {265.923f, 167.687f, 104.4f};
	fLocal_338[3] = 0.011139f;
	fLocal_354[3] = -0.011657f;
	fLocal_370[3] = 0.806724f;
	fLocal_386[3] = -0.590708f;
	iLocal_619[3] = 14;
	fLocal_402[3] = 16100f;
	fLocal_418[3] = 0.9f;
	iLocal_988[3] = joaat("surge");
	vLocal_844[4 /*3*/] = {278.781f, -233.142f, 53.7075f};
	fLocal_338[4] = -0.001098f;
	fLocal_354[4] = 0.002631f;
	fLocal_370[4] = 0.574218f;
	fLocal_386[4] = 0.818697f;
	iLocal_619[4] = 20;
	fLocal_402[4] = 28500f;
	fLocal_418[4] = 0.8f;
	iLocal_988[4] = joaat("picador");
	vLocal_844[5 /*3*/] = {294.562f, -239.728f, 53.3336f};
	fLocal_338[5] = 0.006082f;
	fLocal_354[5] = 0.003727f;
	fLocal_370[5] = 0.558519f;
	fLocal_386[5] = 0.829461f;
	iLocal_619[5] = 21;
	fLocal_402[5] = 28600f;
	fLocal_418[5] = 0.8f;
	iLocal_988[5] = joaat("dominator");
	vLocal_844[6 /*3*/] = {160.448f, -202.345f, 53.9951f};
	fLocal_338[6] = 0.00611f;
	fLocal_354[6] = -0.010066f;
	fLocal_370[6] = 0.799184f;
	fLocal_386[6] = -0.600971f;
	iLocal_619[6] = 23;
	fLocal_402[6] = 28300f;
	fLocal_418[6] = 0.9f;
	iLocal_988[6] = joaat("issi2");
	vLocal_844[7 /*3*/] = {236.955f, -354.8f, 43.9326f};
	fLocal_338[7] = -0.01241f;
	fLocal_354[7] = -0.009908f;
	fLocal_370[7] = 0.575418f;
	fLocal_386[7] = 0.817706f;
	iLocal_619[7] = 26;
	fLocal_402[7] = 32500f;
	fLocal_418[7] = 0.9f;
	iLocal_988[7] = joaat("emperor");
	vLocal_844[8 /*3*/] = {243.385f, -350.767f, 44.1248f};
	fLocal_338[8] = -0.011465f;
	fLocal_354[8] = 0.013013f;
	fLocal_370[8] = 0.588918f;
	fLocal_386[8] = 0.808007f;
	iLocal_619[8] = 31;
	fLocal_402[8] = 33500f;
	fLocal_418[8] = 0.9f;
	iLocal_988[8] = joaat("ruiner");
	vLocal_844[9 /*3*/] = {113.611f, -316.672f, 45.3552f};
	fLocal_338[9] = 0.00846f;
	fLocal_354[9] = -0.018241f;
	fLocal_370[9] = 0.827523f;
	fLocal_386[9] = -0.561072f;
	iLocal_619[9] = 32;
	fLocal_402[9] = 32200f;
	fLocal_418[9] = 0.9f;
	iLocal_988[9] = joaat("surge");
	vLocal_844[10 /*3*/] = {110.55f, -592.478f, 44.2156f};
	fLocal_338[10] = -0.007297f;
	fLocal_354[10] = 0.028491f;
	fLocal_370[10] = -0.184284f;
	fLocal_386[10] = 0.982433f;
	iLocal_619[10] = 33;
	fLocal_402[10] = 33300f;
	fLocal_418[10] = 1E-07f;
	iLocal_988[10] = joaat("hauler");
	vLocal_844[11 /*3*/] = {105.86f, -590.119f, 43.7371f};
	fLocal_338[11] = -0.003333f;
	fLocal_354[11] = 0.011106f;
	fLocal_370[11] = -0.189616f;
	fLocal_386[11] = 0.98179f;
	iLocal_619[11] = 49;
	fLocal_402[11] = 33300f;
	fLocal_418[11] = 1E-07f;
	iLocal_988[11] = joaat("ruiner");
	vLocal_844[12 /*3*/] = {498.819f, -821.764f, 24.9128f};
	fLocal_338[12] = -0.006844f;
	fLocal_354[12] = 0.004888f;
	fLocal_370[12] = 0.711778f;
	fLocal_386[12] = 0.702352f;
	iLocal_619[12] = 53;
	fLocal_402[12] = 58500f;
	fLocal_418[12] = 1f;
	iLocal_988[12] = joaat("bus");
	vLocal_844[13 /*3*/] = {457.43f, -827.98f, 27.4745f};
	fLocal_338[13] = 0.00146f;
	fLocal_354[13] = -0.052743f;
	fLocal_370[13] = 0.7108f;
	fLocal_386[13] = -0.701412f;
	iLocal_619[13] = 52;
	fLocal_402[13] = 65000f;
	fLocal_418[13] = 1f;
	iLocal_988[13] = joaat("bus");
	vLocal_844[14 /*3*/] = {427.612f, -680.204f, 29.2124f};
	fLocal_338[14] = 0.009204f;
	fLocal_354[14] = 0.021699f;
	fLocal_370[14] = -0.705913f;
	fLocal_386[14] = 0.707905f;
	iLocal_619[14] = 54;
	fLocal_402[14] = 69570f;
	fLocal_418[14] = 1f;
	iLocal_988[14] = joaat("bus");
}

void func_357(int iParam0)
{
	iLocal_72 = iParam0;
}

void func_358(int iParam0)
{
	iLocal_67 = iParam0;
}

void func_359(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	
	StringCopy(&cLocal_917, sParam0, 64);
	iLocal_50 = true;
	iLocal_55 = 0;
	iLocal_669 = 0;
	iLocal_670 = 0;
	iLocal_671 = 0;
	iLocal_672 = iParam1;
	iLocal_673 = 0;
	iLocal_674 = 0;
	iLocal_675 = 0;
	iLocal_679 = 0;
	iLocal_682 = 0;
	iLocal_680 = -1;
	iLocal_681 = -1;
	iLocal_683 = 0;
	iLocal_684 = 0;
	fLocal_458 = 0f;
	fLocal_459 = 0f;
	fLocal_444 = 0f;
	iLocal_56 = 0;
	if (is_player_playing(player_id()))
	{
		vVar0 = {get_entity_coords(player_ped_id(), 1)};
		vLocal_893.x = vVar0.x - 100f;
		vLocal_893.y = vVar0.y - 100f;
		vLocal_893.z = vVar0.z - 100f;
		vLocal_896.x = vVar0.x + 100f;
		vLocal_896.y = vVar0.y + 100f;
		vLocal_896.z = vVar0.z + 100f;
		set_roads_in_area(vLocal_893, vLocal_896, false, 0);
		if (iParam2)
		{
			clear_area_of_vehicles(vVar0, 500f, 0, 0, 0, 0, false);
		}
	}
	add_relationship_group("rgh_traffic", &iLocal_933);
	func_361();
	if (iParam3)
	{
		func_336(1);
	}
	if (is_player_playing(player_id()))
	{
		set_dispatch_cops_for_player(player_id(), 0);
		set_create_random_cops(false);
	}
	func_360();
}

void func_360()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iLocal_1007[iVar0] = 0;
		vLocal_686[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_74[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_178[iVar0] = 0f;
		fLocal_230[iVar0] = 0f;
		iLocal_463[iVar0] = 0;
		fLocal_282[iVar0] = 0f;
		iLocal_515[iVar0] = 0;
		iLocal_934[iVar0] = 0;
		iLocal_567[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_1059[iVar0] = 0;
		iVar0++;
	}
	iLocal_669 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_1068[iVar0] = 0;
		vLocal_840[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_434[iVar0] = 0f;
		fLocal_436[iVar0] = 0f;
		fLocal_438[iVar0] = 0f;
		fLocal_440[iVar0] = 0f;
		iLocal_667[iVar0] = 0;
		iLocal_986[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_1086[iVar0] = 0;
		iVar0++;
	}
	iLocal_671 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_1070[iVar0] = 0;
		vLocal_844[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_338[iVar0] = 0f;
		fLocal_354[iVar0] = 0f;
		fLocal_370[iVar0] = 0f;
		fLocal_386[iVar0] = 0f;
		iLocal_619[iVar0] = 0;
		fLocal_402[iVar0] = 0f;
		iLocal_635[iVar0] = 0;
		iLocal_988[iVar0] = 0;
		iLocal_651[iVar0] = 0;
		iVar0++;
	}
	iLocal_670 = 0;
	iLocal_673 = 0;
	iLocal_676 = 0;
	iLocal_677 = 0;
	iLocal_678 = 0;
}

void func_361()
{
	set_all_vehicle_generators_active_in_area(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	set_number_of_parked_vehicles(0);
	set_garbage_trucks(0);
	set_all_low_priority_vehicle_generators_active(0);
	set_vehicle_density_multiplier_this_frame(0f);
	set_vehicle_population_budget(0);
	set_ped_population_budget(3);
}

char* func_362()
{
	return "fcuber";
}

void func_363(int iParam0)
{
	iLocal_1354 = create_ped(26, func_73(5), func_80(10), 157.24f, 1, true);
	set_blocking_of_non_temporary_events(iLocal_1354, true);
	set_ped_keep_task(iLocal_1354, true);
	set_ped_component_variation(iLocal_1354, false, 0, true, 0);
	set_ped_component_variation(iLocal_1354, 2, 2, 2, 0);
	set_ped_component_variation(iLocal_1354, 3, 0, 2, 0);
	set_ped_component_variation(iLocal_1354, 4, 1, 2, 0);
	set_ped_component_variation(iLocal_1354, 8, 0, true, 0);
	clear_all_ped_props(iLocal_1354);
	if (iParam0 == 0)
	{
		if (!is_ped_injured(Local_1159))
		{
			task_look_at_entity(iLocal_1354, Local_1159, -1, 2048, 2);
			task_look_at_entity(Local_1159, iLocal_1354, -1, 2048, 2);
		}
	}
	else
	{
		task_look_at_entity(iLocal_1354, player_ped_id(), -1, 2048, 2);
	}
}

void func_364(int iParam0)
{
	set_all_vehicle_generators_active_in_area(428.19f, -688.97f, 10f, 677.84f, -388.92f, 36f, iParam0, 1);
	set_all_vehicle_generators_active_in_area(-233f, -1505.74f, -10f, -199f, -1467f, 110f, iParam0, 1);
	set_all_vehicle_generators_active_in_area(495.9f, -652.6f, -10f, 513f, -635.9f, 110f, iParam0, 1);
}

void func_365(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				vVar1 = {271.58f, -842.98f, 16.61f};
				vVar4 = {554.26f, -619.07f, 48.8f};
				break;
			
			case 1:
				vVar1 = {365.07f, 67.98f, 75.12f};
				vVar4 = {509.2f, 151.22f, 121.17f};
				break;
			
			case 2:
				vVar1 = {-91.34664f, -1457.385f, 0.78976f};
				vVar4 = {-73.12756f, -1381.66f, 48.3357f};
				break;
			
			case 3:
				vVar1 = {454.7581f, -817.2333f, 0.7081f};
				vVar4 = {459.416f, -685.3982f, 56.66263f};
				break;
		}
		if (iParam0)
		{
			if (iParam1 || iVar0 < 3)
			{
				set_roads_in_area(vVar1, vVar4, false, 1);
			}
		}
		else
		{
			set_roads_back_to_original(vVar1, vVar4, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				vVar1 = {-76.73f, -1477.92f, 21.17f};
				vVar4 = {16.05f, -1447.28f, 59.54f};
				break;
			
			case 1:
				vVar1 = {487.24f, -670.92f, 0f};
				vVar4 = {591.02f, -527.37f, 100f};
				break;
			
			case 2:
				vVar1 = {515.81f, -729.95f, 0f};
				vVar4 = {567.66f, -647.36f, 100f};
				break;
			
			case 3:
				vVar1 = {454.7581f, -817.2333f, 0.7081f};
				vVar4 = {459.416f, -685.3982f, 56.66263f};
				break;
		}
		if (iParam0)
		{
			set_ped_paths_in_area(vVar1, vVar4, false, 0);
			if (iVar0 == 3)
			{
				set_ped_non_creation_area(vVar1, vVar4);
			}
		}
		else
		{
			set_ped_paths_back_to_original(vVar1, vVar4, 0);
			clear_ped_non_creation_area();
		}
		iVar0++;
	}
}

void func_366(int iParam0, int iParam1)
{
	vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	
	if (!does_entity_exist(iLocal_1353))
	{
		vVar0 = {0f, 0f, 0f};
		fVar3 = 0f;
		switch (iParam0)
		{
			case 0:
				vVar0 = {func_80(15)};
				fVar3 = 91.93f;
				break;
			
			case 2:
				vVar0 = {func_80(16)};
				fVar3 = 27.1f;
				break;
			
			case 3:
				vVar0 = {func_80(23)};
				fVar3 = 156.2f;
				break;
		}
		func_367(&iLocal_1353, vVar0, fVar3, 0);
		iLocal_1654 = 0;
	}
	if (!is_ped_injured(iLocal_1353))
	{
		set_blocking_of_non_temporary_events(iLocal_1353, true);
		set_ped_keep_task(iLocal_1353, true);
		set_ped_dies_when_injured(iLocal_1353, true);
		set_ped_can_be_targetted(iLocal_1353, false);
		set_entity_only_damaged_by_player(iLocal_1353, true);
		set_ped_relationship_group_hash(iLocal_1353, 1862763509);
		func_437(&uLocal_1847, 5, iLocal_1353, "CHOP", 0, 1);
		set_ped_component_variation(iLocal_1353, 3, 0, iLocal_1829, 0);
		Local_1112[0] = iLocal_1353;
		Local_1185.f_3 = iLocal_1353;
		if (iParam1)
		{
			func_434();
			iVar4 = false;
			while (!iVar4)
			{
				if (!is_ped_injured(iLocal_1353))
				{
					if (_0x7350823473013C02(iLocal_1353))
					{
						iVar4 = true;
					}
				}
				else
				{
					iVar4 = true;
				}
				wait(0);
			}
		}
		if (!is_ped_injured(iLocal_1353))
		{
			switch (iParam0)
			{
				case 0:
					stop_ped_speaking(iLocal_1353, 1);
					set_entity_proofs(iLocal_1353, false, false, false, false, false, false, 0, true);
					break;
				
				case 1:
					func_697(iLocal_1353, iLocal_1367[0], &uLocal_1346, &uLocal_1751, 0, 1, 0, 0, 0, 0, 0, 0);
					set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
					set_ped_can_ragdoll(iLocal_1353, 0);
					break;
				
				case 4:
					func_697(iLocal_1353, iLocal_1367[0], &uLocal_1346, &uLocal_1751, 1, 1, 0, 0, 0, 0, 0, 0);
					set_entity_proofs(iLocal_1353, false, true, true, false, false, false, 0, true);
					set_ped_can_ragdoll(iLocal_1353, 0);
					break;
				
				default:
					set_entity_proofs(iLocal_1353, false, false, false, false, false, false, 0, true);
					break;
				}
			}
	}
}

bool func_367(int iParam0, vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_77();
	request_model(iVar0);
	if (has_model_loaded(iVar0))
	{
		if (does_entity_exist(*iParam0))
		{
			delete_ped(iParam0);
		}
		*iParam0 = create_ped(26, iVar0, vParam1, fParam4, 0, false);
		set_ped_component_variation(*iParam0, false, 0, false, 0);
		set_ped_component_variation(*iParam0, true, 0, false, 0);
		set_ped_component_variation(*iParam0, 2, 0, false, 0);
		if (Global_101154.f_24643.f_263)
		{
			set_ped_component_variation(*iParam0, 3, 0, Global_101154.f_24643.f_254.f_4, 0);
		}
		else
		{
			set_ped_component_variation(*iParam0, 3, 0, 4, 0);
		}
		set_ped_component_variation(*iParam0, 4, 0, false, 0);
		set_ped_component_variation(*iParam0, 5, 0, false, 0);
		set_ped_component_variation(*iParam0, 6, 0, false, 0);
		set_ped_component_variation(*iParam0, 7, 0, false, 0);
		set_ped_component_variation(*iParam0, 8, 0, false, 0);
		set_ped_component_variation(*iParam0, 9, 0, false, 0);
		set_ped_component_variation(*iParam0, 10, 0, false, 0);
		set_ped_component_variation(*iParam0, 11, 0, false, 0);
		clear_all_ped_props(*iParam0);
		if (iParam5)
		{
			set_model_as_no_longer_needed(iVar0);
		}
		return true;
	}
	return false;
}

void func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!does_entity_exist(iLocal_1352))
	{
		switch (iParam0)
		{
			case 0:
				func_373(&iLocal_1352, 19, func_80(12), 95.7f, 0);
				break;
			
			case 1:
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					func_373(&iLocal_1352, 19, func_80(13), 167.35f, 0);
					func_372(0);
				}
				break;
			
			default:
				if (is_vehicle_driveable(iLocal_1367[0], 0))
				{
					if (iParam0 < 4)
					{
						iVar0 = -1;
					}
					else
					{
						iVar0 = false;
					}
					func_370(&iLocal_1352, 19, iLocal_1367[0], iVar0, 0);
				}
				break;
		}
		if (!is_ped_injured(iLocal_1352))
		{
			set_ped_component_variation(iLocal_1352, false, 0, false, 0);
			set_ped_component_variation(iLocal_1352, true, 1, false, 0);
			set_ped_component_variation(iLocal_1352, 2, 2, false, 0);
			set_ped_component_variation(iLocal_1352, 3, 2, true, 0);
			set_ped_component_variation(iLocal_1352, 4, 4, false, 0);
			set_ped_component_variation(iLocal_1352, 5, 0, false, 0);
			set_ped_component_variation(iLocal_1352, 8, 0, false, 0);
			set_ped_component_variation(iLocal_1352, 9, 0, false, 0);
			set_ped_component_variation(iLocal_1352, 6, 1, false, 0);
		}
		if (iParam1)
		{
			func_434();
			iVar1 = false;
			while (!iVar1)
			{
				if (!is_ped_injured(iLocal_1352))
				{
					if (_0x7350823473013C02(iLocal_1352))
					{
						iVar1 = true;
					}
				}
				else
				{
					iVar1 = true;
				}
				wait(0);
			}
		}
	}
	if (!is_ped_injured(iLocal_1352))
	{
		set_ped_group_member_passenger_index(iLocal_1352, false);
		set_ped_relationship_group_hash(iLocal_1352, 1862763509);
		set_ped_can_be_targetted(iLocal_1352, false);
		set_blocking_of_non_temporary_events(iLocal_1352, true);
		set_entity_only_damaged_by_player(iLocal_1352, true);
		set_ped_get_out_upside_down_vehicle(iLocal_1352, 0);
		set_ped_config_flag(iLocal_1352, 32, false);
		set_ped_config_flag(iLocal_1352, 26, true);
		set_ped_config_flag(iLocal_1352, 118, false);
		set_ped_config_flag(iLocal_1352, 206, true);
		set_ped_config_flag(iLocal_1352, 182, true);
		set_ped_config_flag(iLocal_1352, 174, true);
		set_ped_keep_task(iLocal_1352, true);
		set_ped_dies_when_injured(iLocal_1352, true);
		give_weapon_to_ped(iLocal_1352, func_369(0), -1, false, false);
		func_437(&uLocal_1847, 3, iLocal_1352, "LAMAR", 0, 1);
	}
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_pistol");
			break;
	}
	return joaat("weapon_unarmed");
}

bool func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (!func_37(iParam1))
	{
		iVar0 = func_78(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			if (does_entity_exist(iParam2) && is_vehicle_driveable(iParam2, 0))
			{
				*iParam0 = create_ped_inside_vehicle(iParam2, 26, iVar0, iParam3, 0, false);
				set_ped_default_component_variation(*iParam0);
				func_371(*iParam0, iParam1);
				if (iParam4)
				{
					set_model_as_no_longer_needed(iVar0);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_371(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

void func_372(int iParam0)
{
	if (!is_ped_injured(iLocal_1352))
	{
		if (iParam0)
		{
			set_entity_coords(iLocal_1352, func_80(13), 1, false, 0, 1);
			set_entity_heading(iLocal_1352, 167.35f);
			clear_ped_tasks_immediately(iLocal_1352);
		}
		task_go_straight_to_coord(iLocal_1352, func_80(29), 3f, 20000, 1193033728, 0.5f);
		force_ped_motion_state(iLocal_1352, -1115154469, iParam0, 1, 0);
		set_ped_min_move_blend_ratio(iLocal_1352, 3f);
	}
}

bool func_373(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_37(iParam1))
	{
		iVar0 = func_78(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, false, 0);
				}
			}
			func_371(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

void func_374(int iParam0, vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
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
		func_398(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_279(iParam0, &Var0);
		if (func_301(vParam1, 0f, 0f, 0f, 0))
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
		func_392(iParam5, &Var0, vParam1, fParam4, func_275(iParam0));
		func_375(iParam5, iParam0, 0);
	}
}

void func_375(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_391(&(Global_68319.f_555[0 /*21*/]), iParam0))
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
				Global_101154.f_18807.f_4801 = func_310();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_390(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_376(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_377(iParam0))
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
	func_279(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_377(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_275(iParam0) != 145) || func_389(iParam0)) || func_388(iParam0)) || func_387(iParam0)) || func_386(iParam0)) || !func_378(get_entity_model(iParam0)))
	{
		if (func_388(iParam0))
		{
		}
		if (func_388(iParam0))
		{
		}
		if (func_284(iParam0, 0, 0))
		{
		}
		if (func_284(iParam0, 1, 0))
		{
		}
		if (func_284(iParam0, 2, 0))
		{
		}
		if (func_275(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_378(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_379(iParam0, 0))
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

bool func_379(int iParam0, int iParam1)
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
		if (!func_385())
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
		if ((((!func_384() && !func_383()) && !func_382()) && !func_381()) && !func_385())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_382())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_380(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_380(int iParam0)
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

bool func_381()
{
	return false;
}

bool func_382()
{
	return true;
}

bool func_383()
{
	return true;
}

bool func_384()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_385()
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

bool func_386(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_379(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_387(int iParam0)
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

bool func_388(int iParam0)
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

bool func_389(int iParam0)
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

int func_390(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

int func_391(var uParam0, int iParam1)
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
			*uParam0.f_4 = func_277(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_277(0, 1);
			*uParam0.f_12 = 0;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_277(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_277(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_277(1, 1);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_277(1, 2);
			*uParam0.f_12 = 1;
			set_bit(uParam0.f_9, 19);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_277(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_277(2, 1);
			*uParam0.f_12 = 2;
			set_bit(uParam0.f_9, 20);
			set_bit(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_277(2, 1);
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
			if (func_385())
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
			if (func_385())
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
		if (!func_301(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_301(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (is_bit_set(*uParam0.f_9, 20))
	{
		if (!func_301(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

void func_392(int iParam0, var uParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_391(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_397(iParam0);
			func_396(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_393(iParam0, 1);
		}
	}
}

void func_393(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_395(iParam0, 0))
		{
			func_394(iParam0, 1, 0);
			func_394(iParam0, 2, 0);
			func_394(iParam0, 3, 0);
			func_394(iParam0, 4, 0);
			func_394(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_394(iParam0, 0, 0);
	}
}

void func_394(int iParam0, int iParam1, int iParam2)
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

int func_395(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return is_bit_set(Global_101154.f_18807[iParam0], iParam1);
}

void func_396(var uParam0, var uParam1)
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

void func_397(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_391(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (is_bit_set(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_393(iParam0, 0);
		}
	}
}

void func_398(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_397(iParam0);
	func_393(iParam0, 0);
}

int func_399(vector3 vParam0, Vector3 fParam1)
{
	return func_400(&(Global_93091.f_2311), vParam0, fParam3, 0);
}

int func_400(var uParam0, vector3 vParam1, Vector3 fParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	var uVar5;
	int iVar8;
	
	if (func_420(uParam0))
	{
		if (func_301(vParam1, 0f, 0f, 0f, 0))
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
		if (func_419(uParam0))
		{
			clear_area(vParam1, 5f, 1, 0, 0, false);
			func_418(vParam1, 5f, 0);
			iVar0 = create_vehicle(*uParam0.f_12.f_66, vParam1, fParam4, 1, 1);
			if (does_entity_exist(iVar0))
			{
				vVar1 = {get_entity_coords(iVar0, 1)};
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_410(iVar0, uParam0.f_12, 0, 1);
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
							func_409(*uParam0.f_11, 1);
						}
						else if (is_this_model_a_bike(get_entity_model(iVar0)))
						{
							func_409(*uParam0.f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, 0);
					_0x428BACCDF5E26EAD(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_408(iVar0, *uParam0.f_11);
				}
				else if ((!func_405(iVar0, *uParam0.f_3, *uParam0.f_8) && *uParam0.f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar8 = func_404(iVar0);
					if (iVar8 == -1)
					{
						*uParam0.f_10 = 0;
					}
					else
					{
						func_401(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (get_hash_key(&(Global_91278.f_3)) == Global_69307)
					{
						if (*uParam0.f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_393(24, 0);
							func_401(24);
						}
					}
				}
				if (*uParam0.f_9 == 1)
				{
					func_376(iVar0, *uParam0.f_11);
				}
				set_model_as_no_longer_needed(*uParam0.f_12.f_66);
				vVar1 = {get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_401(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_391(&(Global_68319.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_395(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_402(0, Global_68319.f_555[0 /*21*/].f_12) || !func_402(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_396(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_393(iParam0, 0);
		}
	}
}

int func_402(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_403(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_379(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

var func_403(var uParam0)
{
	return *uParam0;
}

int func_404(int iParam0)
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

bool func_405(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	var[] uVar1 = new var[3];
	int iVar5;
	int iVar6;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_407(iParam0, Global_68319.f_139[38], 0))
			{
				func_401(38);
				return true;
			}
			break;
		
		case 1938952078:
			if (func_407(iParam0, Global_68319.f_139[43], 1))
			{
				func_401(43);
				return true;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = get_ped_nearby_vehicles(player_ped_id(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= iVar5 - 1)
			{
				if (func_407(iParam0, uVar1[iVar6], 1) && func_406(get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!iParam4 || func_301(vParam1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, 1), get_entity_coords(uVar1[iVar6], 1), 1) < 10f)
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
					func_401(14);
					return true;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((does_entity_exist(Global_68319.f_484[20]) && is_vehicle_driveable(iParam0, 0)) && is_vehicle_driveable(Global_68319.f_484[20], 0))
			{
				if (get_entity_model(Global_68319.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_68319.f_484[20]))
				{
					func_401(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_406(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
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

bool func_407(int iParam0, int iParam1, int iParam2)
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

void func_408(int iParam0, var uParam1)
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

void func_409(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || get_entity_model(Global_88942[iVar0]) == func_277(iParam0, iParam1))
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

void func_410(int iParam0, var uParam1, int iParam2, int iParam3)
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
			if (is_bit_set(*uParam1.f_77, func_280(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_280(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (is_bit_set(*uParam1.f_77, func_280(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_280(iVar1 + 1));
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
		if (((is_bit_set(*uParam1.f_77, 15) || func_417(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_416())
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
						func_415(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_415(iParam0, *uParam1.f_69);
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
			func_411(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (is_bit_set(*uParam1.f_77, func_280(iVar2 + 1)))
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

bool func_411(int iParam0, var uParam1, var uParam2)
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
	if (func_414(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_413(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_413(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_412(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_412(int iParam0)
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

int func_413(int iParam0, int iParam1)
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

bool func_414(int iParam0, int iParam1)
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

void func_415(int iParam0, int iParam1)
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

int func_416()
{
	return is_dlc_present(-1691188696);
}

int func_417(int iParam0)
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

void func_418(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_391(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(vParam0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_401(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_419(var uParam0)
{
	if (func_420(uParam0))
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

bool func_420(var uParam0)
{
	if (*uParam0.f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_379(*uParam0.f_12.f_66, 0))
	{
		return false;
	}
	if (*uParam0.f_12.f_66 == joaat("stunt") && func_406(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return false;
	}
	return true;
}

bool func_421(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam4 == 1)
	{
		vParam1 = {func_422()};
	}
	get_model_dimensions(iParam0, &vVar0, &vVar3);
	if (vVar3.x - vVar0.x > vParam1.x)
	{
		return false;
	}
	else if (vVar3.y - vVar0.y > vParam1.y)
	{
		return false;
	}
	else if (vVar3.z - vVar0.z > vParam1.z)
	{
		return false;
	}
	return true;
}

Vector3 func_422()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_423()
{
	return func_420(&(Global_93091.f_2311));
}

void func_424()
{
	if (!is_ped_injured(player_ped_id()))
	{
		set_entity_coords(player_ped_id(), func_80(1), 1, false, 0, 1);
		set_entity_heading(player_ped_id(), 93.3f);
		set_gameplay_cam_relative_heading(0);
	}
}

void func_425(int iParam0)
{
	vector3 vVar0;
	Vector3 fVar3;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			vVar0 = {0f, 10f, 0f};
			fVar3 = 0f;
			break;
		
		case 2:
			vVar0 = {func_80(14)};
			fVar3 = -8.69f;
			break;
		
		case 3:
			vVar0 = {func_80(21)};
			fVar3 = 173f;
			break;
	}
	Local_1159 = create_ped(26, func_73(2), vVar0, fVar3, 1, true);
	if (iParam0 <= 4)
	{
		set_entity_proofs(Local_1159, false, false, false, true, true, false, 0, false);
	}
	set_blocking_of_non_temporary_events(Local_1159, true);
	set_ped_dies_when_injured(Local_1159, true);
	set_entity_only_damaged_by_player(Local_1159, true);
	set_ped_keep_task(Local_1159, true);
	set_ped_get_out_upside_down_vehicle(Local_1159, 0);
	set_ped_can_be_knocked_off_vehicle(Local_1159, 1);
	clear_all_ped_props(Local_1159);
	set_ped_prop_index(Local_1159, false, 0, 0, false);
	set_ped_component_variation(Local_1159, 3, 0, false, 0);
	set_ped_component_variation(Local_1159, 4, 0, false, 0);
	set_ped_component_variation(Local_1159, 10, 0, false, 0);
	set_ped_config_flag(Local_1159, 208, true);
	set_ped_config_flag(Local_1159, 118, false);
	set_ped_config_flag(Local_1159, 26, true);
	func_437(&uLocal_1847, 4, Local_1159, "BALLASOG", 0, 1);
	if (iParam0 <= 2)
	{
		func_426(1, 0f, 2f, 4f, 0f, 1, 1, 0);
		if (iParam0 < 2)
		{
			set_ped_into_vehicle(Local_1159, iLocal_1367[1], -1);
			set_entity_proofs(iLocal_1367[1], false, false, false, true, true, false, 0, false);
			set_disable_vehicle_petrol_tank_fires(iLocal_1367[1], 1);
			_0x51BB2D88D31A914B(iLocal_1367[1], false);
			_0x192547247864DFDD(iLocal_1367[1], false);
		}
		set_vehicle_is_considered_by_player(iLocal_1367[1], 0);
	}
	if (iParam0 >= 2)
	{
		_0x153973AB99FE8980(Local_1159, "FRANKLIN_0_D_Group", 0f);
	}
	switch (iParam0)
	{
		case 0:
			start_playback_recorded_vehicle(iLocal_1367[1], 14, func_349(), 1);
			pause_playback_recorded_vehicle(iLocal_1367[1]);
			break;
		
		case 1:
			start_playback_recorded_vehicle(iLocal_1367[1], true, func_362(), 1);
			break;
		
		case 2:
			set_entity_coords_no_offset(iLocal_1367[1], 460.669f, -682.118f, 26.5919f, 0, 0, 1);
			set_entity_rotation(iLocal_1367[1], 0.0150743f, 85.4796f, 10.1482f, 2, 1);
			break;
		
		case 4:
			break;
		
		case 3:
			freeze_entity_position(Local_1159, true);
			break;
	}
}

void func_426(int iParam0, vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!is_vehicle_driveable(iLocal_1367[iParam0], 0))
	{
		iVar0 = func_433(iParam0);
		if (iParam0 == 0)
		{
			func_429(&(iLocal_1367[iParam0]), 19, vParam1, fParam4, 0, 0);
		}
		else
		{
			iLocal_1367[iParam0] = create_vehicle(func_73(iVar0), vParam1, fParam4, 1, 1);
		}
		set_vehicle_on_ground_properly(iLocal_1367[iParam0]);
		if (!iParam5)
		{
			func_198(iVar0);
		}
		if (iParam7)
		{
			set_vehicle_can_be_visibly_damaged(iLocal_1367[iParam0], false);
			set_vehicle_can_break(iLocal_1367[iParam0], false);
			set_entity_proofs(iLocal_1367[iParam0], true, true, true, true, true, false, 0, false);
		}
		if (!iParam6)
		{
			set_vehicle_as_no_longer_needed(&(iLocal_1367[iParam0]));
		}
		_0x51BB2D88D31A914B(iLocal_1367[iParam0], false);
		_0x192547247864DFDD(iLocal_1367[iParam0], false);
		set_disable_vehicle_petrol_tank_fires(iLocal_1367[iParam0], 1);
		switch (iParam0)
		{
			case 0:
				set_vehicle_strong(iLocal_1367[iParam0], true);
				set_vehicle_can_break(iLocal_1367[iParam0], false);
				_set_vehicle_door_breakable(iLocal_1367[iParam0], 0, false);
				_set_vehicle_door_breakable(iLocal_1367[iParam0], 1, false);
				_set_vehicle_door_breakable(iLocal_1367[iParam0], 2, false);
				_set_vehicle_door_breakable(iLocal_1367[iParam0], 3, false);
				set_vehicle_has_strong_axles(iLocal_1367[iParam0], true);
				set_vehicle_tyres_can_burst(iLocal_1367[iParam0], false);
				func_428(iLocal_1367[iParam0], -1);
				func_427(iLocal_1367[iParam0], -1);
				iLocal_1760 = get_entity_health(iLocal_1367[iParam0]);
				break;
			
			case 1:
				set_vehicle_colour_combination(iLocal_1367[iParam0], 1);
				set_entity_only_damaged_by_player(iLocal_1367[iParam0], true);
				set_audio_vehicle_priority(iLocal_1367[iParam0], 3);
				break;
			}
	}
}

void func_427(var uParam0, int iParam1)
{
	Global_55760 = uParam0;
	Global_55761 = iParam1;
}

void func_428(int iParam0, int iParam1)
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

bool func_429(var uParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	struct<98> Var0;
	int iVar98;
	int iVar99;
	
	if (!func_37(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_76(iParam1, &Var0, iParam7);
		if (does_entity_exist(*uParam0))
		{
			if (get_entity_model(*uParam0) != Var0)
			{
			}
			return true;
		}
		if ((iParam1 == 17 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			request_model(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]))
			{
				*uParam0 = create_vehicle(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*uParam0);
				_0xAB04325045427AAE(*uParam0, 0);
				_0x428BACCDF5E26EAD(*uParam0, false);
				set_vehicle_has_strong_axles(*uParam0, true);
				set_entity_health(*uParam0, 1250);
				set_vehicle_engine_health(*uParam0, 1250f);
				set_vehicle_petrol_tank_health(*uParam0, 1250f);
				Var0.f_3 = 1250;
				set_vehicle_colours(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_5, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_6);
				set_vehicle_extra_colours(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_7, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_8);
				set_vehicle_dirt_level(*uParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					set_vehicle_extra(*uParam0, iVar99 + 1, !Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_11[iVar99]);
					iVar99++;
				}
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
				{
					if (is_vehicle_a_convertible(*uParam0, 0))
					{
						if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
						{
							raise_convertible_roof(*uParam0, 1);
						}
						else
						{
							lower_convertible_roof(*uParam0, 1);
						}
					}
				}
				set_vehicle_number_plate_text(*uParam0, &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_27));
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 < get_number_of_vehicle_number_plates())
				{
					set_vehicle_number_plate_text_index(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26);
				}
				set_vehicle_tyre_smoke_color(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_84, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_85, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_88);
				set_vehicle_window_tint(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_93, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_94, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*uParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*uParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*uParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*uParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*uParam0) > 1 && Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*uParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*uParam0)))
						{
							if (Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*uParam0, Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
						}
					}
				}
				func_411(uParam0, &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_81));
				_set_vehicle_paint_fade(*uParam0, Var0.f_96);
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
				}
				func_432(*uParam0);
				return true;
			}
		}
		else
		{
			request_model(Var0);
			if (has_model_loaded(Var0))
			{
				*uParam0 = create_vehicle(Var0, vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*uParam0);
				_0xAB04325045427AAE(*uParam0, 0);
				_0x428BACCDF5E26EAD(*uParam0, false);
				set_vehicle_has_strong_axles(*uParam0, true);
				func_430(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_432(*uParam0);
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Var0);
				}
				return true;
			}
		}
	}
	return false;
}

void func_430(var uParam0, struct<98> Param1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		set_vehicle_colour_combination(*uParam0, Param1.f_4);
	}
	else
	{
		set_vehicle_colours(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		set_vehicle_extra_colours(*uParam0, Param1.f_7, Param1.f_8);
	}
	set_vehicle_dirt_level(*uParam0, Param1.f_2);
	set_entity_health(*uParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		set_vehicle_extra(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (is_vehicle_a_convertible(*uParam0, 0))
		{
			raise_convertible_roof(*uParam0, 1);
		}
	}
	if (func_431(&uVar2, &iVar1) && Param1.f_97)
	{
		set_vehicle_number_plate_text(*uParam0, &uVar2);
		set_vehicle_number_plate_text_index(*uParam0, iVar1);
	}
	else if (!is_string_null_or_empty(&(Param1.f_27)))
	{
		set_vehicle_number_plate_text(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(*uParam0, Param1.f_26);
		}
	}
	set_vehicle_tyre_smoke_color(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	set_vehicle_tyres_can_burst(*uParam0, Param1.f_88);
	set_vehicle_window_tint(*uParam0, Param1.f_87);
	_set_vehicle_neon_lights_colour(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	_set_vehicle_neon_light_enabled(*uParam0, 2, is_bit_set(Param1.f_92, 28));
	_set_vehicle_neon_light_enabled(*uParam0, 3, is_bit_set(Param1.f_92, 29));
	_set_vehicle_neon_light_enabled(*uParam0, 0, is_bit_set(Param1.f_92, 30));
	_set_vehicle_neon_light_enabled(*uParam0, 1, is_bit_set(Param1.f_92, 31));
	if (get_vehicle_livery_count(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		set_vehicle_livery(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!is_this_model_a_bicycle(get_entity_model(*uParam0)))
		{
			if (is_this_model_a_bike(get_entity_model(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					set_vehicle_wheel_type(*uParam0, Param1.f_90);
				}
			}
			else
			{
				set_vehicle_wheel_type(*uParam0, Param1.f_90);
			}
		}
	}
	func_411(uParam0, &(Param1.f_31), &(Param1.f_81));
	_set_vehicle_paint_fade(*uParam0, Param1.f_96);
}

bool func_431(var uParam0, var uParam1)
{
	if (network_is_game_in_progress())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = {Global_101154.f_24643.f_267};
		*uParam1 = Global_101154.f_24643.f_271;
		return true;
	}
	return false;
}

void func_432(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!does_entity_exist(Global_88972[iVar0]))
		{
			Global_88972[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
	}
	return 7;
}

void func_434()
{
	if (is_screen_faded_out())
	{
		load_all_objects_now();
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	if (!is_ped_injured(iParam0))
	{
		switch (iParam1)
		{
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

void func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_426(0, func_80(6), 289.94f, 1, 1, 0);
			break;
		
		case 2:
			func_426(0, func_80(8), -12.7f, 1, 1, 0);
			break;
		
		case 3:
			func_426(0, func_80(31), 87.3f, 1, 1, 0);
			break;
		
		case 4:
			if (!iLocal_1471)
			{
				func_426(0, func_80(7), 175.46f, 1, 1, 0);
			}
			else
			{
				func_426(0, func_80(4), 143.1f, 1, 1, 0);
			}
			break;
	}
	if (iParam0 >= 1 && iParam0 < 4)
	{
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (!is_ped_injured(player_ped_id()))
			{
				set_entity_coords(player_ped_id(), func_80(11), 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 164.8f);
			}
			break;
		
		case 2:
			if (!is_ped_injured(player_ped_id()))
			{
				set_entity_coords(player_ped_id(), func_80(5), 1, false, 0, 1);
				set_entity_heading(player_ped_id(), -19.4f);
			}
			break;
		
		case 3:
			if (!is_ped_injured(player_ped_id()))
			{
				set_entity_coords(player_ped_id(), func_80(20), 1, false, 0, 1);
				set_entity_heading(player_ped_id(), 137.26f);
			}
			break;
		
		case 4:
			if (!is_ped_injured(player_ped_id()))
			{
				set_ped_into_vehicle(player_ped_id(), iLocal_1367[0], -1);
			}
			break;
	}
}

void func_437(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_438(var uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

bool func_439(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	char[64] cVar6;
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!*uParam0.f_39)
	{
		if (*uParam0.f_7 == 4)
		{
			return true;
		}
	}
	if ((!is_ped_injured(*uParam0[*uParam0.f_7]) && !is_ped_injured(player_ped_id())) && *uParam0[*uParam0.f_7] != player_ped_id())
	{
		if (!iParam2)
		{
			if ((is_ped_ragdoll(player_ped_id()) && !is_entity_on_fire(player_ped_id())) && !is_ped_getting_into_a_vehicle(player_ped_id()))
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
			else
			{
				clear_ped_tasks(player_ped_id());
			}
			if ((is_ped_ragdoll(*uParam0[*uParam0.f_7]) && !is_entity_on_fire(*uParam0[*uParam0.f_7])) && !is_ped_getting_into_a_vehicle(*uParam0[*uParam0.f_7]))
			{
				clear_ped_tasks_immediately(*uParam0[*uParam0.f_7]);
			}
			else
			{
				clear_ped_tasks(*uParam0[*uParam0.f_7]);
			}
		}
		iVar0 = player_ped_id();
		iVar1 = func_214();
		if (!*uParam0.f_23)
		{
			func_479(iVar0, 0);
		}
		func_477(iVar1, &iVar0);
		set_ped_config_flag(iVar0, 32, true);
		set_ped_config_flag(iVar0, 250, true);
		iVar2 = func_38(*uParam0.f_7);
		func_479(*uParam0[*uParam0.f_7], 0);
		fVar3 = to_float(get_entity_health(*uParam0[*uParam0.f_7])) - 100f / to_float(get_ped_max_health(*uParam0[*uParam0.f_7])) - 100f * 100f;
		switch (func_216(player_ped_id()))
		{
			case 0:
				if (_get_screen_effect_is_active("BulletTime"))
				{
					_stop_screen_effect("BulletTime");
				}
				if (_get_screen_effect_is_active("BulletTimeOut"))
				{
					_stop_screen_effect("BulletTimeOut");
				}
				break;
			
			case 1:
				if (_get_screen_effect_is_active("DrivingFocus"))
				{
					_stop_screen_effect("DrivingFocus");
				}
				if (_get_screen_effect_is_active("DrivingFocusOut"))
				{
					_stop_screen_effect("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (_get_screen_effect_is_active("REDMIST"))
				{
					_stop_screen_effect("REDMIST");
				}
				if (_get_screen_effect_is_active("REDMISTOut"))
				{
					_stop_screen_effect("REDMISTOut");
				}
				break;
		}
		if (func_37(func_214()))
		{
			if (is_special_ability_active(player_id()))
			{
				special_ability_deactivate_fast(player_id());
			}
		}
		change_player_ped(player_id(), *uParam0[*uParam0.f_7], iParam2, 0);
		hide_hud_component_this_frame(3);
		hide_hud_component_this_frame(13);
		if (iParam3 & 1 != 0)
		{
			set_ped_config_flag(player_ped_id(), 210, false);
		}
		if (func_474(0) || func_474(3))
		{
			if (Global_17118.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (is_bit_set(Global_82363[iVar4 /*5*/].f_1, 2))
					{
						uVar5 = Global_82363[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_82399[Global_69758.f_109[uVar5 /*4*/] /*34*/]), 64);
						stat_increment(get_hash_key(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17118.f_13 = 0;
		*uParam0.f_5 = func_39(iVar1);
		if (*uParam0.f_5 == 4)
		{
			*uParam0.f_5 = 3;
		}
		*uParam0[*uParam0.f_5] = iVar0;
		*uParam0[*uParam0.f_7] = 0;
		*uParam0.f_6 = func_39(iVar2);
		*uParam0.f_7 = 4;
		iVar22 = player_ped_id();
		set_entity_visible(player_ped_id(), true, 0);
		func_473(iVar22);
		_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !is_ped_swimming_under_water(player_ped_id()))
		{
			set_entity_health(player_ped_id(), round(25f / 100f * to_float(get_ped_max_health(player_ped_id())) - 100f + 100f));
		}
		if (iParam1)
		{
			if (does_entity_exist(iVar0))
			{
				set_entity_visible(iVar0, true, 0);
				func_473(iVar0);
				_0xE861D0B05C7662B8(iVar0, 0, 0);
				set_ped_stealth_movement(iVar0, 0, 0);
			}
		}
		else if (does_entity_exist(iVar0))
		{
			sVar24 = get_entity_script(iVar0, &uVar23);
			if (!is_string_null(sVar24))
			{
				if (!are_strings_equal(sVar24, get_this_script_name()))
				{
					set_entity_as_mission_entity(iVar0, false, 1);
				}
				delete_ped(&iVar0);
			}
		}
		Global_88893 = 1;
		func_472(player_ped_id());
		func_471();
		func_470(iVar2);
		func_465();
		func_463(iVar2);
		func_447(func_461(get_entity_coords(player_ped_id(), 1), 145, 0));
		reset_player_stamina(player_id());
		set_entity_only_damaged_by_player(player_ped_id(), false);
		set_ped_can_be_dragged_out(player_ped_id(), 1);
		if (is_player_playing(player_id()))
		{
			set_auto_give_parachute_when_enter_plane(player_id(), func_446(67));
		}
		if (is_player_playing(player_id()))
		{
			_0xD2B315B6689D537D(player_id(), func_446(68));
		}
		func_443(iVar2, &iVar22);
		if (((func_118(0) || func_118(3)) || func_118(2)) || func_118(4))
		{
			set_ped_config_flag(iVar22, 32, false);
			set_ped_config_flag(iVar22, 250, false);
		}
		else
		{
			set_ped_config_flag(iVar22, 32, true);
			set_ped_config_flag(iVar22, 250, true);
		}
		if (!func_442())
		{
			func_440();
		}
		Global_88530 = 0;
		return true;
	}
	else
	{
		if (is_ped_injured(player_ped_id()))
		{
		}
		if (is_ped_injured(*uParam0[*uParam0.f_7]))
		{
		}
		if (player_ped_id() == *uParam0[*uParam0.f_7])
		{
		}
	}
	return false;
}

void func_440()
{
	if (Global_88923)
	{
		func_215();
		_0xBF59707B3E5ED531(func_441(Global_101154.f_1826.f_539.f_3549));
	}
	else
	{
		_0xBF59707B3E5ED531("");
	}
}

char* func_441(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

var func_442()
{
	return Global_17116;
}

void func_443(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_444(4, *iParam1);
			func_444(7, *iParam1);
			func_444(8, *iParam1);
			func_444(11, *iParam1);
			break;
		
		case 1:
			if (Global_101154.f_7775.f_330[2 /*6*/])
			{
				func_444(4, *iParam1);
			}
			func_444(7, *iParam1);
			func_444(8, *iParam1);
			func_444(11, *iParam1);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_444(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_330[20 /*6*/])
			{
				func_444(4, *iParam1);
			}
			func_444(7, *iParam1);
			func_444(8, *iParam1);
			func_444(11, *iParam1);
			break;
	}
}

void func_444(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (func_445(iParam0, iParam1))
	{
		return;
	}
	if (Global_34834[iParam0 /*31*/].f_24 < 5)
	{
		Global_34834[iParam0 /*31*/].f_25[Global_34834[iParam0 /*31*/].f_24] = iParam1;
		Global_34834[iParam0 /*31*/].f_24++;
	}
	else
	{
		iVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34834[iParam0 /*31*/].f_25[iVar0];
			if (!does_entity_exist(iVar1) || is_ped_injured(iVar1))
			{
				Global_34834[iParam0 /*31*/].f_25[iVar0] = iParam1;
				iVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!iVar2)
		{
		}
	}
}

bool func_445(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34834[uParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34834[uParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_446(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_447(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_bit(&(Global_31499[38 / 32]), 38 % 32);
			func_448(38, 0);
			set_bit(&(Global_31499[41 / 32]), 41 % 32);
			func_448(41, 0);
			set_bit(&(Global_31499[43 / 32]), 43 % 32);
			func_448(43, 0);
			set_bit(&(Global_31499[42 / 32]), 42 % 32);
			func_448(42, 0);
			set_bit(&(Global_31499[44 / 32]), 44 % 32);
			func_448(44, 0);
			break;
		
		case 1:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_448(51, 0);
			break;
		
		case 2:
			set_bit(&(Global_31499[51 / 32]), 51 % 32);
			func_448(51, 0);
			break;
		
		case 3:
			set_bit(&(Global_31499[53 / 32]), 53 % 32);
			func_448(53, 0);
			break;
		
		case 4:
			set_bit(&(Global_31499[81 / 32]), 81 % 32);
			func_448(81, 0);
			set_bit(&(Global_31499[82 / 32]), 82 % 32);
			func_448(82, 0);
			break;
		
		case 5:
			set_bit(&(Global_31499[47 / 32]), 47 % 32);
			func_448(47, 0);
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_448(50, 0);
			break;
		
		case 6:
			set_bit(&(Global_31499[50 / 32]), 50 % 32);
			func_448(50, 0);
			break;
	}
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_69489)
		{
			iVar0 = Global_2428492.f_74[iParam0];
		}
		else
		{
			iVar0 = Global_101154.f_5951[iParam0];
		}
		if (iVar0 != iParam1 || is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
				Global_31971[iParam0] = iParam1;
			}
			else if (Global_69489)
			{
				Global_2428492.f_74[iParam0] = iParam1;
			}
			else
			{
				Global_101154.f_5951[iParam0] = iParam1;
			}
			set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			func_450(iParam0);
			if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
			{
				func_449(iParam0);
			}
		}
	}
}

void func_449(int iParam0)
{
	if (!is_bit_set(Global_32442.f_228[iParam0 / 32], iParam0 % 23))
	{
		set_bit(&(Global_32442.f_228[iParam0 / 32]), iParam0 % 23);
		Global_32442[Global_32442.f_227] = iParam0;
		Global_32442.f_227++;
	}
}

void func_450(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (!func_459())
	{
		return;
	}
	if (is_ped_injured(player_ped_id()))
	{
		return;
	}
	Var0 = {func_458(iParam0)};
	if (is_bit_set(Var0.f_4, 2))
	{
		func_455(iParam0, &Var0);
	}
	if (!_does_door_exist(Var0.f_5))
	{
		if (is_cutscene_playing())
		{
			return;
		}
	}
	iVar7 = false;
	iVar8 = false;
	fVar10 = get_distance_between_coords(Var0, get_entity_coords(player_ped_id(), 1), 1);
	if ((is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] == 2) && fVar10 > 210f)
	{
		clear_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
		Global_31517[iParam0] = 0;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("startup_positioning")) == 0)
	{
		if (is_bit_set(Global_31744[iParam0 / 32], iParam0 % 32))
		{
			if (fVar10 < 25f)
			{
				if (Global_91330.f_294 == 0)
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						Global_91330.f_294 = get_interior_from_entity(player_ped_id());
					}
				}
				iVar11 = Global_91330.f_294;
				iVar12 = get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					set_bit(&(Global_31508[iParam0 / 32]), iParam0 % 32);
					Global_31971[iParam0] = 3;
					set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
				}
			}
			clear_bit(&(Global_31744[iParam0 / 32]), iParam0 % 32);
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32))
	{
		iVar9 = Global_31971[iParam0];
	}
	else if (is_bit_set(Var0.f_4, false))
	{
		if (Global_101154.f_7775)
		{
			iVar9 = func_452(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_118(14))
		{
			iVar9 = 0;
		}
	}
	else if (is_bit_set(Var0.f_4, true) && _get_number_of_instances_of_streamed_script(joaat("ambient_solomon")) == 0)
	{
		if (func_451())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_101154.f_5951[iParam0];
	}
	if (Global_32198[iParam0] != iVar9)
	{
		iVar7 = true;
	}
	if (is_bit_set(Global_31499[iParam0 / 32], iParam0 % 32))
	{
		if (!is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) || (Global_31517[iParam0] == 0 && Global_31971[iParam0] != 2))
		{
			iVar7 = true;
		}
	}
	if (iVar7)
	{
		if (!Global_31498)
		{
		}
		else
		{
			if (!_does_door_exist(Var0.f_5))
			{
				add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (is_bit_set(Var0.f_4, 3))
					{
						iVar13 = true;
					}
					else if (fVar10 > 3f || absf(_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar14 = get_interior_from_entity(player_ped_id());
						iVar15 = get_interior_at_coords(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							iVar13 = true;
						}
					}
					if (iVar13)
					{
						if (Var0.f_6 != 0f)
						{
							_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
						iVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
					iVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					iVar8 = true;
					break;
				}
		}
		if (iVar8)
		{
			clear_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
			Global_32198[iParam0] = iVar9;
		}
	}
	if (is_bit_set(Global_31508[iParam0 / 32], iParam0 % 32) && Global_31971[iParam0] != 2)
	{
		set_bit(&(Global_31499[iParam0 / 32]), iParam0 % 32);
		func_449(iParam0);
		if (Global_31517[iParam0] < 2)
		{
			Global_31517[iParam0]++;
		}
	}
}

bool func_451()
{
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return false;
	}
	switch (func_214())
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
		
		case 1:
			if (Global_101154.f_7775.f_99.f_58[66])
			{
				return true;
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_99.f_58[65])
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_452(int iParam0)
{
	int iVar0;
	
	iVar0 = func_214();
	if (func_453(iParam0))
	{
		return true;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (is_bit_set(Global_101154.f_5919[5], false) || is_bit_set(Global_101154.f_5919[6], false))
			{
				return false;
			}
		}
		if (func_37(iVar0))
		{
			if (is_bit_set(Global_86638[5], iVar0))
			{
				return false;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[0], false))
				{
					return false;
				}
			}
			if (func_37(iVar0))
			{
				if (is_bit_set(Global_86638[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return false;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[5], false))
				{
					return false;
				}
			}
			if (func_37(iVar0))
			{
				if (is_bit_set(Global_86638[5], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (is_bit_set(Global_101154.f_5919[6], false))
				{
					return false;
				}
			}
			if (func_37(iVar0))
			{
				if (is_bit_set(Global_86638[6], iVar0))
				{
					return false;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[2], false))
				{
					return false;
				}
				if (func_37(iVar0))
				{
					if (is_bit_set(Global_86638[2], iVar0))
					{
						return false;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (is_bit_set(Global_101154.f_5919[1], false))
				{
					return false;
				}
				if (func_37(iVar0))
				{
					if (is_bit_set(Global_86638[1], iVar0))
					{
						return false;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (is_bit_set(Global_101154.f_5919[3], false))
				{
					return false;
				}
			}
			if (func_37(iVar0))
			{
				if (is_bit_set(Global_86638[3], iVar0))
				{
					return false;
				}
			}
			break;
		
		default:
			return false;
			break;
	}
	return true;
}

bool func_453(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 1))
			{
				iVar0 = get_entity_model(func_454(get_vehicle_ped_is_in(player_ped_id(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
						break;
					}
				}
			}
	}
	return false;
}

int func_454(int iParam0)
{
	return iParam0;
}

void func_455(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!is_bit_set(*uParam1.f_4, 2))
	{
		return;
	}
	iVar0 = func_310();
	iVar1 = func_457(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_456(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_456(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 12f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_456(iParam0))
			{
				if ((_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0) && !Global_101154.f_7775.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_101154.f_5951[iParam0] = 0;
							_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_101154.f_7775.f_99.f_58[4])
				{
					Global_101154.f_5951[iParam0] = 0;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (Global_101154.f_7775.f_99.f_58[4])
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) == 0 && _get_number_of_instances_of_streamed_script(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 18f)
					{
						Global_101154.f_5951[iParam0] = 1;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_456(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_101154.f_5951[iParam0] = 0;
						_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(get_entity_coords(player_ped_id(), 0), *uParam1) >= 40f)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_456(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else if (_get_number_of_instances_of_streamed_script(joaat("assassin_valet")) > 0)
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_456(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (_get_number_of_instances_of_streamed_script(joaat("omega2")) == 0)
			{
				if (!func_456(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_456(iParam0) && _get_number_of_instances_of_streamed_script(Global_82399[26 /*34*/].f_6) == 0)
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_456(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[43 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_456(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[93 /*34*/].f_6) > 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_456(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[8 /*34*/].f_6) == 0 && _get_number_of_instances_of_streamed_script(Global_82399[10 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_456(iParam0))
			{
				if (_get_number_of_instances_of_streamed_script(Global_82399[47 /*34*/].f_6) == 0)
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (_get_number_of_instances_of_streamed_script(Global_82399[70 /*34*/].f_6) == 0)
			{
				if (!func_456(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (_get_number_of_instances_of_streamed_script(Global_82399[48 /*34*/].f_6) == 0)
			{
				if (!func_456(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (_get_number_of_instances_of_streamed_script(Global_82399[39 /*34*/].f_6) == 0)
			{
				if (!func_456(iParam0))
				{
					Global_101154.f_5951[iParam0] = 1;
					_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 1;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_456(iParam0))
			{
				Global_101154.f_5951[iParam0] = 0;
				_set_door_acceleration_limit(*uParam1.f_5, Global_101154.f_5951[iParam0], 1, 1);
			}
			break;
	}
}

int func_456(int iParam0)
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = {func_458(iParam0)};
	iVar7 = _0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_457(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

struct<7> func_458(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {133f, -1711f, 29f};
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-1287.857f, -1115.742f, 7.1401f};
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1932.952f, 3725.154f, 32.9944f};
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1207.873f, -470.063f, 66.358f};
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-29.8692f, -148.1571f, 57.2265f};
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-280.7851f, 6232.782f, 31.8455f};
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = {-824f, -187f, 38f};
			Var0 = {-823.2001f, -187.0831f, 37.819f};
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = {-823f, -188f, 38f};
			Var0 = {-822.4442f, -188.3924f, 37.819f};
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {82.3186f, -1392.752f, 29.5261f};
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {82.3186f, -1390.476f, 29.5261f};
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1686.983f, 4821.741f, 42.2131f};
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1687.282f, 4819.484f, 42.2131f};
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {418.637f, -806.457f, 29.6396f};
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {418.637f, -808.733f, 29.6396f};
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-1096.661f, 2705.446f, 19.2578f};
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1094.965f, 2706.964f, 19.2578f};
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1196.825f, 2703.221f, 38.3726f};
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1199.101f, 2703.221f, 38.3726f};
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-818.7642f, -1079.544f, 11.4781f};
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-816.7932f, -1078.406f, 11.4781f};
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-0.0564f, 6517.461f, 32.0278f};
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1.7253f, 6515.914f, 32.0278f};
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-1201.435f, -776.8566f, 17.9918f};
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {617.2458f, 2751.022f, 42.7578f};
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {127.8201f, -211.8274f, 55.2275f};
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-3167.75f, 1055.536f, 21.5329f};
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-716.6754f, -155.42f, 37.6749f};
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-715.6154f, -157.2561f, 37.6749f};
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-157.0924f, -306.4413f, 39.994f};
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-156.4022f, -304.4366f, 39.994f};
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1454.782f, -231.7927f, 50.0565f};
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1456.201f, -233.3682f, 50.0565f};
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {321.81f, 178.36f, 103.68f};
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = {1859.89f, 3749.79f, 33.18f};
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = {-289.1752f, 6199.112f, 31.637f};
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-1155.454f, -1424.008f, 5.0461f};
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {1321.286f, -1650.597f, 52.3663f};
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-3167.789f, 1074.767f, 20.9209f};
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = {-817f, 179f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = {-816f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = {-815f, 186f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-797f, 177f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-795f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-793f, 181f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-794f, 183f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = {-849f, 179f, 70f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = {-802.7333f, 167.5041f, 77.5824f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = {-14f, -1441f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {-15f, -1427f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = {-25.28f, -1431.06f, 30.84f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = {7.52f, 539.53f, 176.18f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = {1973f, 3815f, 34f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = {1972.787f, 3824.554f, 32.5831f};
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = {-1150f, -1521f, 11f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-1145.9f, -1991.14f, 14.18f};
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = {723.12f, -1088.83f, 23.28f};
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-356.09f, -134.77f, 40.01f};
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {108.8502f, 6617.876f, 32.673f};
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {114.3206f, 6623.226f, 32.7161f};
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1182.305f, 2645.242f, 38.807f};
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1174.654f, 2645.242f, 38.6826f};
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = {-205.7007f, -1310.692f, 30.2957f};
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = {-107.5401f, -9.0258f, 70.6696f};
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = {717f, -975f, 25f};
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = {719f, -975f, 25f};
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = {709.9813f, -963.5311f, 30.5453f};
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = {709.9894f, -960.6675f, 30.5453f};
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = {707.8046f, -962.4564f, 30.5453f};
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = {1393f, 3599f, 35f};
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = {1395f, 3600f, 35f};
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1387f, 3614f, 39f};
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1083.547f, -1975.435f, 31.6222f};
			Var0.f_5 = 792295685;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1065.237f, -2006.079f, 32.2329f};
			Var0.f_5 = 563273144;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1085.307f, -2018.561f, 41.6289f};
			Var0.f_5 = -726993043;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = {-111f, 6464f, 32f};
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = {-110f, 6462f, 32f};
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = {1274f, -1721f, 55f};
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1271.89f, -1707.57f, 53.79f};
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1270.77f, -1708.1f, 53.75f};
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = {-127.5f, -1456.18f, 37.94f};
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = {483.56f, -1316.08f, 32.18f};
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = {483f, -1312f, 29f};
			Var0.f_5 = -106474626;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = {128f, -1299f, 29f};
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {96f, -1285f, 29f};
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = {549f, -1773f, 34f};
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {974f, -1839f, 36f};
			Var0.f_5 = 1267246609;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {977f, -105f, 75f};
			Var0.f_5 = -1900237971;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1391f, 1163f, 114f};
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1391f, 1161f, 114f};
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = {1396f, 1143f, 115f};
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = {1396f, 1141f, 115f};
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1409f, 1146f, 114f};
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1409f, 1148f, 114f};
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1408f, 1159f, 114f};
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1408f, 1161f, 114f};
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = {-1067f, -1666f, 5f};
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = {-1065f, -1669f, 5f};
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = {-1104.66f, -1638.48f, 4.68f};
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = {-31.72f, -1101.85f, 26.57f};
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = {134.4f, -2204.1f, 7.52f};
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3628f, 3747f, 28f};
			Var0.f_5 = 1773088812;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3621f, 3752f, 28f};
			Var0.f_5 = -1332101528;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-608.73f, -1610.32f, 27.16f};
			Var0.f_5 = -1811763714;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-611.32f, -1610.09f, 27.16f};
			Var0.f_5 = 1608500665;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-592.94f, -1631.58f, 27.16f};
			Var0.f_5 = -1456048340;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-592.71f, -1628.99f, 27.16f};
			Var0.f_5 = 943854909;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1991f, 3053f, 47f};
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = {1988.353f, 3054.411f, 47.3204f};
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = {-700.17f, 47.31f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = {-697.94f, 48.35f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = {241.3574f, 361.0488f, 105.8963f};
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = {-689.11f, 506.97f, 110.64f};
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = {-1055.96f, -236.43f, 44.17f};
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {29f, 3661f, 41f};
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = {32f, 3667f, 41f};
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = {87f, -1959f, 21f};
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {0f, -1823f, 30f};
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = {23.34f, -1897.6f, 23.05f};
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = {524.2f, 3081.14f, 41.16f};
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = {-1910.58f, -576.01f, 19.25f};
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = {-720.39f, 256.86f, 80.29f};
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = {-718.42f, 257.79f, 80.29f};
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = {106.38f, -742.7f, 46.18f};
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = {105.76f, -746.65f, 46.18f};
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2343.53f, 3265.37f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2342.23f, 3267.62f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = {-1041.933f, -2748.167f, 22.0308f};
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = {-1044.841f, -2746.489f, 22.0308f};
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = {-1045.12f, -232.004f, 39.4379f};
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = {-1046.516f, -229.3581f, 39.4379f};
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = {-1083.62f, -260.4167f, 38.1867f};
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = {-1080.974f, -259.0204f, 38.1867f};
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = {-1042.57f, -240.6f, 38.11f};
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = {1385.258f, -2079.949f, 52.7638f};
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {1656.57f, 4849.66f, 42.35f};
			Var0.f_5 = 243782214;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {1656.25f, 4852.24f, 42.35f};
			Var0.f_5 = 714115627;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = {-1051.402f, -474.6847f, 36.6199f};
			Var0.f_5 = 1668106976;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = {-1049.285f, -476.6376f, 36.7584f};
			Var0.f_5 = 1382347031;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = {-1210.957f, -580.8765f, 27.2373f};
			Var0.f_5 = -966790948;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = {-1212.445f, -578.4401f, 27.2373f};
			Var0.f_5 = -2068750132;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-565.1712f, 276.6259f, 83.2863f};
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-561.2863f, 293.5043f, 87.7771f};
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = {-631.96f, -236.33f, 38.21f};
			Var0.f_5 = 1874948872;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = {-630.43f, -238.44f, 38.21f};
			Var0.f_5 = -1965020851;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = {231.62f, 216.23f, 106.4f};
			Var0.f_5 = 1951546856;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = {232.72f, 213.88f, 106.4f};
			Var0.f_5 = -431382051;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = {258.32f, 203.84f, 106.43f};
			Var0.f_5 = -293975210;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = {260.76f, 202.95f, 106.43f};
			Var0.f_5 = -785215289;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = {256.31f, 220.66f, 106.43f};
			Var0.f_5 = -366143778;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = {266.36f, 217.57f, 110.43f};
			Var0.f_5 = 440819155;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-442.66f, 6015.222f, 31.8663f};
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-444.4985f, 6017.06f, 31.8663f};
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = {1855.685f, 3683.93f, 34.5928f};
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1223.35f, -172.41f, 39.98f};
			Var0.f_5 = -320891223;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1220.93f, -173.68f, 39.98f};
			Var0.f_5 = 1511747875;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1211.99f, -190.57f, 39.98f};
			Var0.f_5 = -1517722103;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1213.26f, -192.98f, 39.98f};
			Var0.f_5 = -1093199712;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1217.77f, -201.54f, 39.98f};
			Var0.f_5 = 1902048492;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1219.04f, -203.95f, 39.98f};
			Var0.f_5 = -444768985;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = {2514.32f, -317.34f, 93.32f};
			Var0.f_5 = 404057594;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = {2512.42f, -319.26f, 93.32f};
			Var0.f_5 = -1417472813;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = {2333.23f, 2574.97f, 47.03f};
			Var0.f_5 = -1376084479;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = {2329.65f, 2576.64f, 47.03f};
			Var0.f_5 = 457472151;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {16.1279f, -1114.605f, 29.9469f};
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {18.572f, -1115.495f, 29.9469f};
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {1698.176f, 3751.506f, 34.8553f};
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {1699.937f, 3753.42f, 34.8553f};
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {244.7274f, -44.0791f, 70.91f};
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {243.8379f, -46.5232f, 70.91f};
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {845.3624f, -1024.539f, 28.3448f};
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {842.7684f, -1024.539f, 23.3448f};
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-326.1122f, 6075.27f, 31.6047f};
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-324.273f, 6077.109f, 31.6047f};
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-665.2424f, -944.3256f, 21.9792f};
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-662.6414f, -944.3256f, 21.9792f};
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1313.826f, -389.1259f, 36.8457f};
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1314.465f, -391.6472f, 36.8457f};
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1114.009f, 2689.77f, 18.7041f};
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1112.071f, 2691.505f, 18.7041f};
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-3164.845f, 1081.392f, 20.9887f};
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-3163.812f, 1083.778f, 20.9887f};
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {2570.905f, 303.3556f, 108.8848f};
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {2568.304f, 303.3556f, 108.8848f};
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {813.1779f, -2148.27f, 29.7689f};
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {810.5769f, -2148.27f, 29.7689f};
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {6.8179f, -1098.209f, 29.9469f};
			Var0.f_5 = 1487704245;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {827.5342f, -2160.493f, 29.7688f};
			Var0.f_5 = 1529812051;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1107.01f, 289.38f, 64.76f};
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1101.62f, 290.36f, 64.76f};
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1138.64f, 300.82f, 67.18f};
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1137.05f, 295.59f, 67.18f};
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = {-2053.16f, 3239.49f, 30.5f};
			Var0.f_5 = -621770121;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = {-2054.39f, 3237.23f, 30.5f};
			Var0.f_5 = 1018580481;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = {-108.91f, 6469.11f, 31.91f};
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = {-182.91f, 6168.37f, 32.14f};
			Var0.f_5 = -1331552374;
			set_bit(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-59.89f, -1092.95f, 26.88f};
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-60.55f, -1094.75f, 26.89f};
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-39.13f, -1108.22f, 26.72f};
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-37.33f, -1108.87f, 26.72f};
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1943.73f, 3803.63f, 32.31f};
			Var0.f_5 = -2018911784;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {316.39f, -276.49f, 54.52f};
			Var0.f_5 = -93934272;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {313.96f, -275.6f, 54.52f};
			Var0.f_5 = 667682830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-2965.71f, 484.22f, 16.05f};
			Var0.f_5 = 1876735830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-2965.82f, 481.63f, 16.05f};
			Var0.f_5 = -2112857171;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = {962.1f, -2183.83f, 31.06f};
			Var0.f_5 = 2046930518;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = {961.79f, -2187.08f, 31.06f};
			Var0.f_5 = 1208502884;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = {2508.43f, -336.63f, 115.76f};
			Var0.f_5 = 1986432421;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2255.19f, 322.26f, 184.93f};
			Var0.f_5 = -722798986;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2254.06f, 319.7f, 184.93f};
			Var0.f_5 = 204301578;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2301.13f, 336.91f, 184.93f};
			Var0.f_5 = -320140460;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2298.57f, 338.05f, 184.93f};
			Var0.f_5 = 65222916;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2222.32f, 305.86f, 184.93f};
			Var0.f_5 = -920027322;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2221.19f, 303.3f, 184.93f};
			Var0.f_5 = -58432001;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2280.6f, 265.43f, 184.93f};
			Var0.f_5 = -2007378629;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2278.04f, 266.57f, 184.93f};
			Var0.f_5 = 418772613;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = {778.31f, -1867.49f, 30.66f};
			Var0.f_5 = 1679064921;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = {-721.35f, 91.01f, 56.68f};
			Var0.f_5 = 412198396;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = {-728.84f, 88.64f, 56.68f};
			Var0.f_5 = -1053755588;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2287.62f, 363.9f, 174.93f};
			Var0.f_5 = -53446139;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2289.78f, 362.91f, 174.93f};
			Var0.f_5 = 1333960556;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2289.86f, 362.88f, 174.93f};
			Var0.f_5 = -41786493;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2292.01f, 361.89f, 174.93f};
			Var0.f_5 = 1750120734;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = {1803.94f, 3929.01f, 33.72f};
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-348.81f, -47.26f, 49.39f};
			Var0.f_5 = -2116116146;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-351.26f, -46.41f, 49.39f};
			Var0.f_5 = -74083138;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = {962.9084f, -2105.814f, 34.6432f};
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

bool func_459()
{
	if ((func_250() == -1 || func_250() == 999) && !func_460() == 0)
	{
		return true;
	}
	return false;
}

var func_460()
{
	return Global_25121;
}

int func_461(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
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
				if (func_462(iVar0) || iParam4 == 0)
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

int func_462(int iParam0)
{
	return is_bit_set(Global_101154.f_5919[iParam0], false);
}

void func_463(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_464(iParam0, iVar0);
		iVar0++;
	}
}

void func_464(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_341(iParam0, iParam1, &iVar2, &iVar3);
	if (network_is_game_in_progress())
	{
		iVar0 = func_112(iVar3, -1, 0);
	}
	else
	{
		stat_get_int(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = 0.8f + 0.4f * to_float(iVar0) / 100f;
			set_player_melee_weapon_damage_modifier(player_id(), fVar1);
			break;
		
		case 7:
			if (_get_number_of_instances_of_streamed_script(joaat("armenian3")) != 0 || _get_number_of_instances_of_streamed_script(joaat("trevor3")) != 0)
			{
				Global_88894 = 1;
			}
			else
			{
				fVar1 = 1f - to_float(iVar0) / 100f;
				set_player_noise_multiplier(player_id(), fVar1);
				set_player_sneaking_noise_multiplier(player_id(), fVar1);
				set_player_stealth_perception_modifier(player_id(), fVar1);
			}
			break;
	}
}

void func_465()
{
	struct<50> Var0;
	
	if ((is_ped_injured(player_ped_id()) || !func_37(func_214())) || !func_467())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_286(player_ped_id(), &Var0, 1);
	func_466(1306, Var0[0], -1, 1);
	func_466(1307, Var0[1], -1, 1);
	func_466(1308, Var0[2], -1, 1);
	func_466(1309, Var0[3], -1, 1);
	func_466(1310, Var0[4], -1, 1);
	func_466(1311, Var0[5], -1, 1);
	func_466(1312, Var0[6], -1, 1);
	func_466(1313, Var0[7], -1, 1);
	func_466(1314, Var0[8], -1, 1);
	func_466(1315, Var0[9], -1, 1);
	func_466(1316, Var0[10], -1, 1);
	func_466(1317, Var0[11], -1, 1);
	func_466(1318, Var0.f_13[0], -1, 1);
	func_466(1319, Var0.f_13[1], -1, 1);
	func_466(1320, Var0.f_13[2], -1, 1);
	func_466(1321, Var0.f_13[3], -1, 1);
	func_466(1322, Var0.f_13[4], -1, 1);
	func_466(1323, Var0.f_13[5], -1, 1);
	func_466(1324, Var0.f_13[6], -1, 1);
	func_466(1325, Var0.f_13[7], -1, 1);
	func_466(1326, Var0.f_13[8], -1, 1);
	func_466(1327, Var0.f_13[9], -1, 1);
	func_466(1328, Var0.f_13[10], -1, 1);
	func_466(1329, Var0.f_13[11], -1, 1);
	func_466(1330, Var0.f_26[0], -1, 1);
	func_466(1331, Var0.f_26[1], -1, 1);
	func_466(1332, Var0.f_26[2], -1, 1);
	func_466(1333, Var0.f_26[3], -1, 1);
	func_466(1334, Var0.f_26[4], -1, 1);
	func_466(1335, Var0.f_26[5], -1, 1);
	func_466(1336, Var0.f_26[6], -1, 1);
	func_466(1337, Var0.f_26[7], -1, 1);
	func_466(1338, Var0.f_26[8], -1, 1);
	func_466(1339, Var0.f_26[9], -1, 1);
	func_466(1340, Var0.f_26[10], -1, 1);
	func_466(1341, Var0.f_26[11], -1, 1);
	func_466(1342, Var0.f_39[0], -1, 1);
	func_466(1343, Var0.f_39[1], -1, 1);
	func_466(1344, Var0.f_39[2], -1, 1);
	func_466(1345, Var0.f_39[3], -1, 1);
	func_466(1346, Var0.f_39[4], -1, 1);
	func_466(1347, Var0.f_39[5], -1, 1);
	func_466(1348, Var0.f_39[6], -1, 1);
	func_466(1349, Var0.f_39[7], -1, 1);
	func_466(1350, Var0.f_39[8], -1, 1);
	func_466(1351, Var0.f_49[0], -1, 1);
	func_466(1352, Var0.f_49[1], -1, 1);
	func_466(1353, Var0.f_49[2], -1, 1);
	func_466(1354, Var0.f_49[3], -1, 1);
	func_466(1355, Var0.f_49[4], -1, 1);
	func_466(1356, Var0.f_49[5], -1, 1);
	func_466(1357, Var0.f_49[6], -1, 1);
	func_466(1358, Var0.f_49[7], -1, 1);
	func_466(1359, Var0.f_49[8], -1, 1);
	func_466(1360, func_214(), -1, 1);
	stat_set_bool(joaat("clo_stored_initial"), 1, 1);
	Global_101154.f_1826.f_539.f_3543 = 1;
}

var func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

bool func_467()
{
	if (func_469() && func_468(0))
	{
		return true;
	}
	return false;
}

var func_468(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_469()
{
	return func_468(func_19() + 1);
}

void func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 1:
			set_relationship_between_groups(1, 1166638144, 1862763509);
			set_relationship_between_groups(2, 1862763509, -1865950624);
			set_relationship_between_groups(255, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		case 2:
			set_relationship_between_groups(255, 1166638144, 1862763509);
			set_relationship_between_groups(5, 1862763509, -1865950624);
			set_relationship_between_groups(5, -1865950624, 1862763509);
			set_relationship_between_groups(1, Global_86614, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86614);
			set_relationship_between_groups(1, Global_86615, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86615);
			set_relationship_between_groups(1, Global_86616, 1862763509);
			set_relationship_between_groups(1, 1862763509, Global_86616);
			break;
		
		default:
			break;
	}
}

void func_471()
{
	int iVar0;
	int iVar1;
	
	func_215();
	iVar0 = get_main_player_blip_id();
	if (does_blip_exist(iVar0))
	{
		iVar1 = Global_101154.f_1826.f_539.f_3549;
		if (func_118(14))
		{
			iVar1 = func_216(player_ped_id());
		}
		if (iVar1 == 0)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			set_blip_name_from_text_file(iVar0, "BLIP_TREV");
		}
		else
		{
			set_blip_name_from_text_file(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_472(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_296(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = get_ped_weapontype_in_slot(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
				{
					if (get_max_ammo(iParam0, iVar3, &uVar1))
					{
						set_ped_infinite_ammo(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = get_num_dlc_weapons();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (get_dlc_weapon_data(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (get_ammo_in_ped_weapon(iParam0, iVar3) == -1)
			{
				if (get_max_ammo(iParam0, iVar3, &uVar1))
				{
					set_ped_infinite_ammo(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

void func_473(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id() && get_ped_max_health(iParam0) == 200)
		{
			set_ped_max_health(iParam0, round(IntToFloat(get_ped_max_health(iParam0)) * Global_262145.f_105));
		}
		if (Global_101154.f_1826.f_539.f_290[iVar0] <= 0f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_101154.f_1826.f_539.f_290[iVar0] <= 10f)
		{
			Global_101154.f_1826.f_539.f_290[iVar0] = 10f;
		}
		set_entity_health(iParam0, round(Global_101154.f_1826.f_539.f_290[iVar0] / 100f * to_float(get_ped_max_health(iParam0)) - 100f + 100f));
	}
}

bool func_474(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_475(iParam0))
	{
		return false;
	}
	return true;
}

int func_475(int iParam0)
{
	return func_476(iParam0, Global_35711);
}

bool func_476(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

void func_477(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_478(4, *iParam1, 0);
			func_478(7, *iParam1, 0);
			func_478(8, *iParam1, 0);
			func_478(11, *iParam1, 0);
			break;
		
		case 1:
			func_478(4, *iParam1, 0);
			func_478(7, *iParam1, 0);
			func_478(8, *iParam1, 0);
			func_478(11, *iParam1, 0);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_478(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_478(4, *iParam1, 0);
			func_478(7, *iParam1, 0);
			func_478(8, *iParam1, 0);
			func_478(11, *iParam1, 0);
			break;
	}
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!iParam2)
	{
		if (!does_entity_exist(iParam1))
		{
			return;
		}
	}
	if (Global_34834[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iVar1)
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0 - 1] = Global_34834[iParam0 /*31*/].f_25[iVar0];
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		Global_34834[iParam0 /*31*/].f_24--;
	}
}

void func_479(int iParam0, int iParam1)
{
	func_484(iParam0);
	func_291(iParam0, iParam1);
	func_483(iParam0);
	func_297(iParam0);
	func_482(iParam0);
	func_481(iParam0);
	func_480(iParam0);
}

void func_480(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			Global_101154.f_1826.f_539.f_1556[iVar0] = get_player_wanted_level(player_id());
		}
	}
}

void func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1546[iVar0 /*3*/] = {get_entity_velocity(iParam0)};
	}
}

void func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		if (is_player_switch_in_progress() && get_player_switch_type() != 3)
		{
			if (get_player_switch_state() == 8)
			{
				return;
			}
		}
		Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = {get_entity_coords(iParam0, 1)};
		Global_101154.f_1826.f_539.f_1538[iVar0] = get_entity_heading(iParam0);
		Global_101154.f_1826.f_539.f_1542[iVar0] = get_room_key_from_entity(iParam0);
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_101154.f_1826.f_539.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_483(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_290[iVar0] = to_float(get_entity_health(iParam0)) - 100f / to_float(get_ped_max_health(iParam0)) - 100f * 100f;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (func_37(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_1524[iVar0] = func_310();
	}
}

bool func_485(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!*uParam0.f_39)
	{
		*uParam0.f_7 = 4;
		*uParam0.f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		iVar0 = *uParam0.f_34[iParam1] == 2;
		if (func_39(func_214()) != iParam1 || iVar0)
		{
			iVar1 = false;
			if ((iVar0 || *uParam0.f_24[iParam1] != 0) || ((func_486(iParam1) && func_34(iParam1)) && !*uParam0.f_18[iParam1]))
			{
				if (!*uParam0.f_23)
				{
					if (!is_ped_injured(*uParam0[iParam1]) || iVar0)
					{
						if (*uParam0.f_34[iParam1] != 1 && *uParam0.f_34[iParam1] != 3)
						{
							iVar1 = true;
						}
					}
				}
				else if ((!is_ped_injured(player_ped_id()) && (network_is_game_in_progress() || get_player_wanted_level(player_id()) == 0)) && !is_bit_set(Global_89089.f_47, iParam1))
				{
					iVar1 = true;
				}
			}
			else if (!((is_bit_set(Global_101154.f_7775.f_2[27 /*3*/], true) && !Global_3) && !func_36(0)))
			{
				if (*uParam0.f_23)
				{
					iVar1 = true;
				}
			}
			if (iVar1)
			{
				*uParam0.f_7 = iParam1;
				return true;
			}
		}
	}
	*uParam0.f_39 = 0;
	return false;
}

bool func_486(int iParam0)
{
	if ((Global_101154.f_7775 || Global_3) || func_36(0))
	{
		if (!Global_69489 || (Global_69489 && iParam0 != func_39(func_40())))
		{
			if (((iParam0 == 0 && !func_446(115)) || (iParam0 == 1 && !func_446(116))) || (iParam0 == 2 && !func_446(117)))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_487(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (func_37(iParam1))
	{
		iVar0 = func_79(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			func_641(*iParam0, iParam1, iParam7);
			_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_634(*iParam0);
			func_630(*iParam0, 1, 0);
			func_629(*iParam0);
			func_626(*iParam0);
			func_489(*iParam0, iParam8);
			func_488(*iParam0);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

void func_488(int iParam0)
{
	int iVar0;
	
	if (is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_88980[iVar0]) && Global_88980[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88980[iVar0]))
		{
			Global_88980[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

bool func_489(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_216(iParam0);
	if (func_625(iVar0))
	{
		func_624(iVar0, 0);
		func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_493(iParam0, 1);
		return true;
	}
	if (!iParam1)
	{
		if (func_491(iParam0))
		{
			func_624(iVar0, 0);
			func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_493(iParam0, 1);
			return true;
		}
	}
	iVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_101154.f_7775.f_99.f_58[120] && !Global_101154.f_7775.f_99.f_58[122])
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_101154.f_7775.f_99.f_58[121] = 1;
				return true;
			}
			if (Global_101154.f_7775.f_99.f_58[123])
			{
				Global_101154.f_7775.f_99.f_58[123] = 0;
				if (!is_ped_injured(iParam0))
				{
					if (func_97(iParam0, 3, 169))
					{
						func_175(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return true;
					}
				}
			}
			if (func_97(iParam0, 12, 6))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 17))
			{
				if (!func_490(get_entity_model(iParam0), 12, 17))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 20))
			{
				if (!func_490(get_entity_model(iParam0), 12, 20))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 21))
			{
				if (!func_490(get_entity_model(iParam0), 12, 21))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 22))
			{
				if (!func_490(get_entity_model(iParam0), 12, 22))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 11))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 10))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 50))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 14, 59))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_97(iParam0, 8, 22))
			{
				func_175(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_97(iParam0, 12, 14))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 1:
			if (func_97(iParam0, 12, 13))
			{
				if (!func_490(get_entity_model(iParam0), 12, 13))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 14))
			{
				if (!func_490(get_entity_model(iParam0), 12, 14))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 15))
			{
				if (!func_490(get_entity_model(iParam0), 12, 15))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 4))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 3))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 14, 82))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_97(iParam0, 8, 76))
			{
				func_175(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_97(iParam0, 12, 1))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
		
		case 2:
			if (func_97(iParam0, 12, 12))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 15))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (!iParam1)
			{
				if (func_97(iParam0, 3, 71))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 17))
			{
				if (!func_490(get_entity_model(iParam0), 12, 17))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 18))
			{
				if (!func_490(get_entity_model(iParam0), 12, 18))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 19))
			{
				if (!func_490(get_entity_model(iParam0), 12, 19))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return true;
				}
			}
			if (func_97(iParam0, 12, 7))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 12, 6))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			if (func_97(iParam0, 14, 88))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (func_97(iParam0, 8, 17))
			{
				func_175(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				iVar1 = true;
			}
			if (iVar1)
			{
				return true;
			}
			if (func_97(iParam0, 12, 11))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_490(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_106(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, true);
}

int func_491(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_entity_model(iParam0);
	iVar0 = func_98(iParam0, 4);
	return func_492(iVar1, 4, iVar0);
}

bool func_492(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return true;
			}
		}
	}
	return false;
}

void func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_216(iParam0);
		if (func_37(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_179(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_623(iVar0);
					func_495(iParam0, &(Global_101154.f_1826.f_539[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_286(iParam0, &Var2, 1);
			Global_91068[iVar0 /*65*/] = {Var2};
			if (iParam0 == player_ped_id())
			{
				func_465();
			}
			if (get_hash_key(get_this_script_name()) != get_hash_key("clothes_shop_sp") || (_get_number_of_instances_of_streamed_script(joaat("lester1")) == 0 && _get_number_of_instances_of_streamed_script(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_118(0) && !func_118(1)) && !func_118(2)) && !func_118(3)) && !func_118(4)) && !func_118(9)) && !func_118(10)))
				{
					Global_101154.f_1826.f_539[iVar0 /*65*/] = {Var2};
					Global_101154.f_1826.f_539.f_1619[iVar0] = func_494(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_98(iParam0, func_95(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_101154.f_1826.f_539.f_204[iVar67 /*4*/][iVar0] = func_98(iParam0, func_95(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_101154.f_7775.f_99.f_58[121])
						{
							Global_101154.f_7775.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = get_number_of_ped_drawable_variations(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 += get_number_of_ped_texture_variations(iParam0, iVar4, iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = get_number_of_ped_prop_drawable_variations(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 += get_number_of_ped_prop_texture_variations(iParam0, iVar8, iVar6);
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_495(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_216(iParam0);
		iVar1 = get_entity_model(iParam0);
		iVar3 = false;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !iParam2))
			{
				set_ped_component_variation(iParam0, iVar3, *uParam1.f_13[iVar3], *uParam1[iVar3], *uParam1.f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = false;
		while (iVar3 < 9)
		{
			if (*uParam1.f_39[iVar3] != -1 && *uParam1.f_39[iVar3] != 255)
			{
				set_ped_prop_index(iParam0, iVar3, *uParam1.f_39[iVar3], *uParam1.f_49[iVar3], false);
			}
			else
			{
				clear_ped_prop(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_37(iVar0))
		{
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_59 = *uParam1.f_59;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_60 = *uParam1.f_60;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_61 = *uParam1.f_61;
			if (func_85(iParam0, iVar1, &iVar2, 0))
			{
				func_175(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_62 = *uParam1.f_62;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_63 = *uParam1.f_63;
			Global_101154.f_1826.f_539[iVar0 /*65*/].f_64 = *uParam1.f_64;
			if (func_83(iParam0, iVar1, &iVar2))
			{
				func_175(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			func_196(746, *uParam1.f_60, Global_69309, 1);
			func_196(747, *uParam1.f_61, Global_69309, 1);
			iVar4 = func_99(iParam0, *uParam1.f_13[2], *uParam1[2], 2);
			func_498(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			if (!iParam2)
			{
				iVar5 = func_99(iParam0, *uParam1.f_13[1], *uParam1[1], 1);
				func_498(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69309, 0);
			}
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			func_196(745, *uParam1.f_59, Global_69309, 1);
			func_196(2043, *uParam1.f_59, Global_69309, 1);
			func_496(161, 1, -1, 1);
		}
	}
}

void func_496(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_497())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_113(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

bool func_497()
{
	return true;
	return false;
}

bool func_498(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	var uVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	
	if (!network_is_game_in_progress())
	{
		if ((Global_1315845 != 4 && Global_1315845 != 5) && Global_1315845 != 7)
		{
			return false;
		}
	}
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	if (iParam0 == player_ped_id() && Global_2418472[player_id() /*313*/].f_220 == 2)
	{
		return false;
	}
	Global_69310++;
	iVar5 = get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
		if (!func_197(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_588(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = {Global_69354};
		}
		else
		{
			uVar15 = {func_93(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69311[1 /*14*/] = {func_590(iVar5, 10, 0)};
					if (iParam4 == -1)
					{
						set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_86(iVar0)));
					}
					else
					{
						set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
					}
					if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
					{
						func_588(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69311[1 /*14*/] = {func_590(iVar5, iVar0, uVar15[iVar0])};
					if (is_bit_set(Global_69311[1 /*14*/].f_6, false) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = {Global_69370};
							}
							else
							{
								uVar31 = {func_87(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69311[1 /*14*/] = {func_590(iVar5, 14, uVar31[iVar1])};
								func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
								if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
								{
									func_588(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_86(iVar0)));
								}
								else
								{
									set_ped_component_variation(iParam0, func_86(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_498(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
							{
								func_588(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_590(iVar5, iVar0, func_587(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					uVar41 = {func_93(iVar5, 0)};
					func_498(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_586();
			if (iVar57 != -1)
			{
				func_584(iVar57, 0, Global_69309);
			}
			func_582(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = {func_87(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_590(iVar5, 14, uVar58[iVar1])};
			func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
			{
				func_588(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69310 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_580(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_498(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
		if (_0x341DE7ED1D2A1BFD(iVar68, 838607662, false))
		{
			iVar69 = func_98(iParam0, 1);
			iVar3 = func_580(iParam0, iVar5, 1, iVar69, 14, Global_69311[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_579(iVar5, 1, -1);
			}
		}
		func_189(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			func_588(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_580(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_498(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = -1;
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 6) && _0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 0);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 1);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 2);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 3);
				}
				iVar71 = func_98(iParam0, 11);
				iVar72 = func_98(iParam0, 8);
				iVar73 = func_98(iParam0, 4);
				iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
				if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_102(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_102(iVar5, iParam2, 11, 4);
					}
					if (((_0x341DE7ED1D2A1BFD(iVar70, 320460654, false) || _0x341DE7ED1D2A1BFD(iVar70, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar70, -826135203, false))
					{
					}
					else
					{
						iVar9 = func_98(iParam0, 8);
					}
				}
				iVar74 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
				if (_0x341DE7ED1D2A1BFD(iVar74, -356646862, false))
				{
					iVar75 = func_578(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_580(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar75 = 11;
							iVar70 = func_102(iVar5, iParam2, 11, 4);
							if (!_0x341DE7ED1D2A1BFD(iVar70, -530089825, false))
							{
								iVar75 = -99;
							}
							break;
					}
					if (iVar75 != -99)
					{
						iVar76 = iVar75;
						iVar77 = 0;
						while (iVar77 < 15)
						{
							if (func_577(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = get_ped_texture_variation(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && _0x341DE7ED1D2A1BFD(func_102(iVar5, iParam2, 11, 4), -1200513218, false))
				{
					iVar71 = func_98(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_102(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false))
					{
						iVar78 = func_575(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
						if (iVar78 != -99)
						{
							func_498(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_574(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_102(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_102(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_574(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (_0x341DE7ED1D2A1BFD(iVar70, -1200513218, false) || _0x341DE7ED1D2A1BFD(iVar70, 1965569012, false)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((((_0x341DE7ED1D2A1BFD(iVar70, 684992453, false) || _0x341DE7ED1D2A1BFD(iVar70, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar70, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar70, -820724897, false)) || _0x341DE7ED1D2A1BFD(iVar70, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar70, -872449705, false)) || _0x341DE7ED1D2A1BFD(iVar70, 700658917, false)))
						{
						}
						else
						{
							iVar79 = func_575(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
							if (iVar79 != -99)
							{
								func_498(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_579(iVar5, 11, -1);
									Global_69311[1 /*14*/] = {func_590(iVar5, 11, iVar80)};
									iVar79 = func_575(iVar5, iVar80, iParam2, Global_69311[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_498(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
							}
						}
					}
					else
					{
						Global_69311[1 /*14*/] = {func_590(iVar5, 11, iVar71)};
						iVar81 = Global_69311[1 /*14*/].f_3;
						Global_69311[1 /*14*/] = {func_590(iVar5, 11, iParam2)};
						iVar82 = Global_69311[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69311[1 /*14*/] = {func_590(iVar5, 8, iVar72)};
							iVar83 = Global_69311[1 /*14*/].f_4;
							iVar84 = func_573(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_572(func_102(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_579(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_590(iVar5, 11, iVar84)};
										iVar85 = func_575(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!_0x341DE7ED1D2A1BFD(func_102(iVar5, iParam2, 11, 4), -491588875, false))
									{
										iVar84 = func_579(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_590(iVar5, 11, iVar84)};
										iVar85 = func_575(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_575(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_102(iVar5, iParam2, 11, 3), -1719338724, false))
									{
										if (!func_571(iVar5, func_98(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_102(iVar5, iParam2, 11, 4), -1719338724, false))
									{
										if (!func_571(iVar5, func_98(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_498(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_579(iVar5, 11, -1);
								Global_69311[1 /*14*/] = {func_590(iVar5, 11, iVar84)};
								iVar85 = func_575(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_498(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_498(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
						}
					}
				}
				else
				{
					func_569(iVar5, iParam2);
					set_ped_component_variation(iParam0, 10, 0, false, get_ped_palette_variation(iParam0, 10));
				}
			}
			func_582(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, func_587(iParam0, 8, -1), iParam2, func_587(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_112(2143, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_112(2150, iParam10, 0);
				}
				_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_540(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_582(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_98(iParam0, 11);
			if (func_574(iVar5, iVar86))
			{
				iVar87 = func_573(iVar5, iParam2, Global_69311[1 /*14*/].f_4);
				func_569(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, iParam2, func_98(iParam0, 11), func_98(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_98(iParam0, 7);
				if (!func_537(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					set_ped_component_variation(iParam0, func_86(7), 0, false, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, false)))
			{
				iVar89 = func_112(2090, iParam10, 0);
				iVar90 = func_112(2091, iParam10, 0);
				iVar91 = func_112(2092, iParam10, 0);
				fVar92 = func_536(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 0, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 21, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				iVar93 = 0;
				while (iVar93 < 20)
				{
					_set_ped_face_feature(iParam0, iVar93, 0f);
					iVar93++;
				}
			}
			else
			{
				func_520(iParam0, Global_69309);
			}
			iVar94 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
			iVar95 = get_hash_name_for_component(iParam0, true, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (_0x341DE7ED1D2A1BFD(iVar94, 838607662, false))
			{
				if (!_0x341DE7ED1D2A1BFD(iVar95, 838607662, false))
				{
					iVar96 = func_98(iParam0, 1);
					iVar97 = false;
					while (iVar97 < 9)
					{
						iVar3 = func_580(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_190(iParam0, iVar97);
						if (iVar3 == iVar98)
						{
							clear_ped_prop(iParam0, iVar97);
						}
						iVar97++;
					}
				}
			}
		}
		else if (iParam1 == 4)
		{
			iVar99 = func_98(iParam0, 11);
			iVar100 = func_98(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_102(iVar5, iVar99, 11, 3), -1719338724, false))
				{
					if (!func_571(iVar5, iParam2, func_573(iVar5, iVar100, 0)))
					{
						func_498(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_102(iVar5, iVar99, 11, 4), -1719338724, false))
				{
					if (!func_571(iVar5, iParam2, func_573(iVar5, iVar100, 0)))
					{
						func_498(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_590(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_578(iVar5, func_98(iParam0, 8), func_98(iParam0, 11), iParam2);
			}
			iVar101 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), false);
			if (_0x341DE7ED1D2A1BFD(iVar101, -356646862, false))
			{
				iVar102 = func_578(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_580(iParam0, iVar5, 11, iVar99, 3, 0);
				}
				switch (iVar101)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar102 = 11;
						iVar103 = func_102(iVar5, iParam2, 11, 4);
						if (!_0x341DE7ED1D2A1BFD(iVar103, -530089825, false))
						{
							iVar102 = -99;
						}
						break;
				}
				if (iVar102 != -99)
				{
					iVar104 = iVar102;
					iVar105 = 0;
					while (iVar105 < 15)
					{
						if (func_577(iVar5, iVar104, iVar105) == iVar101)
						{
							iVar11 = iVar105;
							iVar12 = get_ped_texture_variation(iParam0, 3);
						}
						iVar105++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_86(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_86(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_580(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_498(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_578(iVar5, iVar3, func_98(iParam0, 11), func_98(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_519(iParam0))
				{
					iVar106 = func_518(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 += get_ped_texture_variation(iParam0, 9);
						if (!func_517(iParam0, 9, iVar106))
						{
							func_498(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_498(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_498(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_112(2032, -1, 0);
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, func_514(iParam0, iVar107), func_513(iParam0, iVar107), func_512(iParam0, iVar107));
				}
				if (iParam0 == player_ped_id())
				{
					set_player_parachute_variation_override(player_id(), 5, func_514(player_ped_id(), iVar107), func_513(player_ped_id(), iVar107), 0);
					set_player_parachute_pack_tint_index(player_id(), func_512(player_ped_id(), iVar107));
					func_509(player_id(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, false))
					{
						func_498(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_587(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_587(iParam0, 11, -1);
				}
				if (func_508(iVar5, 11, iVar109))
				{
					if (!func_507(iVar5, 4, iVar108))
					{
						if (func_506(iVar5, 4, iVar108, &uVar110))
						{
							func_498(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_507(iVar5, 4, iVar108))
				{
					if (func_505(iVar5, 4, iVar108, &uVar110))
					{
						func_498(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 4)
			{
				iVar111 = get_ped_drawable_variation(iParam0, 6);
				iVar112 = get_ped_texture_variation(iParam0, 6);
				iVar113 = get_hash_name_for_component(iParam0, 6, iVar111, iVar112);
				if (func_504(iVar5, iVar113))
				{
					if (_0x341DE7ED1D2A1BFD(iVar113, 1812005517, false) != func_503(iVar5, iParam2))
					{
						iVar114 = _0xC17AD0E5752BECDA(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							get_variant_component(iVar113, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6)
							{
								if (iVar116 != 0 && iVar116 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										func_498(iParam0, 6, func_89(iVar5, iVar116, 6, 3), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										func_498(iParam0, 6, func_89(iVar5, iVar116, 6, 4), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
								}
							}
							iVar115++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_501(iParam0);
				iVar119 = get_ped_drawable_variation(iParam0, true);
				iVar120 = get_ped_texture_variation(iParam0, true);
				iVar121 = get_hash_name_for_component(iParam0, true, iVar119, iVar120);
				if (_0x341DE7ED1D2A1BFD(iVar121, 838607662, false))
				{
					iVar3 = func_580(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_498(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_580(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_498(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_499(iParam0, &uVar4))
		{
			func_498(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_498(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_498(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_498(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar122 = func_577(iVar5, get_ped_drawable_variation(iParam0, 3), iVar11);
		if (iVar122 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar122, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar122, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 += iVar12;
				func_498(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69310--;
	return true;
}

bool func_499(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_587(player_ped_id(), 2, -1);
	if (func_112(746, Global_69309, 0) != -99 && func_467())
	{
		if (func_500() == 4)
		{
			return true;
		}
		if (func_112(746, Global_69309, 0) == 0 && func_112(747, Global_69309, 0) == 0)
		{
			if (func_287(161, Global_69309))
			{
				if (func_112(2043, Global_69309, 0) == 0)
				{
					return false;
				}
			}
			else if (func_112(745, Global_69309, 0) == 0)
			{
				return false;
			}
		}
		iVar0 = func_112(746, Global_69309, 0);
		iVar1 = func_112(747, Global_69309, 0);
		if (!func_517(iParam0, iVar1, iVar0))
		{
			if (func_287(161, Global_69309))
			{
				*uParam1 = func_112(2043, Global_69309, 0);
			}
			else
			{
				*uParam1 = func_112(745, Global_69309, 0);
			}
			func_196(746, -99, Global_69309, 1);
			func_196(747, 2, Global_69309, 1);
			return true;
		}
	}
	return false;
}

var func_500()
{
	return Global_1315845;
}

void func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_ped_drawable_variation(iParam0, 11);
	iVar2 = get_ped_texture_variation(iParam0, 11);
	iVar3 = get_ped_drawable_variation(iParam0, true);
	iVar4 = get_ped_texture_variation(iParam0, true);
	iVar5 = get_ped_drawable_variation(iParam0, 8);
	iVar6 = get_ped_texture_variation(iParam0, 8);
	iVar7 = get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar8 = get_hash_name_for_component(iParam0, true, iVar3, iVar4);
	iVar9 = get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	if (_0x341DE7ED1D2A1BFD(iVar7, -317649054, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar8, 72391838, false))
		{
			if (!_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
			{
				iVar1--;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar7, -1889900289, false))
		{
			iVar1++;
		}
		set_ped_component_variation(iParam0, 11, iVar1, iVar2, get_ped_palette_variation(iParam0, 11));
	}
	iVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, 572416369, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				iVar10 = true;
				break;
		}
	}
	else
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, -196114988, false))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case 1876083388:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				iVar10 = true;
				break;
			}
	}
	if (iVar10)
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false) || _0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = false;
			}
			else
			{
				iVar5 = 14;
				iVar6 = false;
			}
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar8, -1409448021, false))
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, 1569775397, false))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_502(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, false))
	{
		iVar5--;
	}
	else
	{
		iVar5 = func_502(iParam0, 0);
		iVar6 = iVar2;
	}
	set_ped_component_variation(iParam0, 8, iVar5, iVar6, get_ped_palette_variation(iParam0, 8));
}

var func_502(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar17;
	
	iVar17 = get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (iVar17)
	{
		if (iParam1)
		{
			get_shop_ped_component(-367850957, &Var0);
		}
		else
		{
			get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1)
	{
		get_shop_ped_component(555191698, &Var0);
	}
	else
	{
		get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

int func_503(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_102(iParam0, iParam1, 4, 3);
				iVar1 = func_572(iVar0);
			}
			iVar2 = 1;
			if (((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, false))
			{
				iVar2 = 0;
			}
			switch (iVar0)
			{
				case -439764935:
				case 1858824227:
				case -44268217:
				case 301706885:
				case 1283072893:
				case -1590178565:
				case 1995307108:
				case 1029014836:
				case -365568266:
				case -138446327:
				case -2034722819:
				case -1219513062:
				case 153704652:
				case 356276239:
				case 586511233:
				case 1558996842:
				case 1183988406:
				case 1000678684:
				case 761792674:
				case -145679239:
				case 686423978:
				case -763407658:
				case 74266289:
				case 987390769:
				case 1591372991:
				case 1834027448:
				case 913054691:
				case 1142372153:
				case -1698011990:
				case -1443101939:
				case 2133699953:
				case -1924511318:
				case -475531676:
				case -237137197:
				case 754461254:
				case -1155840382:
				case 629180074:
				case 859251223:
				case 1610316715:
				case 901392169:
				case -92983136:
				case 1346362420:
				case 485782942:
				case 312004063:
				case 6695290:
				case 1724446270:
				case -448105673:
				case -611098679:
				case -1111088081:
				case -1406369540:
				case -1912159043:
				case 2076516410:
				case 1919618438:
				case 45227112:
				case -2129094253:
				case -421370587:
				case -675363106:
					iVar2 = 0;
					break;
			}
			return iVar2;
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_102(iParam0, iParam1, 4, 4);
				iVar1 = func_572(iVar0);
			}
			if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || _0x341DE7ED1D2A1BFD(iVar0, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar0, 2106216756, false)) || _0x341DE7ED1D2A1BFD(iVar0, -761463976, false)) || _0x341DE7ED1D2A1BFD(iVar0, 684992453, false)) || _0x341DE7ED1D2A1BFD(iVar0, 916636514, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar0, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1207283343, false)) || _0x341DE7ED1D2A1BFD(iVar0, -849839091, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2088146832, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar0, -430330349, false)) || _0x341DE7ED1D2A1BFD(iVar0, -1103045158, false)) || _0x341DE7ED1D2A1BFD(iVar0, 1055526375, false)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_505(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_102(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_506(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_102(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_507(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (_0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 4, 4), -1100807313, false))
						{
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

int func_508(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam2, 11, 4), -530089825, false);
					}
					break;
			}
			break;
	}
	return false;
}

void func_509(int iParam0, int iParam1)
{
	if (func_511())
	{
		if (iParam1 > 46)
		{
			set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_510())
	{
		if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

int func_510()
{
	return is_dlc_present(1428761799);
}

int func_511()
{
	return is_dlc_present(-1005876368);
}

bool func_512(int iParam0, int iParam1)
{
	return false;
}

int func_513(int iParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return iParam1 - 52;
	}
	if (iParam1 > 46)
	{
		return iParam1 - 47;
	}
	if (iParam1 > 26)
	{
		return iParam1 - 27;
	}
	if (iParam1 > 0)
	{
		return iParam1 - 1;
	}
	return iParam1;
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = get_ped_drawable_variation(iParam0, 11);
	if (get_ped_drawable_variation(iParam0, 9) != 0)
	{
		iVar1 = true;
	}
	iVar2 = get_entity_model(iParam0);
	iVar3 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
	if (_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = get_hash_name_for_component(iParam0, 11, iVar0, get_ped_texture_variation(iParam0, 11));
		if (_0x341DE7ED1D2A1BFD(iVar5, 655081063, false))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -530089825, false))
		{
			if (iVar1)
			{
				return 6 + iVar4;
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -713698407, false))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1882920022, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -317649054, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1536649085, false))
		{
			iVar6 = func_516(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return 2 + iVar4;
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_572(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return 7 + iVar4;
						break;
					
					default:
						iVar0 = func_572(iVar5);
						break;
					}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 248194463, false))
		{
			if (_0x341DE7ED1D2A1BFD(iVar5, -1347486026, false))
			{
				return 3 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 396458410, false))
		{
			iVar7 = func_515(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_572(iVar5);
					break;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -779835469, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1119232689, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2102859770, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1784133476, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1607949555, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1976716889, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2099109084, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1488441032, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1719167561, false) || _0x341DE7ED1D2A1BFD(iVar5, 1431529976, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1274099003, false) || _0x341DE7ED1D2A1BFD(iVar5, 1723403459, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 912543594, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -1086258388, false) || _0x341DE7ED1D2A1BFD(iVar5, 103539798, false)) || _0x341DE7ED1D2A1BFD(iVar5, -994703884, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2044466679, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (iVar1)
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2020757158, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1064262817, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1419806467, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 7 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1053842259, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1358888880, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -441291342, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -747583185, false))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (iVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
					{
						return 51;
					}
					else if (iParam1 > 26)
					{
						return 50;
					}
					else if (iParam1 > 0)
					{
						return 49;
					}
					else
					{
						return 48;
					}
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1986415230, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2088146832, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -785939537, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -872449705, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 700658917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1714969731, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 745826556, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1055526375, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 144417099, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 492620493, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -416620954, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -102825006, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -733792105, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 137011325, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -641612092, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1351486939, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2119756144, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1507532917, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 947651647, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1965569012, false) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2026620439, false) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1410897066, false))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -2017999390, false) || _0x341DE7ED1D2A1BFD(iVar5, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar5, -826135203, false))
		{
			return 7 + iVar4;
		}
		else
		{
			iVar0 = func_572(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 9:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 10:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 4 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 9:
				return 2 + iVar4;
				break;
			
			case 10:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 4 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			}
	}
	return 1 + iVar4;
	return 0;
}

int func_515(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_516(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_590(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = {func_93(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_517(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = {func_87(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_517(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69311[2 /*14*/] = {func_590(iVar0, 14, iVar6)};
									if (Global_69311[2 /*14*/].f_12 == iVar5)
									{
										if (func_517(iParam0, 14, iVar6))
										{
											if (!func_100(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69311[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_98(iParam0, iVar4);
						Global_69311[2 /*14*/] = {func_590(iVar0, iVar4, iVar1)};
						if (!func_100(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69311[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579)
		{
			if (func_112(1749, Global_69309, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = {func_87(iVar0, iParam2)};
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_517(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_86(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_86(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_508(iVar0, 11, func_98(iParam0, 11)))
			{
				if (func_506(iVar0, 4, iParam2, &uVar45))
				{
					return func_517(iParam0, 4, uVar45);
				}
			}
			else if (func_505(iVar0, 4, iParam2, &uVar45))
			{
				return func_517(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_518(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam1 == 11)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 16 && iParam2 <= 31)) || (iParam2 >= 80 && iParam2 <= 95)) || (iParam2 >= 140 && iParam2 <= 155)) || (iParam2 >= 188 && iParam2 <= 203))
			{
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 108 && iParam2 <= 123))
			{
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107)
			{
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171)
			{
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187)
			{
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219)
			{
				return 16;
			}
			else if ((iParam2 >= 220 && iParam2 <= 235) || (iParam2 >= 124 && iParam2 <= 139))
			{
				return 26;
			}
			else if (iParam2 == 236)
			{
				return 21;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_102(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = _0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_89(iParam0, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 176 && iParam2 <= 191)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 208 && iParam2 <= 223)) || (iParam2 >= 240 && iParam2 <= 255))
			{
				return 1;
			}
			else if (((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 112 && iParam2 <= 127)) || (iParam2 >= 128 && iParam2 <= 143))
			{
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63)
			{
				return 11;
			}
			else if ((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 160 && iParam2 <= 175))
			{
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239)
			{
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159)
			{
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95)
			{
				return 31;
			}
			else if (iParam2 >= 256)
			{
				iVar6 = func_102(iParam0, iParam2, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = _0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_89(iParam0, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

bool func_519(int iParam0)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_98(iParam0, 9) != 0)
			{
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_98(iParam0, 9) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_520(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	
	if (!has_ped_head_blend_finished(iParam0))
	{
	}
	_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_112(2087, iParam1, 0);
	iVar11 = func_112(2088, iParam1, 0);
	iVar12 = func_112(2089, iParam1, 0);
	iVar13 = func_112(2090, iParam1, 0);
	iVar14 = func_112(2091, iParam1, 0);
	iVar15 = func_112(2092, iParam1, 0);
	fVar16 = func_536(134, iParam1);
	fVar17 = func_536(135, iParam1);
	fVar18 = func_536(136, iParam1);
	iVar19 = func_287(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != iVar19)
	{
		set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, iVar19);
		iVar20 = func_112(2093, iParam1, 0);
		if (iVar20 > 0)
		{
			func_521(iParam0, iParam1, 0);
		}
	}
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_535(iVar1);
		if (!iParam2)
		{
			fVar3 = func_536(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_534(iVar2, iParam1);
		}
		_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_533(iVar4);
		iVar6 = func_532(iVar5);
		iVar7 = func_531(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!iParam2)
			{
				iVar10 = func_528(iVar6, iParam1, -1);
				fVar11 = func_536(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_527(iVar6, iParam1);
				fVar11 = func_534(iVar7, iParam1);
			}
			set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_526(iVar5);
			iVar9 = func_525(iVar5);
			if (iVar8 != -1)
			{
				if (!iParam2)
				{
					iVar13 = func_112(iVar8, iParam1, 0);
					iVar14 = func_112(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_524(iVar8, iParam1);
					iVar14 = func_524(iVar9, iParam1);
				}
				func_523(iVar13, &iVar12, &iVar15);
				_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_522(&iParam0, iParam1, iParam2);
}

void func_522(int iParam0, int iParam1, int iParam2)
{
	Vector3 fVar0;
	
	if (!iParam2)
	{
		fVar0 = func_536(157, iParam1);
	}
	else
	{
		fVar0 = func_534(157, iParam1);
	}
	if (*iParam0 == player_ped_id())
	{
	}
	_set_ped_eye_color(*iParam0, round(fVar0));
}

void func_523(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = (iParam0 && 65535);
	*uParam2 = iVar0;
}

int func_524(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_113(iParam1)];
	if (set_userids_uihidden(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2151;
		
		case 1:
			return 2152;
		
		case 5:
			return 2153;
		
		case 8:
			return 2154;
		
		case 10:
			return 2149;
		
		default:
	}
	return -1;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2144;
		
		case 1:
			return 2145;
		
		case 5:
			return 2146;
		
		case 8:
			return 2147;
		
		case 10:
			return 2148;
		
		default:
	}
	return -1;
}

int func_527(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_528(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_530(iParam0, iParam1);
	iVar2 = func_529(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_529(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_534(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2489085[iParam0 /*5*/][func_113(iParam1)];
	if (_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_536(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2489085[iParam0 /*5*/][func_113(iParam1)];
	if (stat_get_float(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2560803 == iParam1)
		{
			iVar2 = Global_2560802;
			iVar1 = Global_2560801;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_102(iParam0, iParam1, 7, 3);
			iVar1 = func_572(iVar2);
			Global_2560803 = iParam1;
			Global_2560802 = iVar2;
			Global_2560801 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2560806 == iParam3)
		{
			iVar4 = Global_2560805;
			iVar3 = Global_2560804;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_102(iParam0, iParam3, 11, 3);
			iVar3 = func_572(iVar4);
			Global_2560806 = iParam3;
			Global_2560805 = iVar4;
			Global_2560804 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2560809 == iParam4)
		{
			iVar6 = Global_2560808;
			iVar5 = Global_2560807;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_102(iParam0, iParam4, 8, 3);
			iVar5 = func_572(iVar6);
			Global_2560809 = iParam4;
			Global_2560808 = iVar6;
			Global_2560807 = iVar5;
		}
		if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, false))
		{
			if (iParam9 != -99)
			{
				iVar7 = -1;
				if (iParam9 >= 327)
				{
					iVar7 = func_102(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return false;
				}
				switch (iVar7)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
						return false;
						break;
					}
				}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1473812293, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, 1396865968, false))
				{
					if ((((((((((((((((((((((((((((((_0x341DE7ED1D2A1BFD(iVar4, -870074461, false) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1119232689, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2102859770, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1784133476, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1274099003, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2020757158, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1507532917, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1446333198, false)) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, false)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, false)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
					{
						return false;
					}
					else if (func_539(iParam0, iParam3))
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_539(iParam0, iParam3))
				{
					return false;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, false))
				{
					if (((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, false))
					{
						return false;
					}
				}
			}
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -353070590, false))
			{
				if (((_0x341DE7ED1D2A1BFD(iVar4, -870074461, false) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, false))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 654065530, false))
			{
				if (_0x341DE7ED1D2A1BFD(iVar4, -7109286, false) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 596326873, false))
		{
			if (iParam3 != -99)
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, -319568873, false))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return false;
					}
				}
				if (iParam3 == 236)
				{
					if (_0x341DE7ED1D2A1BFD(iVar2, 525778571, false))
					{
						return false;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 1625463492, false)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar4, -779835469, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1086258388, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1021189127, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1939378450, false)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, false)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar4, -672871169, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, false)) || _0x341DE7ED1D2A1BFD(iVar4, -196114988, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1322269404, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1655154167, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1607949555, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, false)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, false)) || _0x341DE7ED1D2A1BFD(iVar4, -2017999390, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, false)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, false)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, false)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar4, -491588875, false))
				{
					return false;
				}
				else if (!_0x341DE7ED1D2A1BFD(iVar2, 525778571, false))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, false))
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -319568873, false))
		{
			if (iParam8 != -99)
			{
				return false;
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -713698407, false))
		{
			if (iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam9, 14, 3), -713698407, true))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return false;
			}
		}
		else if ((iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_102(iParam0, iParam9, 14, 3), -713698407, true)) && iParam1 != 0)
		{
			return false;
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1119006951, false))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 248194463, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572350888, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1817355735, false)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, false)) || _0x341DE7ED1D2A1BFD(iVar4, 140732128, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1863955539, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, false)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, false)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, false)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, false)) || _0x341DE7ED1D2A1BFD(iVar4, 1538937264, false)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, false)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, false)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, false)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, false))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, -1778265882, false)) || _0x341DE7ED1D2A1BFD(iVar6, 1965569012, false)) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, false)) || _0x341DE7ED1D2A1BFD(iVar6, -1914383230, false)) || _0x341DE7ED1D2A1BFD(iVar6, 1553766533, false)) || _0x341DE7ED1D2A1BFD(iVar6, 505220913, false))
				{
					return false;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return false;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return false;
				}
			}
			if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 2066241403, false))
			{
				return false;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -920534092, false)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_574(iParam0, iParam3)) || iVar3 == 13)
				{
					if (((_0x341DE7ED1D2A1BFD(iVar4, -1446333198, false) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, false)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, false)) || _0x341DE7ED1D2A1BFD(iVar4, -7109286, false))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				{
				}
				else
				{
					iVar0 = func_98(iParam6, 11);
					{
						return true;
					}
					if (iParam7 == 1)
					{
						{
							return true;