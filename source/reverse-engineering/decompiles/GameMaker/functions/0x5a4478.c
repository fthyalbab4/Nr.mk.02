// rea decompile_all
// name: FUN_005a4478
// address: 0x5a4478
// body: available
// range: 0x5a4478-0x5a45ed inclusive
// range: 0x5a45fa-0x5a4696 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a4498 (push 0x5a4697 followed by fs-segment stack chaining); handler 0x5a4697 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a4540 (push 0x5a45ee followed by fs-segment stack chaining); handler 0x5a45ee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a4478(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar3 = 6;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 1;
  local_20 = &LAB_005a4697;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 *)0x5a44a6;
  FUN_004cf2f4(param_1,&local_8);
  local_28 = (undefined1 *)0x5a44b7;
  FUN_00408640(local_8,*(undefined4 *)(param_1 + 0xdc));
  if ((bool)uVar4) goto LAB_005a465a;
  local_28 = (undefined1 *)0x5a44cd;
  FUN_00407eb8(param_1 + 0xdc,local_8);
  local_28 = (undefined1 *)0x5a44d5;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 == '\0') {
LAB_005a44e5:
    cVar2 = '\0';
  }
  else {
    local_28 = (undefined1 *)0x5a44e1;
    cVar2 = FUN_005a4468(local_8);
    if (cVar2 == '\0') goto LAB_005a44e5;
    cVar2 = '\x01';
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1 *)0x5a44fa;
    FUN_004173d8(local_8,&stack0xffffffec);
    local_28 = (undefined1 *)0x5a4507;
    iVar3 = FUN_00415924(unaff_ESI,L".lnk");
    if (iVar3 == 0) {
      local_28 = (undefined1 *)0x5a451c;
      cVar2 = FUN_005a4338(*(undefined4 *)(param_1 + 0x3c),local_8,&local_c);
      if (cVar2 != '\0') {
        local_28 = (undefined1 *)0x5a452d;
        FUN_00407f0c(&local_8,local_c);
      }
    }
  }
  if (cVar2 == '\0') {
    local_28 = (undefined1 *)0x5a460b;
    FUN_0040b75c(PTR_PTR_00782354,&local_30);
    local_28 = (undefined1 *)0x5a461c;
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xcc),local_30);
    local_28 = (undefined1 *)0x5a462c;
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x74))(*(int **)(param_1 + 0xd0),0);
    local_28 = (undefined1 *)0x5a463c;
    FUN_0048da04(*(undefined4 *)(param_1 + 0xd8),0);
    local_28 = (undefined1 *)0x5a4649;
    FUN_0040b75c(PTR_PTR_007815c0,&local_34);
    local_28 = (undefined1 *)0x5a465a;
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xd4),local_34);
  }
  else {
    local_2c = &LAB_005a45ee;
    local_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    local_34 = (undefined1 *)0x5a455a;
    local_28 = &stack0xfffffffc;
    FUN_0045f758(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x1b0),local_8);
    local_34 = &stack0xffffffe8;
    FUN_0040b75c(PTR_PTR_007815c4,&local_1c);
    puVar1 = local_1c;
    local_2c = (undefined1 *)FUN_0045fde4(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x1b0));
    local_28 = (undefined1 *)((uint)local_28 & 0xffffff00);
    local_24 = FUN_0045fdfc(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x1b0));
    local_20 = (undefined1 *)((uint)local_20 & 0xffffff00);
    FUN_00417d4c(puVar1,&local_2c,1);
    local_34 = (undefined1 *)0x5a45c4;
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xcc),unaff_EDI);
    local_34 = (undefined1 *)0x5a45d4;
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x74))(*(int **)(param_1 + 0xd0),1);
    local_34 = (undefined1 *)0x5a45e4;
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0xd4),0);
    *in_FS_OFFSET = local_30;
  }
LAB_005a465a:
  local_28 = (undefined1 *)0x5a4662;
  FUN_004ceef4(param_1);
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005a469e;
  local_20 = (undefined1 *)0x5a467c;
  thunk_FUN_00406e80(&local_34,2,puVar1);
  local_20 = (undefined1 *)0x5a4689;
  thunk_FUN_00406e80(&local_1c,3);
  local_20 = (undefined1 *)0x5a4696;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
