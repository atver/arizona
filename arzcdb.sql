-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1
-- Время создания: Мар 16 2021 г., 00:52
-- Версия сервера: 10.4.14-MariaDB
-- Версия PHP: 7.4.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `arzcdb`
--

-- --------------------------------------------------------

--
-- Структура таблицы `accounts`
--

CREATE TABLE `accounts` (
  `ID` int(11) NOT NULL,
  `NickName` varchar(24) CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `Password` varchar(64) NOT NULL DEFAULT 'NULL',
  `RegIP` varchar(16) NOT NULL DEFAULT 'No IP Adress',
  `OldIP` varchar(16) NOT NULL DEFAULT 'No IP Adress',
  `Referal` varchar(24) NOT NULL DEFAULT 'No Referal',
  `Mail` varchar(50) NOT NULL DEFAULT 'No Mail Adress',
  `Level` int(11) NOT NULL,
  `Exp` int(11) NOT NULL,
  `Sex` int(11) NOT NULL,
  `Race` int(11) NOT NULL,
  `Admin` int(11) NOT NULL,
  `Money` int(11) NOT NULL,
  `Bank` int(11) NOT NULL,
  `Wanted` int(11) NOT NULL,
  `VIP` int(11) NOT NULL,
  `Leader` int(11) NOT NULL,
  `Member` int(11) NOT NULL,
  `Rank` int(11) NOT NULL,
  `Warns` int(11) NOT NULL,
  `TimeToLastWarn` int(11) NOT NULL,
  `HouseKey` int(11) NOT NULL,
  `FWarns` int(11) NOT NULL,
  `Skin` int(11) NOT NULL,
  `TelNum` int(11) NOT NULL,
  `TelWork` int(11) NOT NULL,
  `TelBalance` int(11) NOT NULL,
  `Phone` int(11) NOT NULL,
  `Job` int(11) NOT NULL,
  `MuteTime` int(11) NOT NULL,
  `FMuteTime` int(11) NOT NULL,
  `JailTime` int(11) NOT NULL,
  `BailPrice` int(11) NOT NULL,
  `KungfuStyle` int(11) NOT NULL,
  `KneeheadStyle` int(11) NOT NULL,
  `BoxingStyle` int(11) NOT NULL,
  `ElbowStyle` int(11) NOT NULL,
  `Style` int(11) NOT NULL,
  `DropCarTime` int(11) NOT NULL,
  `Pistol_Skill` int(11) NOT NULL,
  `SDPistol_Skill` int(11) NOT NULL,
  `Eagle_Skill` int(11) NOT NULL,
  `ShotGun_Skill` int(11) NOT NULL,
  `UZI_Skill` int(11) NOT NULL,
  `MP5_Skill` int(11) NOT NULL,
  `AK47_Skill` int(11) NOT NULL,
  `M4_Skill` int(11) NOT NULL,
  `Sniper_Skill` int(11) NOT NULL,
  `BlackList` int(11) NOT NULL,
  `BankPass` int(11) NOT NULL DEFAULT 1,
  `ZKP` int(11) NOT NULL,
  `Heal` int(11) NOT NULL,
  `Fullness` int(11) NOT NULL,
  `Pack` int(11) NOT NULL,
  `Prison` int(11) NOT NULL,
  `HospCity` int(11) NOT NULL,
  `SkillLevel` int(11) NOT NULL DEFAULT 1,
  `VirMoney` int(11) NOT NULL,
  `OldRepl` int(11) NOT NULL,
  `AllRepl` int(11) NOT NULL,
  `Credit` int(11) NOT NULL,
  `Demorgan` int(11) NOT NULL,
  `FeFinder` int(11) NOT NULL,
  `Obmen` int(11) NOT NULL,
  `ContractTime` int(11) NOT NULL,
  `PlayedTime` int(11) NOT NULL,
  `AdmAction` int(11) NOT NULL,
  `DepChat` int(11) NOT NULL,
  `VipChat` int(11) NOT NULL,
  `FamilyChat` int(11) NOT NULL,
  `NewsChat` int(11) NOT NULL,
  `Racia` int(11) NOT NULL,
  `RabRacia` int(11) NOT NULL,
  `VipTime` int(11) NOT NULL,
  `Merrit` varchar(24) CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `ShowCase` int(11) NOT NULL,
  `HP` float NOT NULL,
  `HungryShow` int(11) NOT NULL,
  `Hospital` int(11) NOT NULL,
  `pSlotItem0` int(11) NOT NULL,
  `pSlotItem1` int(11) NOT NULL,
  `pSlotItem2` int(11) NOT NULL,
  `pSlotItem3` int(11) NOT NULL,
  `pSlotItem4` int(11) NOT NULL,
  `pSlotItem5` int(11) NOT NULL,
  `More` int(11) NOT NULL,
  `KillShow` int(11) NOT NULL,
  `Planshet` int(11) NOT NULL,
  `APromo` int(11) NOT NULL,
  `FamilyMember` int(11) NOT NULL,
  `FamilyMute` int(11) NOT NULL DEFAULT 0,
  `Family` int(11) NOT NULL,
  `NameFamily` int(11) NOT NULL,
  `NameFamily2` varchar(15) NOT NULL,
  `Pcix` int(11) NOT NULL,
  `tattoo1` int(11) NOT NULL,
  `tattoo2` int(11) NOT NULL,
  `tattoo3` int(11) NOT NULL,
  `tattoo4` int(11) NOT NULL,
  `Deposit` int(11) NOT NULL,
  `DepositChar` int(11) NOT NULL,
  `DepositChar2` int(11) NOT NULL,
  `Google` varchar(32) NOT NULL DEFAULT '0',
  `EmailAuth` int(11) NOT NULL,
  `LastIP` varchar(16) NOT NULL,
  `Event` int(11) NOT NULL,
  `Reputation` int(11) NOT NULL,
  `InvLang` int(11) NOT NULL,
  `ShowDokument` int(11) NOT NULL,
  `CarSkill` int(11) NOT NULL,
  `CarSkillNo` int(11) NOT NULL,
  `RespawnChat` int(11) NOT NULL,
  `Weapons` varchar(56) NOT NULL DEFAULT '0,0,0,0,0,0,0,0,0,0,0,0,0',
  `Online_status` int(11) NOT NULL,
  `donation` int(11) NOT NULL,
  `datareg` varchar(12) NOT NULL,
  `ChestTime` int(11) NOT NULL,
  `SlotItem6` int(11) NOT NULL,
  `SlotItem7` int(11) NOT NULL,
  `BuySlot` int(11) NOT NULL,
  `InvColors` int(11) NOT NULL,
  `TypeSpeed` int(11) NOT NULL,
  `DamageInfo` int(11) NOT NULL,
  `InfoRP` text NOT NULL,
  `Item` text NOT NULL,
  `ItemKolvo` text NOT NULL,
  `Aks` text NOT NULL,
  `ChestTime2` int(11) NOT NULL,
  `Pos_X` float NOT NULL,
  `Pos_Y` float NOT NULL,
  `Pos_Z` float NOT NULL,
  `Pos_A` float NOT NULL,
  `MoreHouses` int(11) NOT NULL,
  `FullDostup` int(11) NOT NULL,
  `AWarns` int(11) NOT NULL,
  `Setcmd` text NOT NULL,
  `RubMoney` int(11) NOT NULL,
  `MyPrefix` text NOT NULL,
  `GunLic` int(11) NOT NULL,
  `BoatLic` int(11) NOT NULL,
  `FishLic` int(11) NOT NULL,
  `FlyLic` int(11) NOT NULL,
  `CarLic` int(11) NOT NULL,
  `BikeLic` int(11) NOT NULL,
  `Banking` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=cp1251;

--
-- Дамп данных таблицы `accounts`
--

INSERT INTO `accounts` (`ID`, `NickName`, `Password`, `RegIP`, `OldIP`, `Referal`, `Mail`, `Level`, `Exp`, `Sex`, `Race`, `Admin`, `Money`, `Bank`, `Wanted`, `VIP`, `Leader`, `Member`, `Rank`, `Warns`, `TimeToLastWarn`, `HouseKey`, `FWarns`, `Skin`, `TelNum`, `TelWork`, `TelBalance`, `Phone`, `Job`, `MuteTime`, `FMuteTime`, `JailTime`, `BailPrice`, `KungfuStyle`, `KneeheadStyle`, `BoxingStyle`, `ElbowStyle`, `Style`, `DropCarTime`, `Pistol_Skill`, `SDPistol_Skill`, `Eagle_Skill`, `ShotGun_Skill`, `UZI_Skill`, `MP5_Skill`, `AK47_Skill`, `M4_Skill`, `Sniper_Skill`, `BlackList`, `BankPass`, `ZKP`, `Heal`, `Fullness`, `Pack`, `Prison`, `HospCity`, `SkillLevel`, `VirMoney`, `OldRepl`, `AllRepl`, `Credit`, `Demorgan`, `FeFinder`, `Obmen`, `ContractTime`, `PlayedTime`, `AdmAction`, `DepChat`, `VipChat`, `FamilyChat`, `NewsChat`, `Racia`, `RabRacia`, `VipTime`, `Merrit`, `ShowCase`, `HP`, `HungryShow`, `Hospital`, `pSlotItem0`, `pSlotItem1`, `pSlotItem2`, `pSlotItem3`, `pSlotItem4`, `pSlotItem5`, `More`, `KillShow`, `Planshet`, `APromo`, `FamilyMember`, `FamilyMute`, `Family`, `NameFamily`, `NameFamily2`, `Pcix`, `tattoo1`, `tattoo2`, `tattoo3`, `tattoo4`, `Deposit`, `DepositChar`, `DepositChar2`, `Google`, `EmailAuth`, `LastIP`, `Event`, `Reputation`, `InvLang`, `ShowDokument`, `CarSkill`, `CarSkillNo`, `RespawnChat`, `Weapons`, `Online_status`, `donation`, `datareg`, `ChestTime`, `SlotItem6`, `SlotItem7`, `BuySlot`, `InvColors`, `TypeSpeed`, `DamageInfo`, `InfoRP`, `Item`, `ItemKolvo`, `Aks`, `ChestTime2`, `Pos_X`, `Pos_Y`, `Pos_Z`, `Pos_A`, `MoreHouses`, `FullDostup`, `AWarns`, `Setcmd`, `RubMoney`, `MyPrefix`, `GunLic`, `BoatLic`, `FishLic`, `FlyLic`, `CarLic`, `BikeLic`, `Banking`) VALUES
(1, 'John_Doe', '111111', '127.0.0.1', '127.0.0.1', '', 'No Mail Adress', 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 88, 0, 0, 0, 1, 78, 0, 0, 0, 0, 0, 1, 0, 527, 0, 0, 0, 0, 0, 0, 1, 0, 'None', 0, 100, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, 0, 0, 0, '0', 0, '127.0.0.1', 0, 0, 0, 0, 0, 0, 0, '0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ', 0, 0, '2021-3-15', 0, 0, 0, 0, 0, 0, 0, '', '312,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,', '1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,', '0,0,0,0,0,0,0,0,', 0, 0, 0, 0, 0, 0, 2, 0, '1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,', 0, '', -2, -2, 0, -2, -2, -2, 0),
(2, 'Jane_Doe', '111111', '127.0.0.1', '127.0.0.1', '', 'No Mail Adress', 2, 0, 2, 0, 8, 1450, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 12, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 92, 0, 0, 0, 1, 78, 0, 0, 0, 0, 0, 1, 2, 1575, 0, 0, 0, 0, 0, 0, 1, 0, 'None', 0, 100, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, 0, 0, 0, '0', 0, '127.0.0.1', 0, 0, 0, 0, 0, 0, 0, '0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ', 0, 0, '2021-3-15', 0, 0, 0, 0, 61, 1, 0, '', '312,374,377,375,376,372,373,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,', '1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,', '0,0,0,0,0,0,0,0,', 0, 0, 0, 0, 0, 0, 2, 0, '1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,', 0, '', 365, 365, 365, 365, 365, 365, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `admin`
--

CREATE TABLE `admin` (
  `admid` int(11) NOT NULL,
  `name` varchar(24) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `level` int(2) NOT NULL,
  `password` varchar(32) NOT NULL DEFAULT 'qwerty',
  `last_connect` varchar(20) NOT NULL,
  `put_admin` varchar(24) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL,
  `data` varchar(20) NOT NULL,
  `a_goto` int(1) NOT NULL,
  `a_gethere` int(1) NOT NULL,
  `a_spec` int(1) NOT NULL,
  `online_monday` int(11) NOT NULL,
  `online_tuesday` int(11) NOT NULL,
  `online_wednesday` int(11) NOT NULL,
  `online_thursday` int(11) NOT NULL,
  `online_friday` int(11) NOT NULL,
  `online_saturday` int(11) NOT NULL,
  `online_sunday` int(11) NOT NULL,
  `kicked` int(11) NOT NULL DEFAULT 0,
  `kicked_reason` varchar(30) NOT NULL DEFAULT 'None',
  `skicked` int(11) NOT NULL DEFAULT 0,
  `warned` int(11) NOT NULL DEFAULT 0,
  `warned_reason` varchar(30) NOT NULL DEFAULT 'None',
  `offwarned` int(11) NOT NULL DEFAULT 0,
  `offwarned_reason` varchar(30) NOT NULL DEFAULT 'None',
  `baned` int(11) NOT NULL DEFAULT 0,
  `baned_reason` varchar(30) NOT NULL DEFAULT 'None',
  `offbaned` int(11) NOT NULL DEFAULT 0,
  `offbaned_reason` varchar(30) NOT NULL DEFAULT 'None',
  `muted` int(11) NOT NULL DEFAULT 0,
  `muted_reason` varchar(30) NOT NULL DEFAULT 'None',
  `ansed` int(11) NOT NULL DEFAULT 0,
  `a_infonewpl` int(1) NOT NULL DEFAULT 1,
  `akilllist` int(1) NOT NULL,
  `aip` int(1) NOT NULL,
  `agoto` int(1) NOT NULL,
  `agethere` int(1) NOT NULL,
  `aspectate` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `admin`
--

INSERT INTO `admin` (`admid`, `name`, `level`, `password`, `last_connect`, `put_admin`, `data`, `a_goto`, `a_gethere`, `a_spec`, `online_monday`, `online_tuesday`, `online_wednesday`, `online_thursday`, `online_friday`, `online_saturday`, `online_sunday`, `kicked`, `kicked_reason`, `skicked`, `warned`, `warned_reason`, `offwarned`, `offwarned_reason`, `baned`, `baned_reason`, `offbaned`, `offbaned_reason`, `muted`, `muted_reason`, `ansed`, `a_infonewpl`, `akilllist`, `aip`, `agoto`, `agethere`, `aspectate`) VALUES
(1, 'John_Doe', 8, '111111', '2021-03-15', 'John_Doe', '2021-03-15', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'None', 0, 0, 'None', 0, 'None', 0, 'None', 0, 'None', 0, 'None', 0, 0, 0, 0, 0, 0, 0),
(2, 'Jane_Doe', 8, '111111', '2021-03-15', 'Jane_Doe', '2021-03-15', 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 'None', 0, 0, 'None', 0, 'None', 0, 'None', 0, 'None', 0, 'None', 0, 0, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `anticheat_settings`
--

CREATE TABLE `anticheat_settings` (
  `ac_code` int(2) NOT NULL,
  `ac_code_trigger_type` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `anticheat_settings`
--

INSERT INTO `anticheat_settings` (`ac_code`, `ac_code_trigger_type`) VALUES
(0, 1),
(1, 1),
(2, 1),
(3, 1),
(4, 1),
(5, 1),
(6, 1),
(7, 1),
(8, 1),
(9, 1),
(10, 1),
(11, 1),
(12, 1),
(13, 1),
(14, 0),
(15, 2),
(16, 2),
(17, 2),
(18, 1),
(19, 1),
(20, 1),
(21, 1),
(22, 1),
(23, 1),
(24, 1),
(25, 1),
(26, 1),
(27, 1),
(28, 1),
(29, 1),
(30, 1),
(31, 2),
(32, 2),
(33, 2),
(34, 2),
(35, 1),
(36, 0),
(37, 0),
(38, 0),
(39, 0),
(40, 2),
(41, 0),
(42, 2),
(43, 1),
(44, 1),
(45, 0),
(46, 1),
(47, 2),
(48, 1),
(49, 0),
(50, 1),
(51, 0),
(52, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `antidm`
--

CREATE TABLE `antidm` (
  `id` int(11) NOT NULL,
  `status` int(11) NOT NULL,
  `x` float NOT NULL,
  `y` float NOT NULL,
  `z` float NOT NULL,
  `name` varchar(130) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `antidm`
--

INSERT INTO `antidm` (`id`, `status`, `x`, `y`, `z`, `name`) VALUES
(1, 1, -799.137, 2831.11, 1501.99, 'Психиатрическая больница'),
(2, 1, 1480.04, -1685.79, 13.32, 'Улица банка'),
(3, 1, 1502.73, -1282.03, 14.53, 'Улица мэрии'),
(4, 1, 2562.6, -1293.65, 1044.13, 'Завод'),
(5, 1, 1156.04, -1310.82, 1019.41, 'Больница'),
(6, 1, 1778.17, -1907.57, 13.39, 'ЖД ЛС'),
(7, 1, -1991.26, 147.55, 27.54, 'ЖД СФ'),
(8, 1, 2825.78, 1287.74, 10.77, 'ЖД ЛВ'),
(9, 1, 1608.94, 1831.35, 10.82, 'Улица больницы ЛВ'),
(10, 1, -91.33, 74.06, 3.11, 'Ферма'),
(11, 1, 1228.62, -1334.71, 14.04, 'Улица больницы ЛС'),
(12, 1, -2053.88, -151.57, 35.34, 'Автошкола'),
(13, 1, -2135.3, -846.25, 32.02, 'Автобазар'),
(14, 1, 291.59, -34.85, 1001.52, 'Амуниция'),
(15, 1, -397.3, 2227.77, 1801.09, 'Магазин аксессуаров'),
(16, 1, 2586.03, 1437.58, 1800.97, 'Магазин 24/7'),
(17, 1, 1126.95, -1415.26, 13.5824, 'Центральный рынок'),
(18, 1, 320.51, -54.67, 1.58, 'Военкомат ЛС'),
(19, 1, 1167.32, 1373.45, 10.67, 'Военкомат ЛВ'),
(20, 1, 1341.49, 1337.6, 10.82, 'Авиарынок'),
(21, 1, 2249.1, 1460.38, 1008.97, 'Казино'),
(22, 1, 2030.35, 1008.28, 10.82, 'Улица казино'),
(23, 1, -192.61, 1334.55, 1500.98, 'Радиостанция'),
(24, 1, -1829.11, 154.8, 15.13, 'Военкомат СФ'),
(25, 1, -2578.77, -1376.59, 1500.76, 'Автошкола'),
(26, 1, -461.524, 2217.5, 1601.09, 'Полиция ЛС'),
(27, 1, -461.524, 2217.5, 1601.09, 'Полиция ЛВ/СФ/РК'),
(28, 1, 2637.84, 1172.29, 10.82, 'Улица LV News'),
(29, 1, -1970.52, 481.69, 35.17, 'Улица SF News'),
(30, 1, 2363.95, -1958.59, 1601.09, 'Церковь'),
(31, 1, 372.78, -2040.39, 7.67, 'Пирс'),
(32, 1, 206.05, -245.31, 1.57, 'Механики'),
(33, 1, 493.17, 1308.91, 774.48, 'Банк ЛВ'),
(34, 1, 671.706, -579.11, 1700.74, 'АЗС'),
(35, 1, 642.685, -1252.66, 1024.41, '2 этаж больницы'),
(36, 1, -264.028, -1377.88, 10.3046, 'Ферма льна/хлопка'),
(37, 1, 489.192, 891.833, -30.9631, 'Шахта'),
(38, 1, -2460.88, 134.668, 35.1719, 'Yakuza'),
(39, 1, -71.1408, 1223.83, 19.6863, 'ЖД Форт-Карсон'),
(40, 1, -2268.2, 168.797, 35.1641, 'Собиратели'),
(41, 1, 2091.76, 789.5, 1027.12, 'Центр занятости. Интерьер'),
(42, 1, 1537.1, 1086.64, 1034.68, 'Мэрия 1 этаж'),
(43, 1, 1479, -1269.66, 113.81, 'Мэрия 2 этаж'),
(44, 1, 1993.17, 1123.5, 1038.72, 'Мэрия 3 этаж');

-- --------------------------------------------------------

--
-- Структура таблицы `banip`
--

CREATE TABLE `banip` (
  `ID` int(11) NOT NULL,
  `IP` varchar(16) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `bannames`
--

CREATE TABLE `bannames` (
  `ID` int(11) NOT NULL,
  `Name` varchar(24) NOT NULL,
  `BanAdmin` varchar(24) NOT NULL,
  `BanReason` varchar(100) CHARACTER SET cp1251 NOT NULL,
  `BanSeconds` int(11) NOT NULL,
  `BanDate` varchar(22) CHARACTER SET cp1251 NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `businesses`
--

CREATE TABLE `businesses` (
  `ID` int(11) NOT NULL,
  `State` int(11) NOT NULL,
  `Name` varchar(30) NOT NULL,
  `Owner` varchar(24) NOT NULL,
  `Enter_X` float NOT NULL,
  `Enter_Y` float NOT NULL,
  `Enter_Z` float NOT NULL,
  `Exit_X` float NOT NULL,
  `Exit_Y` float NOT NULL,
  `Exit_Z` float NOT NULL,
  `Cost` int(11) NOT NULL,
  `Level` int(11) NOT NULL,
  `Interior` int(11) NOT NULL,
  `Lock` int(11) NOT NULL,
  `Money` int(11) NOT NULL,
  `EnterPrice` float NOT NULL,
  `Products` int(11) NOT NULL,
  `ProdPrice` float NOT NULL,
  `Krasher` int(11) NOT NULL,
  `BuyCost` int(11) NOT NULL,
  `NeedItem` int(11) NOT NULL,
  `Item0` int(11) NOT NULL,
  `Item2` int(11) NOT NULL,
  `Item3` int(11) NOT NULL,
  `Item4` int(11) NOT NULL,
  `Item5` int(11) NOT NULL,
  `Item6` int(11) NOT NULL,
  `Item7` int(11) NOT NULL,
  `Item8` int(11) NOT NULL,
  `Item9` int(11) NOT NULL,
  `Item10` int(11) NOT NULL,
  `Item11` int(11) NOT NULL,
  `Item12` int(11) NOT NULL,
  `Item13` int(11) NOT NULL,
  `Item14` int(11) NOT NULL,
  `Item15` int(11) NOT NULL,
  `Item16` int(11) NOT NULL,
  `Item17` int(11) NOT NULL,
  `Item18` int(11) NOT NULL,
  `Item19` int(11) NOT NULL,
  `DayOfWeak0` int(11) NOT NULL,
  `DayOfWeak1` int(11) NOT NULL,
  `DayOfWeak2` int(11) NOT NULL,
  `DayOfWeak3` int(11) NOT NULL,
  `DayOfWeak4` int(11) NOT NULL,
  `DayOfWeak5` int(11) NOT NULL,
  `DayOfWeak6` int(11) NOT NULL,
  `Zam` varchar(24) NOT NULL,
  `Names` varchar(32) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `create_objects`
--

CREATE TABLE `create_objects` (
  `Name` varchar(30) NOT NULL,
  `Model` int(11) NOT NULL,
  `PosX` float NOT NULL,
  `PosY` float NOT NULL,
  `PosZ` float NOT NULL,
  `RotX` float NOT NULL,
  `RotY` float NOT NULL,
  `RotZ` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=cp1251;

-- --------------------------------------------------------

--
-- Структура таблицы `factory`
--

CREATE TABLE `factory` (
  `ID` int(11) NOT NULL,
  `Ferum` int(11) NOT NULL,
  `Materials` int(11) NOT NULL,
  `Fuel` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `family`
--

CREATE TABLE `family` (
  `id` int(11) NOT NULL,
  `slogan` varchar(40) NOT NULL,
  `name` varchar(15) NOT NULL,
  `memberscount` int(11) NOT NULL,
  `creator` varchar(24) NOT NULL,
  `zam` varchar(24) NOT NULL DEFAULT 'None',
  `zam2` varchar(24) NOT NULL DEFAULT 'None',
  `chatcolor` int(11) NOT NULL,
  `galka` int(11) NOT NULL,
  `brand` int(11) NOT NULL,
  `discord` varchar(40) NOT NULL DEFAULT 'None',
  `raidcall` varchar(10) NOT NULL DEFAULT 'None',
  `house` int(11) NOT NULL DEFAULT -1
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `familyhouse`
--

CREATE TABLE `familyhouse` (
  `ID` int(11) NOT NULL,
  `FamHouseName` varchar(15) NOT NULL DEFAULT 'The State',
  `Cost` int(11) NOT NULL,
  `Enter_X` float NOT NULL,
  `Enter_Y` float NOT NULL,
  `Enter_Z` float NOT NULL,
  `Exit_X` float NOT NULL DEFAULT -1515.8,
  `Exit_Y` float NOT NULL DEFAULT 2722.24,
  `Exit_Z` float NOT NULL DEFAULT 1500.97,
  `INT` int(11) NOT NULL,
  `status` int(1) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `freekassa_payments`
--

CREATE TABLE `freekassa_payments` (
  `id` int(10) NOT NULL,
  `freekassaId` varchar(255) NOT NULL,
  `account` varchar(255) NOT NULL,
  `sum` float NOT NULL,
  `itemsCount` int(11) NOT NULL DEFAULT 1,
  `dateCreate` datetime NOT NULL,
  `dateComplete` datetime DEFAULT NULL,
  `status` tinyint(4) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `history_banned`
--

CREATE TABLE `history_banned` (
  `Дата` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `Текст` varchar(150) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=cp1251;

--
-- Дамп данных таблицы `history_banned`
--

INSERT INTO `history_banned` (`Дата`, `Текст`) VALUES
('2021-03-14 23:25:55', 'Ban');

-- --------------------------------------------------------

--
-- Структура таблицы `houses`
--

CREATE TABLE `houses` (
  `ID` int(11) NOT NULL,
  `Enter_X` float NOT NULL,
  `Enter_Y` float NOT NULL,
  `Enter_Z` float NOT NULL,
  `Exit_X` float NOT NULL,
  `Exit_Y` float NOT NULL,
  `Exit_Z` float NOT NULL,
  `Owner` varchar(24) NOT NULL DEFAULT 'The State',
  `Room_Owner_0` varchar(24) NOT NULL DEFAULT 'The State',
  `Room_Owner_1` varchar(24) NOT NULL DEFAULT 'The State',
  `Room_Owner_2` varchar(24) NOT NULL DEFAULT 'The State',
  `Room_Owner_3` varchar(24) NOT NULL DEFAULT 'The State',
  `Room_Owner_4` varchar(24) NOT NULL DEFAULT 'The State',
  `Level` int(11) NOT NULL,
  `Cost` int(11) NOT NULL,
  `Lock` int(11) NOT NULL,
  `Rent` int(11) NOT NULL,
  `Interior` int(11) NOT NULL,
  `Money` int(11) NOT NULL,
  `Drugs` int(11) NOT NULL,
  `Mats` int(11) NOT NULL,
  `Bar` int(11) NOT NULL,
  `Podval` int(11) NOT NULL,
  `Skin_1` int(11) NOT NULL DEFAULT 0,
  `Skin_2` int(11) NOT NULL DEFAULT 0,
  `Skin_3` int(11) NOT NULL DEFAULT 0,
  `Skin_4` int(11) NOT NULL DEFAULT 0,
  `Skin_5` int(11) NOT NULL DEFAULT 0,
  `NoOwner` int(11) NOT NULL,
  `Nalog` int(11) NOT NULL,
  `Klass` int(11) NOT NULL,
  `Med` int(11) NOT NULL,
  `Garage` int(11) NOT NULL,
  `Garage_X` float NOT NULL,
  `Garage_Y` float NOT NULL,
  `Garage_Z` float NOT NULL,
  `Names` varchar(32) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `logs`
--

CREATE TABLE `logs` (
  `Дата` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `Текст` varchar(150) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `logs`
--

INSERT INTO `logs` (`Дата`, `Текст`) VALUES
('2021-03-14 23:36:18', 'Игрок Trevor_Fair неудачный вход. IP: 127.0.0.1.'),
('2021-03-14 23:37:28', 'Игрок Trevor_Fair неудачный вход. IP: 127.0.0.1.'),
('2021-03-14 23:38:33', 'Игрок John_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 00:10:49', 'Игрок John_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 00:33:22', 'Игрок John_Doe неудачный вход. IP: 127.0.0.1.'),
('2021-03-15 00:37:29', 'Игрок Jane_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 00:44:18', 'Игрок Jane_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 19:27:57', 'Игрок Jane_Doe неудачный вход. IP: 127.0.0.1.'),
('2021-03-15 19:37:35', 'Игрок Jane_Doe неудачный вход. IP: 127.0.0.1.'),
('2021-03-15 19:41:38', 'Игрок Jane_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 20:16:40', 'Игрок Jane_Doe вышел c сервера. IP: 127.0.0.1.'),
('2021-03-15 20:37:09', 'Игрок Jane_Doe вышел c сервера. IP: 127.0.0.1.');

-- --------------------------------------------------------

--
-- Структура таблицы `modellimit`
--

CREATE TABLE `modellimit` (
  `ID` int(10) UNSIGNED NOT NULL,
  `BuyCars` int(11) NOT NULL,
  `SpawnCar` int(11) NOT NULL,
  `Model` int(11) NOT NULL,
  `Pos_X` float NOT NULL,
  `Pos_Y` float NOT NULL,
  `Pos_Z` float NOT NULL,
  `Pos_A` float NOT NULL,
  `Name` varchar(24) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=cp1251;

--
-- Дамп данных таблицы `modellimit`
--

INSERT INTO `modellimit` (`ID`, `BuyCars`, `SpawnCar`, `Model`, `Pos_X`, `Pos_Y`, `Pos_Z`, `Pos_A`, `Name`) VALUES
(1, 3, 0, 411, -2653.55, -9.6817, 4.0793, 180, 'Infernus'),
(2, 3, 1, 541, -2657.1, -9.4336, 3.9502, 180, 'Bullet'),
(3, 4, 0, 560, -2650.07, -9.6702, 4.0426, 180, 'Sultan'),
(4, 4, 0, 451, -2646.56, -9.9427, 4.0309, 180, 'Turismo'),
(5, 4, 0, 415, -2643.01, -9.623, 4.1009, 180, 'Cheetah'),
(6, 4, 0, 559, -2639.54, -9.5871, 3.9667, 180, 'Jester'),
(7, 4, 0, 429, -2636.08, -9.6829, 4.004, 180, 'Banshee'),
(8, 4, 0, 506, -2632.57, -9.7544, 4.0282, 180, 'Super GT'),
(9, 4, 0, 480, -2625.59, -9.7122, 4.1209, 180, 'Comet'),
(10, 4, 0, 494, -2657.03, -28.8511, 4.2248, 180, 'Hotring Racer A'),
(11, 4, 0, 502, -2653.59, -28.8556, 4.2248, 180, 'Hotring Racer B'),
(12, 4, 0, 503, -2650.04, -28.8603, 4.2248, 180, 'Hotring Racer C'),
(13, 4, 0, 463, -2685.64, -4.4734, 3.8666, 0, 'Freeway'),
(14, 4, 0, 468, -2682.06, -4.4327, 4.0054, 0, 'Sanchez'),
(15, 4, 0, 471, -2678.53, -4.4106, 3.8492, 0, 'Quad'),
(16, 4, 0, 586, -2675.15, -4.2726, 3.8413, 0, 'Wayfarer'),
(17, 3, 0, 521, -2675.07, -9.239, 3.9014, 180, 'FCR-900'),
(18, 4, 0, 461, -2678.47, -9.2755, 3.9079, 180, 'PCJ-600'),
(19, 4, 0, 522, -2682.04, -9.2649, 3.8794, 180, 'NRG-500'),
(20, 4, 0, 581, -2685.51, -9.3324, 3.9226, 180, 'BF-400'),
(21, 4, 0, 573, -2440.89, 2242.51, 5.5039, 180, 'Dune'),
(22, 4, 0, 552, -2446.81, 2242.76, 4.4918, 180, 'Utility Van'),
(23, 4, 0, 539, -2449.81, 2242.77, 4.0643, 180, 'Vortex'),
(24, 4, 0, 528, -2452.81, 2242.31, 4.8688, 180, 'FBI Truck'),
(25, 4, 0, 504, -2479.49, 2242.67, 4.6243, 180, 'Bloodring Banger'),
(26, 4, 0, 609, -2482.5, 2242.5, 4.8576, 180, 'Boxville'),
(27, 4, 0, 457, -2485.45, 2243.64, 4.4426, 180, 'Caddy'),
(28, 4, 0, 409, -2440.76, 2225.21, 4.6582, 0, 'Stretch'),
(29, 4, 0, 416, -2446.72, 2225.46, 4.9119, 0, 'Ambulance'),
(30, 4, 0, 424, -2452.73, 2224.91, 4.5845, 0, 'BF Injection'),
(31, 4, 0, 428, -2458.66, 2225.29, 4.9283, 0, 'Securicar'),
(32, 4, 0, 431, -2464.69, 2226.74, 4.9457, 0, 'Bus'),
(33, 4, 0, 438, -2473.66, 2224.7, 4.816, 0, 'Cabbie'),
(34, 4, 0, 442, -2479.61, 2225.09, 4.6142, 0, 'Romero'),
(35, 4, 0, 455, -2485.47, 2225.86, 5.3171, 0, 'Flatbed'),
(36, 4, 0, 593, 324.833, 2537.73, 17.2774, 180, 'Dodo'),
(37, 4, 0, 513, 290.363, 2537.83, 17.3465, 180, 'Stuntplane'),
(38, 4, 0, 487, 265.352, 2536.74, 16.8502, 180, 'Maverick'),
(39, 4, 0, 469, 245.045, 2536.24, 16.7538, 180, 'Sparrow'),
(40, 2, 0, 562, 985.043, 2113.74, 10.5005, 0, 'Elegy'),
(41, 4, 0, 603, 981.568, 2114.17, 10.5822, 0, 'Phoenix'),
(42, 4, 0, 402, 978.06, 2114.2, 10.6168, 0, 'Buffalo'),
(43, 4, 0, 579, 974.597, 2114.15, 10.7434, 0, 'Huntley'),
(44, 4, 0, 602, 971.077, 2114.09, 10.658, 0, 'Alpha'),
(45, 4, 0, 554, 967.567, 2114.34, 10.9615, 0, 'Yosemite'),
(46, 4, 0, 400, 964.07, 2113.86, 10.9252, 0, 'Landstalker'),
(47, 4, 0, 482, 960.596, 2113.97, 10.9793, 0, 'Burrito'),
(48, 4, 0, 600, 957.04, 2114.17, 10.4921, 0, 'Picador'),
(49, 4, 0, 589, 935.576, 2113.77, 10.5083, 0, 'Club'),
(50, 4, 0, 561, 932.068, 2114.23, 10.6286, 0, 'Stratum'),
(51, 4, 0, 500, 938.988, 2127.57, 10.9949, 180, 'Mesa'),
(52, 4, 0, 474, 957.041, 2126.71, 10.591, 180, 'Hermes'),
(53, 4, 0, 534, 960.5, 2126.72, 10.6094, 180, 'Remington'),
(54, 4, 0, 421, 964.051, 2126.71, 10.6873, 180, 'Washington'),
(55, 4, 0, 491, 967.495, 2126.73, 10.6049, 180, 'Virgo'),
(56, 4, 0, 535, 971.001, 2127, 10.6367, 180, 'Slamvan'),
(57, 4, 0, 565, 974.596, 2127.45, 10.4844, 180, 'Flesh'),
(58, 4, 0, 475, 978.033, 2126.97, 10.6464, 180, 'Sabre'),
(59, 4, 0, 439, 981.537, 2127.04, 10.7146, 180, 'Stallion'),
(60, 4, 0, 566, 984.981, 2126.62, 10.5445, 180, 'Tahoma'),
(61, 4, 0, 545, 985.029, 2132.43, 10.5737, 0, 'Hustler'),
(62, 4, 0, 458, 981.617, 2132.77, 10.6759, 0, 'Solair'),
(63, 4, 0, 434, 978.123, 2132.02, 10.7984, 0, 'Hotknife'),
(64, 4, 0, 495, 974.607, 2132.02, 11.0931, 0, 'Sandking'),
(65, 4, 0, 587, 971.071, 2132.67, 10.5866, 0, 'Euros'),
(66, 4, 0, 477, 967.549, 2132.75, 10.6149, 0, 'ZR-350'),
(67, 4, 0, 536, 964.072, 2133.05, 10.5365, 0, 'Blade'),
(68, 4, 0, 533, 960.542, 2132.55, 10.5588, 0, 'Feltzer'),
(69, 4, 0, 558, 957.115, 2132.67, 10.4832, 0, 'Uranus');

-- --------------------------------------------------------

--
-- Структура таблицы `nickname_history`
--

CREATE TABLE `nickname_history` (
  `nh_owner` int(6) NOT NULL,
  `nh_oldname` varchar(24) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `nh_date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Структура таблицы `onclient`
--

CREATE TABLE `onclient` (
  `server` int(1) NOT NULL,
  `name` varchar(32) NOT NULL,
  `status` int(1) NOT NULL DEFAULT 1
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `onlineinfo`
--

CREATE TABLE `onlineinfo` (
  `Name` varchar(24) NOT NULL,
  `IP` varchar(16) NOT NULL,
  `Second` int(11) NOT NULL,
  `Minute` int(11) NOT NULL,
  `Hour` int(11) NOT NULL,
  `Day` int(11) NOT NULL,
  `Month` int(11) NOT NULL,
  `Year` int(11) NOT NULL,
  `Time` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `onlineinfo`
--

INSERT INTO `onlineinfo` (`Name`, `IP`, `Second`, `Minute`, `Hour`, `Day`, `Month`, `Year`, `Time`) VALUES
('Trevor_Fair', '127.0.0.1', 28, 37, 0, 15, 3, 2021, 0),
('John_Doe', '127.0.0.1', 22, 33, 1, 15, 3, 2021, 0),
('Jane_Doe', '127.0.0.1', 9, 37, 21, 15, 3, 2021, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `orgsinfo`
--

CREATE TABLE `orgsinfo` (
  `ID` int(11) NOT NULL,
  `Name` varchar(50) NOT NULL,
  `Leader` varchar(24) NOT NULL DEFAULT 'none',
  `Bank` int(11) NOT NULL,
  `Drugs` int(11) NOT NULL,
  `Mats` int(11) NOT NULL,
  `Max_Rang` smallint(4) NOT NULL DEFAULT 10,
  `Rank_1` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_2` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_3` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_4` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_5` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_6` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_7` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_8` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_9` varchar(50) NOT NULL DEFAULT 'None',
  `Rank_10` varchar(50) NOT NULL DEFAULT 'None',
  `Benz` int(11) NOT NULL,
  `Remont` int(11) NOT NULL,
  `Mask` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `orgsinfo`
--

INSERT INTO `orgsinfo` (`ID`, `Name`, `Leader`, `Bank`, `Drugs`, `Mats`, `Max_Rang`, `Rank_1`, `Rank_2`, `Rank_3`, `Rank_4`, `Rank_5`, `Rank_6`, `Rank_7`, `Rank_8`, `Rank_9`, `Rank_10`, `Benz`, `Remont`, `Mask`) VALUES
(1, 'Полиция ЛС', 'Свободна', 500000, 0, 99280, 10, 'Стажер', 'Офицер', 'Мл. Сержант', 'Сержант', 'Детектив', 'Лейтенант', 'Капитан', 'Командор', 'Зам. Шефа Полиции', 'Шеф Полиции', 0, 0, 0),
(2, 'RCPD', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Офицер', 'Мл. Сержант', 'Сержант', 'Детектив', 'Лейтенант', 'Капитан', 'Командор', 'Зам. Шефа Полиции', 'Шеф Полиции', 0, 0, 0),
(3, 'FBI', 'Свободна', 500000, 0, 96020, 10, 'Стажер', 'Мл. Агент', 'Агент', 'Агент DEA', 'Агент CID', 'Глава DEA', 'Глава CID', 'Инспектор', 'Зам. Директора', 'Директор', 0, 0, 0),
(4, 'Полиция СФ', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Офицер', 'Мл. Сержант', 'Сержант', 'Детектив', 'Лейтенант', 'Капитан', 'Командор', 'Зам. Шефа Полиции', 'Шеф Полиции', 0, 0, 0),
(5, 'Больница LS', 'Свободна', 500000, 0, 100000, 10, 'Интерн', 'Участковый Врач', 'Терапевт', 'Нарколог', 'Окулист', 'Хирург', 'Психолог', 'Зав. Отделением', 'Зам. Глав Врача', 'Глав Врач', 0, 0, 0),
(6, 'Правительство', 'Свободна', 571581, 0, 100000, 10, 'Водитель', 'Телохранитель', 'Охранник', 'Начальник охраны', 'Адвокат', 'Прокурор', 'Генеральный прокурор', 'Начальник Юридического отдела', 'Зам. Губернатора', 'Губернатор', 0, 0, 0),
(7, 'Армия LV', 'Свободна', 500000, 0, 100000, 10, 'Рядовой', 'Капрал', 'Сержант', 'Мастер-Сержант', 'Лейтенант', 'Капитан', 'Майор', 'Подполковник', 'Полковник', 'Генерал', 0, 0, 0),
(8, 'Больница SF', 'Свободна', 500000, 0, 100000, 10, 'Интерн', 'Участковый Врач', 'Терапевт', 'Нарколог', 'Окулист', 'Хирург', 'Психолог', 'Зав. Отделением', 'Зам. Глав Врача', 'Глав Врач', 0, 0, 0),
(9, 'Лицензеры', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Консультант', 'Экзаменатор', 'Мл. Инструктор', 'Инструктор', 'Координатор', 'Менеджер', 'Зам.Директора', 'Директор', 'Управляющий', 0, 0, 0),
(10, 'Radio LS', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Помощник Редакции', 'Светотехник', 'Оператор', 'Репортер', 'Ведущий', 'Режиссер', 'Редактор', 'Главный Редактор', 'Директор', 0, 0, 0),
(11, 'Grove', 'Свободна', 9548650, 0, 100000, 10, 'Плейя', 'Хастла', 'Килла', 'Юонг', 'Гангста', 'О.Г', 'Мобста', 'Де Кинг', 'Легенд', 'Мэд Дог', 0, 0, 0),
(12, 'Vagos', 'Свободна', 13584500, 0, 100000, 10, 'Навато', 'Ординаро', 'Локал', 'Вирификадо', 'V.E.G', 'Бандито', 'Ассесино', 'Лидер V.E.G', 'Падрино', 'Падре', 0, 0, 0),
(13, 'Ballas', 'Свободна', 18196900, 35, 100000, 10, 'Блайд', 'Бастер', 'Крекер', 'Гун Бро', 'Ап Бро', 'Гангстер', 'Федерал Блок', 'Фолкс', 'Райч Нига', 'Биг Вилли', 0, 0, 0),
(14, 'Aztecas', 'Свободна', 11854850, 0, 100000, 10, 'Перро', 'Тирадор', 'Геттор', 'Лас Герас', 'Мирандо', 'Сабио', 'Инвасор', 'Тессореро', 'Нестро', 'Падре', 0, 0, 0),
(15, 'Rifa', 'Свободна', 15314150, 0, 100000, 10, 'Ладрон', 'Новато', 'Амиго', 'Мачо', 'Джуниор', 'Эрмано', 'Бандито', 'Ауторидад', 'Аджунто', 'Падре', 0, 0, 0),
(16, 'Russian Mafia', 'Свободна', 500000, 0, 100000, 10, 'Шнырь', 'Фраер', 'Бык', 'Барыга', 'Блатной', 'Свояк', 'Браток', 'Вор', 'Вор в законе', 'Авторитет', 0, 0, 0),
(17, 'Yakuza', 'Свободна', 500000, 0, 100000, 10, 'Вакасю', 'Сятэй', 'Кёдай', 'Фуку-Хомбутё', 'Вакагасира', 'Со-хомбуте', 'Камбу', 'Сайко комон', 'Оядзи', 'Кумите', 0, 0, 0),
(18, 'La Cosa Nostra', 'Свободна', 500900, 0, 100000, 10, 'Новицио', 'Ассосиато', 'Сомбаттенте', 'Солдато', 'Боец', 'Сотто-Капо', 'Капо', 'Младший Босс', 'Консильере', 'Дон', 0, 0, 0),
(19, 'Warlock MC', 'Свободна', 500000, 0, 100000, 10, 'Сухарь', 'Суппорт', 'Треасер', 'Механик', 'Ярый', 'Проспект', 'Знак', 'Лидер WMC', 'Вице-президент', 'Президент', 0, 0, 0),
(20, 'Армия LS', 'Свободна', 500000, 0, 100000, 10, 'Рядовой', 'Капрал', 'Сержант', 'Мастер-Сержант', 'Лейтенант', 'Капитан', 'Майор', 'Подполковник', 'Полковник', 'Генерал', 0, 0, 0),
(21, 'Центральный Банк', 'Свободна', 691000, 0, 100000, 10, 'Охранник', 'Сотрудник Банка', 'Ст. Охранник', 'Ст. Сотрудник Банка', 'Начальник Охраны', 'Начальник Отд. Сбережений', 'Заведующий Отд. Сбережений', 'Менеджер', 'Зам. Директора', 'Директор', 0, 0, 0),
(22, 'Больница LV', 'Свободна', 500000, 0, 100000, 10, 'Интерн', 'Участковый Врач', 'Терапевт', 'Нарколог', 'Окулист', 'Хирург', 'Психолог', 'Зав. Отделением', 'Зам. Глав Врача', 'Глав Врач', 0, 0, 0),
(23, 'Полиция LV', 'Свободна', 0, 0, 100000, 10, 'Стажер', 'Офицер', 'Мл. Сержант', 'Сержант', 'Детектив', 'Лейтенант', 'Капитан', 'Командор', 'Зам. Шефа Полиции', 'Шеф Полиции', 0, 0, 0),
(24, 'Radio LV', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Помощник Редакции', 'Светотехник', 'Оператор', 'Репортер', 'Ведущий', 'Режиссер', 'Редактор', 'Главный Редактор', 'Директор', 0, 0, 0),
(25, 'Night Wolfs', 'Свободна', 11278300, 0, 100000, 10, 'Зиппо', 'Охранник', 'Киллер', 'Барыга', 'Мафиоз', 'Форест', 'Сокол', 'Блайд', 'Кортез', 'Дью', 0, 0, 0),
(26, 'Radio SF', 'Свободна', 500000, 0, 100000, 10, 'Стажер', 'Помощник Редакции', 'Светотехник', 'Оператор', 'Репортер', 'Ведущий', 'Режиссер', 'Редактор', 'Главный Редактор', 'Директор', 0, 0, 0),
(27, 'Армия SF', 'Свободна', 500000, 0, 100000, 10, 'Рядовой', 'Капрал', 'Сержант', 'Мастер-Сержант', 'Лейтенант', 'Капитан', 'Майор', 'Подполковник', 'Полковник', 'Генерал', 0, 0, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `ownable`
--

CREATE TABLE `ownable` (
  `ID` int(11) NOT NULL,
  `Model` int(11) NOT NULL,
  `Sell_X` float NOT NULL,
  `Sell_Y` float NOT NULL,
  `Sell_Z` float NOT NULL,
  `Sell_A` float NOT NULL,
  `Pos_X` float NOT NULL,
  `Pos_Y` float NOT NULL,
  `Pos_Z` float NOT NULL,
  `Pos_A` float NOT NULL,
  `Color_1` int(11) NOT NULL,
  `Color_2` int(11) NOT NULL,
  `Owner` varchar(24) NOT NULL,
  `Keyer` varchar(24) NOT NULL,
  `Shtrafer` int(24) NOT NULL,
  `Number` varchar(30) NOT NULL,
  `Cost` int(11) NOT NULL,
  `Lock` int(11) NOT NULL,
  `Shtraf` int(11) NOT NULL,
  `KeyIN` int(11) NOT NULL,
  `AlarmON` int(11) NOT NULL,
  `Milage` float NOT NULL,
  `Guns` int(11) NOT NULL,
  `Drugs` int(11) NOT NULL,
  `Armours` int(11) NOT NULL,
  `Packets` int(11) NOT NULL,
  `Heal` int(11) NOT NULL,
  `Kanistras` int(11) NOT NULL,
  `Repair` int(11) NOT NULL,
  `Twinturbo` int(11) NOT NULL,
  `Supreme` int(11) NOT NULL,
  `Style` int(11) NOT NULL,
  `VirtualWorld` int(11) NOT NULL,
  `Interior` int(11) NOT NULL,
  `ParkedInGarage` int(11) NOT NULL,
  `ParkedInParking` int(11) NOT NULL,
  `ShtrafName` varchar(24) NOT NULL,
  `Rukzak` int(11) NOT NULL,
  `Cherep` int(11) NOT NULL,
  `Krylya` int(11) NOT NULL,
  `AddCar` int(11) NOT NULL,
  `HenTun` int(11) NOT NULL,
  `Tuning` text CHARACTER SET cp1251 NOT NULL,
  `Itemss` text CHARACTER SET cp1251 NOT NULL,
  `ItemsKolvos` text CHARACTER SET cp1251 NOT NULL,
  `Launch` int(11) NOT NULL,
  `Future` int(11) NOT NULL,
  `Taxi` int(11) NOT NULL,
  `Premium` int(11) NOT NULL,
  `Kovsh` int(11) NOT NULL,
  `Paxa` int(11) NOT NULL,
  `Rneon` int(11) NOT NULL,
  `Migalka` int(11) NOT NULL,
  `Flag` int(11) NOT NULL,
  `Turbina` int(11) NOT NULL,
  `Bneon` int(11) NOT NULL,
  `Yneon` int(11) NOT NULL,
  `Pneon` int(11) NOT NULL,
  `Gneon` int(11) NOT NULL,
  `Grneon` int(11) NOT NULL,
  `Nrgmod` int(11) NOT NULL,
  `cRog` int(11) NOT NULL,
  `Stun` int(11) NOT NULL,
  `RKovsh` int(11) NOT NULL,
  `Tkovsh` int(11) NOT NULL,
  `PKovsh` int(11) NOT NULL,
  `KKovsh2` int(11) NOT NULL,
  `BNRG` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `ownable`
--

INSERT INTO `ownable` (`ID`, `Model`, `Sell_X`, `Sell_Y`, `Sell_Z`, `Sell_A`, `Pos_X`, `Pos_Y`, `Pos_Z`, `Pos_A`, `Color_1`, `Color_2`, `Owner`, `Keyer`, `Shtrafer`, `Number`, `Cost`, `Lock`, `Shtraf`, `KeyIN`, `AlarmON`, `Milage`, `Guns`, `Drugs`, `Armours`, `Packets`, `Heal`, `Kanistras`, `Repair`, `Twinturbo`, `Supreme`, `Style`, `VirtualWorld`, `Interior`, `ParkedInGarage`, `ParkedInParking`, `ShtrafName`, `Rukzak`, `Cherep`, `Krylya`, `AddCar`, `HenTun`, `Tuning`, `Itemss`, `ItemsKolvos`, `Launch`, `Future`, `Taxi`, `Premium`, `Kovsh`, `Paxa`, `Rneon`, `Migalka`, `Flag`, `Turbina`, `Bneon`, `Yneon`, `Pneon`, `Gneon`, `Grneon`, `Nrgmod`, `cRog`, `Stun`, `RKovsh`, `Tkovsh`, `PKovsh`, `KKovsh2`, `BNRG`) VALUES
(1, 402, 1913.58, 1815.43, 12.7433, 181.204, 1913.61, 1816.53, 13.4111, 179.905, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 1500000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(2, 541, 1906.55, 1814.72, 12.7433, 179.128, 1513.71, -696.894, 95.175, 89.1184, 67, 67, 'Trevor_Fair', 'Trevor_Fair', 15000, 'Blefonix ST', 6800000, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(3, 562, 1899.44, 1815.93, 12.7433, 181.17, 1899.53, 1816.81, 13.1638, 181.361, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 1800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(4, 411, 1920.71, 1817.08, 12.7433, 179.367, 1920.72, 1816.79, 13.2257, 180.241, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 9000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(5, 559, 1892.46, 1816.11, 12.7433, 177.494, 1892.51, 1816.78, 13.2214, 180.721, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 2400000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(6, 559, 1885.36, 1815.93, 12.7433, 181.787, 1885.6, 1816.91, 13.145, 181.013, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 2400000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(7, 587, 1878.34, 1817.16, 12.7433, 179.346, 1878.46, 1816.54, 13.2383, 181.724, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 680000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(8, 541, -2657.1, -9.4336, 3.9502, 180, 1789.64, -1085.11, 23.5792, 359.091, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(9, 541, -2657.1, -9.4336, 3.9502, 180, -1887.36, -793.054, 31.6343, 269.009, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(10, 541, -2657.1, -9.4336, 3.9502, 180, -1887.8, -915.714, 31.6343, 268.776, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(11, 541, -2657.1, -9.4336, 3.9502, 180, 1761.92, -1037.36, 23.5713, 356.778, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(12, 541, -2657.1, -9.4336, 3.9502, 180, -1897.69, -948.722, 31.634, 88.9445, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(13, 541, -2657.1, -9.4336, 3.9502, 180, -1887.32, -945.567, 31.6343, 270.026, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(14, 541, -2657.1, -9.4336, 3.9502, 180, 1649.63, -1102.58, 23.5165, 90.5175, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(15, 541, -2657.1, -9.4336, 3.9502, 180, 1567.36, -1011.88, 23.5202, 180.672, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(16, 541, -2657.1, -9.4336, 3.9502, 180, 1675.8, -1102.36, 23.5165, 89.7332, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(17, 541, -2657.1, -9.4336, 3.9502, 180, -1897.69, -936.722, 31.634, 88.9445, 67, 67, 'The State', 'The State', 0, 'Blefonix ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(18, 541, -2657.1, -9.4336, 3.9502, 180, 1649.03, -1089.02, 23.5172, 88.5186, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(19, 541, -2657.1, -9.4336, 3.9502, 180, 1632.26, -1013.29, 23.509, 163.121, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(20, 541, -2657.1, -9.4336, 3.9502, 180, 1627.31, -1037.52, 23.5093, 358.685, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(21, 541, -2657.1, -9.4336, 3.9502, 180, -1872.02, -777.989, 31.6343, 89.2229, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(22, 541, -2657.1, -9.4336, 3.9502, 180, 1771.69, -1084.24, 23.5715, 0.3023, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(23, 541, -2657.1, -9.4336, 3.9502, 180, 1766.42, -1070.41, 23.5713, 177.519, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(24, 541, -2657.1, -9.4336, 3.9502, 180, 1621.17, -1098.55, 23.517, 89.8516, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(25, 541, -2657.1, -9.4336, 3.9502, 180, -1872.17, -762.995, 31.6343, 90.0466, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(26, 541, -2657.1, -9.4336, 3.9502, 180, 1658.48, -1111.57, 23.5167, 269.873, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(27, 541, -2657.1, -9.4336, 3.9502, 180, 1708.12, -1005.8, 23.523, 171.329, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
(28, 541, -2657.1, -9.4336, 3.9502, 180, 1649.43, -1093.62, 23.5167, 90.3299, 67, 67, 'The State', 'The State', 0, 'Arizona ST', 6800000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 0, 0, 0, 0, '', '', '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `passports`
--

CREATE TABLE `passports` (
  `Name` varchar(24) NOT NULL,
  `Seria` int(11) NOT NULL,
  `Number` int(11) NOT NULL,
  `Sex` int(11) NOT NULL,
  `D_Day` int(11) NOT NULL,
  `D_Month` int(11) NOT NULL,
  `D_Year` int(11) NOT NULL,
  `DB_Day` int(11) NOT NULL,
  `DB_Month` int(11) NOT NULL,
  `DB_Year` int(11) NOT NULL,
  `McDate` varchar(11) NOT NULL DEFAULT '0/0/0',
  `McState` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `passports`
--

INSERT INTO `passports` (`Name`, `Seria`, `Number`, `Sex`, `D_Day`, `D_Month`, `D_Year`, `DB_Day`, `DB_Month`, `DB_Year`, `McDate`, `McState`) VALUES
('Jane_Doe', 3791, 748161, 0, 15, 3, 2021, 2, 5, 1997, '0/0/0', -1);

-- --------------------------------------------------------

--
-- Структура таблицы `phonebook`
--

CREATE TABLE `phonebook` (
  `Name` text CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `Namez` text CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `Num` int(11) NOT NULL,
  `Group` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=cp1251;

-- --------------------------------------------------------

--
-- Структура таблицы `phonemes`
--

CREATE TABLE `phonemes` (
  `Name` text CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `Namez` text CHARACTER SET cp1251 COLLATE cp1251_general_cs NOT NULL,
  `Text` text NOT NULL,
  `read` int(11) NOT NULL,
  `time` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=cp1251;

-- --------------------------------------------------------

--
-- Структура таблицы `promo`
--

CREATE TABLE `promo` (
  `code` varchar(32) NOT NULL,
  `money` int(11) NOT NULL,
  `virmoney` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `questsprogress`
--

CREATE TABLE `questsprogress` (
  `idquest` int(11) NOT NULL,
  `progress` int(11) NOT NULL,
  `accept` int(11) NOT NULL,
  `name` varchar(24) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `questsprogress`
--

INSERT INTO `questsprogress` (`idquest`, `progress`, `accept`, `name`) VALUES
(0, 100, 1, 'Jane_Doe'),
(1, 100, 1, 'Jane_Doe'),
(2, 1, 1, 'Jane_Doe');

-- --------------------------------------------------------

--
-- Структура таблицы `reports`
--

CREATE TABLE `reports` (
  `rText` varchar(144) NOT NULL,
  `rOtvet` varchar(70) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=cp1251;

-- --------------------------------------------------------

--
-- Структура таблицы `setbonus`
--

CREATE TABLE `setbonus` (
  `level` int(11) NOT NULL,
  `money` int(11) NOT NULL,
  `donate` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `setbonus`
--

INSERT INTO `setbonus` (`level`, `money`, `donate`) VALUES
(1, 1000, 0);

-- --------------------------------------------------------

--
-- Структура таблицы `site_news`
--

CREATE TABLE `site_news` (
  `id` int(11) NOT NULL,
  `date` varchar(15) NOT NULL,
  `title` varchar(128) NOT NULL,
  `text` text NOT NULL,
  `status` int(11) NOT NULL,
  `image` text NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Структура таблицы `zonesinfo`
--

CREATE TABLE `zonesinfo` (
  `ID` int(11) NOT NULL,
  `GangID` int(11) NOT NULL,
  `Min_X` float NOT NULL,
  `Min_Y` float NOT NULL,
  `Max_X` float NOT NULL,
  `Max_Y` float NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `zonesinfo`
--

INSERT INTO `zonesinfo` (`ID`, `GangID`, `Min_X`, `Min_Y`, `Max_X`, `Max_Y`) VALUES
(1, 0, 1642.71, -2174.57, 1770.71, -2073.57),
(2, 0, 1770, -2174, 1898, -2073),
(3, 0, 1898, -2174, 2026, -2073),
(4, 0, 2026, -2174, 2154, -2073),
(5, 0, 2154, -2174, 2282, -2073),
(6, 0, 2282, -2174, 2410, -2073),
(7, 0, 2410, -2174, 2538, -2073),
(8, 0, 2538, -2174, 2666, -2073),
(9, 0, 2666, -2174, 2794, -2073),
(10, 0, 2794, -2174, 2922, -2073),
(11, 0, 1642, -2073, 1770, -1972),
(12, 0, 1770, -2073, 1898, -1972),
(13, 0, 1898, -2073, 2026, -1972),
(14, 0, 2026, -2073, 2154, -1972),
(15, 0, 2154, -2073, 2282, -1972),
(16, 0, 2282, -2073, 2410, -1972),
(17, 14, 2410, -2073, 2538, -1972),
(18, 0, 2538, -2073, 2666, -1972),
(19, 0, 2666, -2073, 2794, -1972),
(20, 0, 2794, -2073, 2922, -1972),
(21, 0, 1642, -1972, 1770, -1871),
(22, 0, 1770, -1972, 1898, -1871),
(23, 0, 1898, -1972, 2026, -1871),
(24, 0, 2026, -1972, 2154, -1871),
(25, 0, 2154, -1972, 2282, -1871),
(26, 0, 2282, -1972, 2410, -1871),
(27, 0, 2410, -1972, 2538, -1871),
(28, 0, 2538, -1972, 2666, -1871),
(29, 0, 2666, -1972, 2794, -1871),
(30, 0, 2794, -1972, 2922, -1871),
(31, 0, 1642, -1871, 1770, -1770),
(32, 0, 1770, -1871, 1898, -1770),
(33, 0, 1898, -1871, 2026, -1770),
(34, 0, 2026, -1871, 2154, -1770),
(35, 15, 2154, -1871, 2282, -1770),
(36, 0, 2282, -1871, 2410, -1770),
(37, 0, 2410, -1871, 2538, -1770),
(38, 0, 2538, -1871, 2666, -1770),
(39, 0, 2666, -1871, 2794, -1770),
(40, 0, 2794, -1871, 2922, -1770),
(41, 0, 1642, -1770, 1770, -1669),
(42, 0, 1770, -1770, 1898, -1669),
(43, 0, 1898, -1770, 2026, -1669),
(44, 0, 2026, -1770, 2154, -1669),
(45, 0, 2154, -1770, 2282, -1669),
(46, 0, 2282, -1770, 2410, -1669),
(47, 11, 2410, -1770, 2538, -1669),
(48, 0, 2538, -1770, 2666, -1669),
(49, 0, 2666, -1770, 2794, -1669),
(50, 0, 2794, -1770, 2922, -1669),
(51, 0, 1642, -1669, 1770, -1568),
(52, 0, 1770, -1669, 1898, -1568),
(53, 0, 1898, -1669, 2026, -1568),
(54, 0, 2026, -1669, 2154, -1568),
(55, 0, 2154, -1669, 2282, -1568),
(56, 0, 2282, -1669, 2410, -1568),
(57, 0, 2410, -1669, 2538, -1568),
(58, 0, 2538, -1669, 2666, -1568),
(59, 0, 2666, -1669, 2794, -1568),
(60, 12, 2794, -1669, 2922, -1568),
(61, 0, 1642, -1568, 1770, -1467),
(62, 0, 1770, -1568, 1898, -1467),
(63, 0, 1898, -1568, 2026, -1467),
(64, 0, 2026, -1568, 2154, -1467),
(65, 0, 2154, -1568, 2282, -1467),
(66, 0, 2282, -1568, 2410, -1467),
(67, 0, 2410, -1568, 2538, -1467),
(68, 0, 2538, -1568, 2666, -1467),
(69, 0, 2666, -1568, 2794, -1467),
(70, 0, 2794, -1568, 2922, -1467),
(71, 0, 1642, -1467, 1770, -1366),
(72, 0, 1770, -1467, 1898, -1366),
(73, 0, 1898, -1467, 2026, -1366),
(74, 0, 2026, -1467, 2154, -1366),
(75, 0, 2154, -1467, 2282, -1366),
(76, 0, 2282, -1467, 2410, -1366),
(77, 25, 2410, -1467, 2538, -1366),
(78, 0, 2538, -1467, 2666, -1366),
(79, 0, 2666, -1467, 2794, -1366),
(80, 0, 2794, -1467, 2922, -1366),
(81, 0, 1642, -1366, 1770, -1265),
(82, 0, 1770, -1366, 1898, -1265),
(83, 0, 1898, -1366, 2026, -1265),
(84, 0, 2026, -1366, 2154, -1265),
(85, 0, 2154, -1366, 2282, -1265),
(86, 0, 2282, -1366, 2410, -1265),
(87, 0, 2410, -1366, 2538, -1265),
(88, 0, 2538, -1366, 2666, -1265),
(89, 0, 2666, -1366, 2794, -1265),
(90, 0, 2794, -1366, 2922, -1265),
(91, 0, 1642, -1265, 1770, -1164),
(92, 0, 1770, -1265, 1898, -1164),
(93, 0, 1898, -1265, 2026, -1164),
(94, 0, 2026, -1265, 2154, -1164),
(95, 0, 2154, -1265, 2282, -1164),
(96, 0, 2282, -1265, 2410, -1164),
(97, 0, 2410, -1265, 2538, -1164),
(98, 0, 2538, -1265, 2666, -1164),
(99, 0, 2666, -1265, 2794, -1164),
(100, 0, 2794, -1265, 2922, -1164),
(101, 0, 1642, -1164, 1770, -1063),
(102, 0, 1770, -1164, 1898, -1063),
(103, 13, 1898, -1164, 2026, -1063),
(104, 0, 2026, -1164, 2154, -1063),
(105, 0, 2154, -1164, 2282, -1063),
(106, 0, 2282, -1164, 2410, -1063),
(107, 0, 2410, -1164, 2538, -1063),
(108, 0, 2538, -1164, 2666, -1063),
(109, 0, 2666, -1164, 2794, -1063),
(110, 0, 2794, -1164, 2922, -1063),
(111, 0, 1642, -1063, 1770, -962),
(112, 0, 1770, -1063, 1898, -962),
(113, 0, 1898, -1063, 2026, -962),
(114, 0, 2026, -1063, 2154, -962),
(115, 0, 2154, -1063, 2282, -962),
(116, 0, 2282, -1063, 2410, -962),
(117, 0, 2410, -1063, 2538, -962),
(118, 0, 2538, -1063, 2666, -962),
(119, 0, 2666, -1063, 2794, -962),
(120, 0, 2794, -1063, 2922, -962),
(121, 0, 1642, -962, 1770, -861),
(122, 0, 1770, -962, 1898, -861),
(123, 0, 1898, -962, 2026, -861),
(124, 0, 2026, -962, 2154, -861),
(125, 0, 2154, -962, 2282, -861),
(126, 0, 2282, -962, 2410, -861),
(127, 0, 2410, -962, 2538, -861),
(128, 0, 2538, -962, 2666, -861),
(129, 0, 2666, -962, 2794, -861),
(130, 0, 2794, -962, 2922, -861);

--
-- Индексы сохранённых таблиц
--

--
-- Индексы таблицы `accounts`
--
ALTER TABLE `accounts`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`admid`);

--
-- Индексы таблицы `anticheat_settings`
--
ALTER TABLE `anticheat_settings`
  ADD UNIQUE KEY `ac_code` (`ac_code`);

--
-- Индексы таблицы `banip`
--
ALTER TABLE `banip`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `bannames`
--
ALTER TABLE `bannames`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `businesses`
--
ALTER TABLE `businesses`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `factory`
--
ALTER TABLE `factory`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `family`
--
ALTER TABLE `family`
  ADD PRIMARY KEY (`id`);

--
-- Индексы таблицы `familyhouse`
--
ALTER TABLE `familyhouse`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `freekassa_payments`
--
ALTER TABLE `freekassa_payments`
  ADD PRIMARY KEY (`id`);

--
-- Индексы таблицы `houses`
--
ALTER TABLE `houses`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `modellimit`
--
ALTER TABLE `modellimit`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `orgsinfo`
--
ALTER TABLE `orgsinfo`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `ownable`
--
ALTER TABLE `ownable`
  ADD PRIMARY KEY (`ID`);

--
-- Индексы таблицы `phonemes`
--
ALTER TABLE `phonemes`
  ADD KEY `Name` (`Name`(25),`Namez`(25));

--
-- Индексы таблицы `site_news`
--
ALTER TABLE `site_news`
  ADD PRIMARY KEY (`id`);

--
-- Индексы таблицы `zonesinfo`
--
ALTER TABLE `zonesinfo`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT для сохранённых таблиц
--

--
-- AUTO_INCREMENT для таблицы `accounts`
--
ALTER TABLE `accounts`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT для таблицы `admin`
--
ALTER TABLE `admin`
  MODIFY `admid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT для таблицы `banip`
--
ALTER TABLE `banip`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT для таблицы `bannames`
--
ALTER TABLE `bannames`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `businesses`
--
ALTER TABLE `businesses`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `factory`
--
ALTER TABLE `factory`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `family`
--
ALTER TABLE `family`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `familyhouse`
--
ALTER TABLE `familyhouse`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `freekassa_payments`
--
ALTER TABLE `freekassa_payments`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `houses`
--
ALTER TABLE `houses`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `modellimit`
--
ALTER TABLE `modellimit`
  MODIFY `ID` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=70;

--
-- AUTO_INCREMENT для таблицы `orgsinfo`
--
ALTER TABLE `orgsinfo`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=28;

--
-- AUTO_INCREMENT для таблицы `ownable`
--
ALTER TABLE `ownable`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=29;

--
-- AUTO_INCREMENT для таблицы `site_news`
--
ALTER TABLE `site_news`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT для таблицы `zonesinfo`
--
ALTER TABLE `zonesinfo`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=131;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
