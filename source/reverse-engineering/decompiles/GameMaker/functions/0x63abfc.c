// rea decompile_all
// name: FUN_0063abfc
// address: 0x63abfc
// body: available
// range: 0x63abfc-0x63ade8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63ac1a (push 0x63ade9 followed by fs-segment stack chaining); handler 0x63ade9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063abfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 extraout_var;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uVar5 = 1;
  local_1c = &LAB_0063ade9;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x63ac27;
  FUN_004cf2f4(param_1,&local_8);
  local_24 = 0x63ac35;
  FUN_00408640(local_8,*(undefined4 *)(param_1 + 200));
  if ((bool)uVar5) goto LAB_0063adba;
  local_24 = 0x63ac4b;
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,CONCAT22(extraout_var,0xfff5));
  local_24 = 0x63ac55;
  FUN_004cf2f4(param_1,&local_c);
  local_24 = 0x63ac63;
  FUN_00407eb8(param_1 + 200,local_c);
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 == 0) {
    local_24 = 0x63ac7f;
    FUN_004cf2f4(param_1,&local_10);
    local_24 = 0x63ac8d;
    cVar4 = FUN_005b3c40(*(undefined4 *)(param_1 + 0xd4),local_10);
    uVar5 = cVar4 == '\0';
    if ((bool)uVar5) {
      local_24 = 0x63ac9c;
      FUN_005b32a4(*(undefined4 *)(param_1 + 0xd4));
    }
  }
  else if (iVar1 == 1) {
    local_24 = 0x63aca8;
    FUN_004cf2f4(param_1,&stack0xffffffec);
    local_24 = 0x63acb6;
    cVar4 = FUN_0062e380(*(undefined4 *)(param_1 + 0xdc),unaff_EBX);
    uVar5 = cVar4 == '\0';
    if ((bool)uVar5) {
      local_24 = 0x63acc5;
      FUN_0062dbe8(*(undefined4 *)(param_1 + 0xdc));
    }
  }
  else if (iVar1 == 2) {
    local_24 = 0x63acd1;
    FUN_004cf2f4(param_1,&local_18);
    local_24 = 0x63acdf;
    cVar4 = FUN_007026a4(*(undefined4 *)(param_1 + 0xe4),local_18);
    uVar5 = cVar4 == '\0';
    if ((bool)uVar5) {
      local_24 = 0x63acee;
      FUN_00701dc0(*(undefined4 *)(param_1 + 0xe4));
    }
  }
  else {
    uVar5 = 0;
  }
  local_24 = 0x63acfc;
  FUN_004173d8(*(undefined4 *)(param_1 + 200),&local_20);
  local_24 = 0x63ad07;
  FUN_00415690(local_20,&local_1c);
  local_24 = 0x63ad14;
  FUN_00408640(local_1c,L".PNG");
  if ((bool)uVar5) {
LAB_0063ad66:
    local_24 = 0x63ad76;
    (**(code **)(**(int **)(param_1 + 0x104) + 0xf0))(*(int **)(param_1 + 0x104),0);
    local_24 = 0x63ad86;
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xf0))(*(int **)(param_1 + 0x10c),0);
    local_24 = 0x63ad96;
    (**(code **)(**(int **)(param_1 + 0x108) + 0xf0))(*(int **)(param_1 + 0x108),0);
  }
  else {
    local_24 = 0x63ad24;
    FUN_004173d8(*(undefined4 *)(param_1 + 200),&local_28);
    local_24 = 0x63ad2f;
    FUN_00415690(local_28,&local_24);
    uVar2 = local_24;
    local_24 = 0x63ad3c;
    FUN_00408640(uVar2,L".GMSPR");
    if ((bool)uVar5) goto LAB_0063ad66;
    local_24 = 0x63ad4c;
    FUN_004173d8(*(undefined4 *)(param_1 + 200),&local_30);
    local_24 = 0x63ad57;
    FUN_00415690(local_30,&local_2c);
    local_24 = 0x63ad64;
    FUN_00408640(local_2c,L".GMBCK");
    if ((bool)uVar5) goto LAB_0063ad66;
  }
  local_24 = 0x63ad9d;
  FUN_00639d88(param_1);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_24 = 0x63adac;
  FUN_00639f24(param_1);
  local_24 = 0x63adba;
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
LAB_0063adba:
  local_24 = 0x63adc1;
  FUN_004ceef4(param_1);
  puVar3 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0063adf0;
  local_1c = (undefined1 *)0x63addb;
  thunk_FUN_00406e80(&local_30,6,puVar3);
  local_1c = (undefined1 *)0x63ade8;
  thunk_FUN_00406e80(&local_18,5);
  return;
}
