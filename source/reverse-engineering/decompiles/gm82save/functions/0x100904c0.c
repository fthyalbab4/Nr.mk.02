// rea decompile_all
// name: FUN_100904c0
// address: 0x100904c0
// body: available
// range: 0x100904c0-0x10090683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100904c0(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint _Size;
  void *_Src;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint local_40;
  int local_3c;
  uint local_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined1 *local_14;

  local_40 = 0;
  local_3c = 1;
  local_38 = 0;
  FUN_101359e0(&local_40,0,0xc,(LPVOID)0x1,1);
  *(undefined4 *)(local_3c + 8 + local_38) = 0x20746120;
  *(undefined4 *)(local_3c + 4 + local_38) = 0x64656b63;
  *(undefined4 *)(local_3c + local_38) = 0x696e6170;
  local_38 = local_38 + 0xc;
  local_18 = (undefined4 *)param_2[2];
  local_30 = *local_18;
  local_2c = local_18[1];
  local_20 = local_18 + 2;
  local_28 = &local_30;
  local_18 = local_18 + 3;
  local_24 = &LAB_10093d10;
  local_1c = &LAB_10096fc0;
  local_14 = &LAB_10096fc0;
  uVar3 = FUN_10093d70(&local_40,0x10143aa0,(ushort *)&DAT_1015936d,(uint)&local_28);
  if ((char)uVar3 != '\0') {
    FUN_10136c40("a Display implementation returned an error unexpectedlyC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\string.rs"
                 ,0x37,&local_31,&DAT_101402f8,&DAT_10155a68);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar1 = (undefined4 *)*param_2;
  pcVar2 = *(code **)(param_2[1] + 0xc);
  (*pcVar2)(&local_28,puVar1);
  auVar7[0] = -((char)local_28 == '\\');
  auVar7[1] = -(local_28._1_1_ == -10);
  auVar7[2] = -(local_28._2_1_ == -0x17);
  auVar7[3] = -(local_28._3_1_ == '_');
  auVar7[4] = -((char)local_24 == -0x24);
  auVar7[5] = -(local_24._1_1_ == '\x02');
  auVar7[6] = -(local_24._2_1_ == -10);
  auVar7[7] = -(local_24._3_1_ == -0x47);
  auVar7[8] = -((char)local_20 == -0xf);
  auVar7[9] = -(local_20._1_1_ == -0x3f);
  auVar7[10] = -(local_20._2_1_ == 'p');
  auVar7[0xb] = -(local_20._3_1_ == 'l');
  auVar7[0xc] = -((char)local_1c == -0xe);
  auVar7[0xd] = -(local_1c._1_1_ == 'a');
  auVar7[0xe] = -(local_1c._2_1_ == -0x3f);
  auVar7[0xf] = -(local_1c._3_1_ == '$');
  iVar4 = 4;
  puVar5 = puVar1;
  if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf) !=
      0xffff) {
    (*pcVar2)(&local_28,puVar1);
    auVar8[0] = -((char)local_28 == '@');
    auVar8[1] = -(local_28._1_1_ == -0x19);
    auVar8[2] = -(local_28._2_1_ == -0x1d);
    auVar8[3] = -(local_28._3_1_ == -0x4c);
    auVar8[4] = -((char)local_24 == 'u');
    auVar8[5] = -(local_24._1_1_ == -0x22);
    auVar8[6] = -(local_24._2_1_ == '\x12');
    auVar8[7] = -(local_24._3_1_ == 'p');
    auVar8[8] = -((char)local_20 == -0x2c);
    auVar8[9] = -(local_20._1_1_ == -0x4d);
    auVar8[10] = -(local_20._2_1_ == -0x27);
    auVar8[0xb] = -(local_20._3_1_ == -0x4c);
    auVar8[0xc] = -((char)local_1c == -0x51);
    auVar8[0xd] = -(local_1c._1_1_ == '%');
    auVar8[0xe] = -(local_1c._2_1_ == '\'');
    auVar8[0xf] = -(local_1c._3_1_ == -0x13);
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
        != 0xffff) goto LAB_1009061a;
    puVar5 = puVar1 + 1;
    iVar4 = 8;
  }
  _Size = *(uint *)((int)puVar1 + iVar4);
  _Src = (void *)*puVar5;
  if (local_40 - local_38 < 2) {
    FUN_101359e0(&local_40,local_38,2,(LPVOID)0x1,1);
  }
  *(undefined2 *)(local_3c + local_38) = 0xa3a;
  uVar6 = local_38 + 2;
  local_38 = uVar6;
  if (local_40 - uVar6 < _Size) {
    FUN_101359e0(&local_40,uVar6,_Size,(LPVOID)0x1,1);
LAB_10090603:
    uVar6 = local_38;
    memcpy((void *)(local_3c + local_38),_Src,_Size);
  }
  else if (_Size != 0) goto LAB_10090603;
  local_38 = uVar6 + _Size;
LAB_1009061a:
  *(uint *)(param_1 + 1) = local_38;
  *param_1 = CONCAT44(local_3c,local_40);
  return;
}
