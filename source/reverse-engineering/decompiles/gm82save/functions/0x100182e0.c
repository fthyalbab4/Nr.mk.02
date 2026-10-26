// rea decompile_all
// name: FUN_100182e0
// address: 0x100182e0
// body: available
// range: 0x100182e0-0x1001850c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100182e0(undefined4 *param_1,int *param_2,uint param_3,undefined1 (*param_4) [16],int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_30;
  undefined4 local_2c;
  uint local_18 [2];

  uVar3 = param_3;
  local_18[0] = (uint)param_5 >> 0x18 | ((uint)param_5 & 0xff0000) >> 8 |
                ((uint)param_5 & 0xff00) << 8 | (int)param_5 << 0x18;
  iVar4 = param_2[2];
  if ((uint)(*param_2 - iVar4) < 5) {
    FUN_101364f0((undefined8 *)&local_30,param_2,(int *)local_18,(int *)&DAT_00000004);
    if ((char)local_30 == -1) {
      iVar4 = param_2[2];
      uVar2 = *param_2 - iVar4;
      goto joined_r0x1001840b;
    }
LAB_100184f3:
    *param_1 = 3;
    param_1[2] = local_2c;
    param_1[1] = local_30;
  }
  else {
    *(uint *)(param_2[1] + iVar4) = local_18[0];
    iVar4 = iVar4 + 4;
    param_2[2] = iVar4;
    uVar2 = *param_2 - iVar4;
joined_r0x1001840b:
    if (uVar2 < 5) {
      FUN_101364f0((undefined8 *)&local_30,param_2,(int *)&param_3,(int *)&DAT_00000004);
      if ((char)local_30 != -1) goto LAB_100184f3;
      iVar4 = param_2[2];
    }
    else {
      *(uint *)(param_2[1] + iVar4) = uVar3;
      iVar4 = iVar4 + 4;
      param_2[2] = iVar4;
    }
    piVar1 = param_5;
    if (param_5 < (int *)(*param_2 - iVar4)) {
      memcpy((void *)(param_2[1] + iVar4),param_4,(size_t)param_5);
      param_2[2] = iVar4 + (int)piVar1;
    }
    else {
      FUN_101364f0((undefined8 *)&local_30,param_2,(int *)param_4,param_5);
      if ((char)local_30 != -1) goto LAB_100184f3;
    }
    if (DAT_101633c0 == 0) {
      FUN_1013c860(&local_30);
      if ((local_30 & 2) != 0) goto LAB_1001836b;
LAB_10018383:
      uVar3 = (*(uint *)("" + (param_3 & 0xff ^ 0xff) * 4) ^ 0xffffff) >> 8 ^
              *(uint *)("" + (uint)(byte)(param_3._1_1_ ^
                                         (byte)(*(uint *)("" + (param_3 & 0xff ^ 0xff) * 4) ^
                                               0xffffff)) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)("" + (uint)(byte)(param_3._2_1_ ^ (byte)uVar3) * 4);
      uVar3 = FUN_1009d850(~(uVar3 >> 8 ^
                            *(uint *)("" + (uint)(byte)(param_3._3_1_ ^ (byte)uVar3) * 4)),
                           (byte *)param_4,(uint)piVar1);
    }
    else {
      if ((DAT_101633c0 & 2) == 0) goto LAB_10018383;
LAB_1001836b:
      uVar3 = DAT_101633c0;
      if (DAT_101633c0 == 0) {
        FUN_1013c860(&local_30);
        uVar3 = local_30;
      }
      if ((uVar3 & 0x400) == 0) goto LAB_10018383;
      uVar3 = FUN_1009d660(0,(undefined1 (*) [16])&param_3,4);
      uVar3 = FUN_1009d660(uVar3,param_4,(uint)piVar1);
    }
    local_18[0] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    iVar4 = param_2[2];
    if ((uint)(*param_2 - iVar4) < 5) {
      FUN_101364f0((undefined8 *)&local_30,param_2,(int *)local_18,(int *)&DAT_00000004);
      if ((char)local_30 != -1) goto LAB_100184f3;
    }
    else {
      *(uint *)(param_2[1] + iVar4) = local_18[0];
      param_2[2] = iVar4 + 4;
    }
    *param_1 = 0xffffffff;
  }
  return;
}
