// rea decompile_all
// name: FUN_005c40d4
// address: 0x5c40d4
// body: available
// range: 0x5c40d4-0x5c4110 inclusive
// range: 0x5c4141-0x5c42b8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c40fb (push 0x5c42b9 followed by fs-segment stack chaining); handler 0x5c42b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c40d4(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int *local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x5c40f0;
  local_8 = param_1;
  FUN_0040b1b4(param_1);
  puStack_1c = &LAB_005c42b9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  switch(param_3) {
  case 0:
  case 6:
  case 9:
  case 10:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00782814,&local_c);
    FUN_005c4098(local_c);
    break;
  case 1:
    if (param_5 == 0) {
      puStack_18 = &stack0xfffffffc;
      FUN_0040b140(param_4);
      (**(code **)(*local_8 + 0x78))();
      FUN_0040b250();
    }
    else {
      puStack_18 = &stack0xfffffffc;
      FUN_0040b140(param_4);
      (**(code **)(*local_8 + 0xa0))();
      FUN_0040b250();
    }
    break;
  case 2:
    if (param_5 == 0) {
      puStack_18 = &stack0xfffffffc;
      FUN_0040b140(param_4);
      (**(code **)(*local_8 + 0x90))();
      FUN_0040b250();
    }
    else {
      puStack_18 = &stack0xfffffffc;
      FUN_0040b140(param_4);
      (**(code **)(*local_8 + 0xa4))();
      FUN_0040b250();
    }
    break;
  case 3:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x80))();
    FUN_0040b250();
    break;
  case 4:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x88))();
    FUN_0040b250();
    break;
  case 5:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x94))();
    FUN_0040b250();
    break;
  case 7:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x8c))();
    FUN_0040b250();
    break;
  case 8:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x84))();
    FUN_0040b250();
    break;
  case 0xb:
    puStack_18 = &stack0xfffffffc;
    FUN_0040b140(param_4);
    (**(code **)(*local_8 + 0x7c))();
    FUN_0040b250();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005c42c0;
  puStack_1c = (undefined1 *)0x5c42b0;
  thunk_FUN_00406e5c(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x5c42b8;
  FUN_0040b140(&local_8);
  return;
}
