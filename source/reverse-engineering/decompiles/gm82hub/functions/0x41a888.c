// rea decompile_all
// name: FUN_0041a888
// address: 0x41a888
// body: available
// range: 0x41a888-0x41ab24 inclusive
// range: 0x41ab27-0x41ac08 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a8ba (push 0x41ac09 followed by fs-segment stack chaining); handler 0x41ac09 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a888(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  int *in_FS_OFFSET;
  undefined4 uVar8;
  byte *pbStack_58;
  byte *pbVar9;
  undefined4 *puVar10;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_24;
  byte local_23;
  undefined1 local_22;
  byte local_21;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  char local_16;
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_10 = 0;
  puStack_40 = (undefined1 *)0x41a8af;
  local_14 = param_3;
  local_c = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_44 = &LAB_0041ac09;
  iStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_48;
  uVar7 = 0;
  local_1e = 0;
  local_20 = 0;
  local_24 = 0;
  local_15 = 0;
  puStack_40 = &stack0xfffffffc;
  local_16 = FUN_0041a67c(DAT_0068cc98);
  local_8 = 0;
  psVar2 = DAT_0068cc98;
  if ((DAT_0068cc98 != (short *)0x0) && (DAT_0068cc98[-5] != 2)) {
    psVar2 = (short *)FUN_00407488(&DAT_0068cc98,DAT_0068cc98);
  }
  if (*psVar2 == 0x67) {
    FUN_0041a714(local_c,param_2);
    puVar10 = &local_28;
    FUN_00408984(local_c,1,*param_2 + -1,puVar10);
    FUN_00415c04(local_28,&local_10);
    local_8 = FUN_0041a7d8(local_10);
  }
  else {
    puVar10 = (undefined4 *)0x41a955;
    iVar4 = FUN_0041d99c(&DAT_0041ac28,DAT_0068cc98);
    if (0 < iVar4) {
      local_8 = DAT_0068cd78;
    }
  }
  pbVar9 = &local_21;
  cVar1 = FUN_0041a428(local_c,param_2,&local_18,pbVar9,puVar10);
  if ((cVar1 != '\0') && (cVar1 = FUN_0041a5d0(local_c,param_2,DAT_0068cc94), cVar1 != '\0')) {
    pbStack_58 = (byte *)0x41a9a4;
    cVar1 = FUN_0041a428(local_c,param_2,&local_1a,&local_22);
    if (cVar1 != '\0') {
      cVar1 = FUN_0041a5d0(local_c,param_2,DAT_0068cc94);
      if (cVar1 == '\0') {
        pbStack_58 = (byte *)0x41aa9b;
        uVar7 = FUN_004196f0();
        if (local_16 == '\x01') {
          local_20 = local_18;
          local_1e = local_1a;
        }
        else {
          local_1e = local_18;
          local_20 = local_1a;
        }
      }
      else {
        pbStack_58 = &local_23;
        cVar1 = FUN_0041a428(local_c,param_2,&local_1c);
        if (cVar1 == '\0') goto LAB_0041abe1;
        if (local_16 == '\0') {
          uVar7 = (uint)local_1c;
          local_24 = local_23;
          local_1e = local_18;
          local_20 = local_1a;
        }
        else if (local_16 == '\x01') {
          uVar7 = (uint)local_1c;
          local_24 = local_23;
          local_1e = local_1a;
          local_20 = local_18;
        }
        else if (local_16 == '\x02') {
          uVar7 = (uint)local_18;
          local_24 = local_21;
          local_1e = local_1a;
          local_20 = local_1c;
        }
        if (local_8 < 1) {
          if (local_24 < 3) {
            uVar3 = FUN_004196f0();
            iVar4 = (uVar3 & 0xffff) - (uint)DAT_0067cb98;
            uVar6 = (short)uVar7 + (short)(iVar4 / 100) * 100;
            uVar7 = (uint)uVar6;
            if ((DAT_0067cb98 != 0) && ((int)(uint)uVar6 < iVar4)) {
              uVar7 = (uint)(ushort)(uVar6 + 100);
            }
          }
        }
        else {
          uVar7 = FUN_0041a82c(uVar7);
        }
      }
      FUN_0041a5d0(local_c,param_2,DAT_0068cc94);
      FUN_0041a3bc(local_c,param_2);
      if ((DAT_0068cd58 != '\0') &&
         (iVar4 = FUN_00408d44(&PTR_DAT_0041ac38,DAT_0068cc98), iVar4 != 0)) {
        if ((ushort)(*DAT_0068ccac - 0x30U) < 10) {
          FUN_0041a714(local_c,param_2);
        }
        else {
          do {
            while( true ) {
              FUN_00407498(&local_c);
              iVar4 = FUN_00408514();
              if ((iVar4 < *param_2) ||
                 (iVar4 = FUN_00407498(&local_c), *(short *)(iVar4 + -2 + *param_2 * 2) == 0x20))
              break;
              *param_2 = *param_2 + 1;
            }
            FUN_0041a3bc(local_c,param_2);
            FUN_00407498(&local_c);
            uVar8 = 0x41ab63;
            iVar4 = FUN_00408514();
            if (iVar4 < *param_2) break;
            pbStack_58 = (byte *)&local_2c;
            FUN_00407498(&DAT_0068cca4);
            uVar5 = FUN_00408514();
            FUN_00408984(local_c,*param_2,uVar5,uVar8);
            uVar8 = 0x41ab93;
            iVar4 = FUN_00415a90(DAT_0068cca4,local_2c);
            if (iVar4 == 0) break;
            pbStack_58 = (byte *)&local_30;
            FUN_00407498(&DAT_0068cca8);
            uVar5 = FUN_00408514();
            FUN_00408984(local_c,*param_2,uVar5,uVar8);
            iVar4 = FUN_00415a90(DAT_0068cca8,local_30);
          } while (iVar4 != 0);
        }
      }
      local_15 = FUN_00419260(uVar7,local_1e,local_20,local_14);
    }
  }
LAB_0041abe1:
  *in_FS_OFFSET = (int)pbStack_58;
  thunk_FUN_004072fc(&local_30,3,pbVar9,&LAB_0041ac10);
  thunk_FUN_004072fc(&local_10,2);
  return;
}
