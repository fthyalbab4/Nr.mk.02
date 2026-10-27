// rea decompile_all
// name: FUN_10108fb0
// address: 0x10108fb0
// body: available
// range: 0x10108fb0-0x101092ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall
FUN_10108fb0(int *param_1,int param_2,int *param_3,int *param_4,byte param_5,int **param_6)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int **ppiStack_44;
  undefined1 *puStack_40;
  int *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  int local_14;

  piVar2 = (int *)*param_1;
  iVar3 = param_1[1];
  if ((param_2 == 0) && ((char)piVar2[4] == '\0')) {
LAB_10108fca:
    uVar6 = 0;
    param_1[1] = iVar3 + 1;
  }
  else {
    puVar4 = (undefined4 *)*piVar2;
    local_14 = param_2;
    if (iVar3 == 0) {
      local_3c = piVar2 + 3;
      local_38 = &LAB_10096fc0;
      uVar6 = FUN_10093d70(*puVar4,puVar4[1],(ushort *)&DAT_10157df1,(uint)&local_3c);
      if ((char)uVar6 == '\0') {
        if ((char)piVar2[4] == '\x01') {
          local_3c = &local_14;
          local_38 = &LAB_101092d0;
          local_34 = 0;
          local_30 = 10;
          uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                               (ushort *)&DAT_10157dfc,(uint)&local_3c);
          cVar5 = (char)uVar6;
          goto joined_r0x101090ac;
        }
        goto LAB_101090b2;
      }
    }
    else {
      uVar6 = (**(code **)(puVar4[1] + 0xc))(*puVar4,&DAT_10157e08,6);
      if ((char)uVar6 == '\0') {
        if ((char)piVar2[4] == '\x01') {
          local_3c = (int *)&DAT_10157dcc;
          local_38 = &LAB_10093d10;
          local_34 = 0;
          local_30 = 0xd;
          uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                               (ushort *)&DAT_10157dd4,(uint)&local_3c);
          cVar5 = (char)uVar6;
joined_r0x101090ac:
          if (cVar5 != '\0') goto LAB_101091bc;
        }
LAB_101090b2:
        if (*param_3 == -2) {
          uVar6 = (**(code **)(((undefined4 *)*piVar2)[1] + 0xc))
                            (*(undefined4 *)*piVar2,
                             "<unknown>C:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\process\\windows\\child_pipe.rs"
                             ,9);
          cVar5 = (char)uVar6;
        }
        else if ((char)piVar2[4] == '\0') {
          uStack_24 = *(undefined8 *)(param_3 + 6);
          uStack_2c = *(undefined8 *)(param_3 + 4);
          uStack_1c = *(undefined8 *)(param_3 + 8);
          ppiStack_44 = &local_3c;
          uVar1 = *(undefined8 *)(param_3 + 2);
          local_34 = (undefined4)uVar1;
          local_30 = (undefined2)((ulonglong)uVar1 >> 0x20);
          uStack_2e = (undefined2)((ulonglong)uVar1 >> 0x30);
          local_3c = (int *)*(undefined8 *)param_3;
          local_38 = (undefined1 *)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          puStack_40 = &LAB_10109370;
          uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                               (ushort *)&DAT_10157e0e,(uint)&ppiStack_44);
          cVar5 = (char)uVar6;
        }
        else {
          uStack_24 = *(undefined8 *)(param_3 + 6);
          uStack_2c = *(undefined8 *)(param_3 + 4);
          uStack_1c = *(undefined8 *)(param_3 + 8);
          ppiStack_44 = &local_3c;
          uVar1 = *(undefined8 *)(param_3 + 2);
          local_34 = (undefined4)uVar1;
          local_30 = (undefined2)((ulonglong)uVar1 >> 0x20);
          uStack_2e = (undefined2)((ulonglong)uVar1 >> 0x30);
          local_3c = (int *)*(undefined8 *)param_3;
          local_38 = (undefined1 *)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          puStack_40 = &LAB_10109370;
          uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                               (ushort *)&DAT_10157158,(uint)&ppiStack_44);
          cVar5 = (char)uVar6;
        }
        if ((cVar5 == '\0') &&
           (uVar6 = (**(code **)(((undefined4 *)*piVar2)[1] + 0xc))
                              (*(undefined4 *)*piVar2,&DAT_10157df0,1), (char)uVar6 == '\0')) {
          if ((param_5 & *param_4 != -1) != 1) goto LAB_10108fca;
          ppiStack_44 = param_6;
          if ((char)piVar2[4] == '\x01') {
            local_3c = (int *)&DAT_10157dcc;
            local_38 = &LAB_10093d10;
            local_34 = 0;
            local_30 = 10;
            uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                                 (ushort *)&DAT_10157dd4,(uint)&local_3c);
            if ((char)uVar6 != '\0') goto LAB_101091bc;
          }
          uVar6 = (**(code **)(((undefined4 *)*piVar2)[1] + 0xc))
                            (*(undefined4 *)*piVar2,&DAT_10157ddc,0x10);
          if ((char)uVar6 == '\0') {
            local_3c = (int *)*piVar2;
            local_30 = (undefined2)param_4[2];
            uStack_2e = (undefined2)((uint)param_4[2] >> 0x10);
            local_38 = (undefined1 *)*(undefined8 *)param_4;
            local_34 = (undefined4)((ulonglong)*(undefined8 *)param_4 >> 0x20);
            uVar6 = (**(code **)(piVar2[2] + 0x10))(piVar2[1],local_3c,&local_38);
            local_3c = (int *)&ppiStack_44;
            if ((char)uVar6 == '\0') {
              local_38 = &LAB_10096fc0;
              uVar6 = FUN_10093d70(*(undefined4 *)*piVar2,((undefined4 *)*piVar2)[1],
                                   (ushort *)&DAT_10157dec,(uint)&local_3c);
              if ((char)uVar6 == '\0') {
                uVar6 = (**(code **)(((undefined4 *)*piVar2)[1] + 0xc))
                                  (*(undefined4 *)*piVar2,&DAT_10157df0,1);
                if ((char)uVar6 != '\0') {
                  return CONCAT31((int3)((uint)uVar6 >> 8),1);
                }
                goto LAB_10108fca;
              }
            }
          }
        }
      }
    }
LAB_101091bc:
    uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar6;
}
