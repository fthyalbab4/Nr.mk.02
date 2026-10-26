// rea decompile_all
// name: FUN_005cb8cc
// address: 0x5cb8cc
// body: available
// range: 0x5cb8cc-0x5cba31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb8f7 (push 0x5cba32 followed by fs-segment stack chaining); handler 0x5cba32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb8cc(undefined4 param_1,char param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  undefined4 local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (int *)&DAT_00000004;
  do {
    local_c = 0;
    local_8 = (int *)((int)local_8 + -1);
  } while (local_8 != (int *)0x0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_005cba32;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  uVar1 = FUN_0040b140(&local_10);
  puVar4 = &DAT_005cba44;
  FUN_005cae4c(param_1,&stack0xffffffe8);
  iVar2 = (**(code **)*unaff_ESI)();
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      thunk_FUN_00406e5c(param_4);
      (**(code **)(*local_10 + 0x14))();
      FUN_0040b250();
    }
    else if (param_2 == '\x01') {
      thunk_FUN_00406e5c(param_4);
      (**(code **)(*local_10 + 0xc))();
      FUN_0040b250();
    }
    else if (param_2 == '\x02') {
      thunk_FUN_00406e5c(param_4);
      (**(code **)(*local_10 + 0x10))();
      FUN_0040b250();
    }
    if (*param_4 == 0) {
      FUN_00407eb8(param_4,0);
    }
  }
  else {
    FUN_005cb714(param_1,&local_8);
    if (local_8 == (int *)0x0) {
      FUN_00407eb8(param_4,0);
    }
    else {
      (**(code **)(*local_8 + 0x3c))(local_8,&local_28,*local_8,unaff_ESI,puVar4);
      uVar3 = 0x5cb9ac;
      FUN_00429418(&local_c,&local_28);
      if (param_2 == '\0') {
        FUN_005c4310(L"version",local_c,0,uVar3);
        unaff_ESI = param_4;
      }
      else if (param_2 == '\x01') {
        FUN_005c4310(L"encoding",local_c,0,uVar3);
        unaff_ESI = param_4;
      }
      else if (param_2 == '\x02') {
        FUN_005c4310(L"standalone",local_c,0,uVar3);
        unaff_ESI = param_4;
      }
    }
  }
  *in_FS_OFFSET = unaff_ESI;
  FUN_004249e8(&local_28,unaff_ESI,uVar1,&LAB_005cba39);
  FUN_0040b140(&stack0xffffffe8);
  FUN_0040b140(&local_10);
  thunk_FUN_00406e5c(&local_c);
  FUN_0040b140(&local_8);
  return;
}
