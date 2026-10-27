// rea decompile_all
// name: FUN_005cf8d8
// address: 0x5cf8d8
// body: available
// range: 0x5cf8d8-0x5cfa2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf907 (push 0x5cfa5f followed by fs-segment stack chaining); handler 0x5cfa5f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf978 (push 0x5cfa30 followed by fs-segment stack chaining); handler 0x5cfa30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf8d8(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;

  local_c = 0;
  local_10 = 0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = (undefined1 *)0x5cf8fc;
  local_14 = param_3;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_34 = &LAB_005cfa5f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x5cf916;
  puStack_30 = &stack0xfffffffc;
  uVar2 = FUN_00452480(&DAT_004512d4,1);
  puStack_3c = (undefined1 *)0x5cf924;
  FUN_00452568(uVar2,0x80000001);
  puStack_3c = (undefined1 *)0x5cf930;
  uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_3c = (undefined1 *)0x5cf93d;
  FUN_0043e910(uVar3,CONCAT22(extraout_var,0x3a));
  puStack_3c = (undefined1 *)0x5cf947;
  FUN_0043e6d4(uVar3,local_8);
  puStack_3c = (undefined1 *)0x5cf954;
  FUN_00407f0c(&local_8,L"\\Software\\Game Maker");
  puStack_3c = (undefined1 *)0x5cf95d;
  FUN_00407eb8(param_1,0);
  *local_14 = 1;
  puStack_3c = (undefined1 *)0x5cf96a;
  local_18 = (int *)FUN_0043d9e4(uVar3);
  puStack_40 = &LAB_005cfa30;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_0043d140(local_18);
    if (cVar1 == '\0') break;
    (**(code **)(*(int *)local_18[2] + 0xc))((int *)local_18[2],local_18[1],&local_10);
    puStack_3c = (undefined1 *)0x5cf99f;
    FUN_00407f0c(&local_c,local_10);
    puStack_3c = local_8;
    puStack_40 = &DAT_005cfab4;
    uStack_44 = local_c;
    FUN_00408480(&local_8,3);
    cVar1 = FUN_004527e4(uVar2,local_8);
    if (cVar1 != '\0') {
      uVar4 = *param_1 == 0;
      if ((bool)uVar4) {
        FUN_004530e0(uVar2,local_c,&local_1c);
        FUN_00407eb8(param_1,local_1c);
      }
      else {
        FUN_004530e0(uVar2,local_c,&local_20);
        FUN_00408640(*param_1,local_20);
        if (!(bool)uVar4) {
          *local_14 = 0;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_005cfa37;
  if (local_18 != (int *)0x0) {
    puStack_40 = (undefined1 *)0x5cfa2f;
    (**(code **)(*local_18 + -4))(local_18,1);
  }
  return;
}
