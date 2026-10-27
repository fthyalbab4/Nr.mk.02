// rea decompile_all
// name: FUN_005651c0
// address: 0x5651c0
// body: available
// range: 0x5651c0-0x56537b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5651e9 (push 0x56537c followed by fs-segment stack chaining); handler 0x56537c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005651c0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;

  local_24 = &stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_0056537c;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0x5651f7;
  FUN_00564f80(param_1);
  local_30 = 0x5651fe;
  iVar4 = FUN_0052f024(param_2);
  if ((699 < iVar4) && (iVar4 < 0x2bd)) {
    local_30 = 0x56521b;
    FUN_0052f114(param_2);
    local_30 = 0x565225;
    FUN_0052f060(param_2,&stack0xffffffe8);
    local_30 = 0x565230;
    FUN_00407eb8(param_1 + 4,unaff_EBX);
    local_30 = 0x56523a;
    FUN_0052f060(param_2,&stack0xffffffe4);
    local_30 = 0x565245;
    FUN_00407eb8(param_1 + 8,unaff_ESI);
    local_30 = 0x56524f;
    FUN_0052f060(param_2,&stack0xffffffe0);
    local_30 = 0x56525a;
    FUN_00407eb8(param_1 + 0xc,unaff_EDI);
    local_30 = 0x565264;
    FUN_0052f060(param_2,&local_24);
    local_30 = 0x56526f;
    FUN_00407eb8(param_1 + 0x10,local_24);
    local_30 = 0x565279;
    FUN_0052f060(param_2,&local_28);
    local_30 = 0x565284;
    FUN_00407eb8(param_1 + 0x14,local_28);
    local_30 = 0x56528e;
    FUN_0052f060(param_2,&local_2c);
    local_30 = 0x565299;
    FUN_00407eb8(param_1 + 0x18,local_2c);
    local_30 = 0x5652a3;
    FUN_0052f060(param_2,&local_30);
    uVar3 = local_30;
    local_30 = 0x5652ae;
    FUN_00407eb8(param_1 + 0x1c,uVar3);
    local_30 = 0x5652b8;
    FUN_0052f060(param_2,&local_34);
    local_30 = 0x5652c3;
    FUN_00407eb8(param_1 + 0x20,local_34);
    local_30 = 0x5652ce;
    FUN_00417398(*(undefined4 *)(param_1 + 0x20),&local_38);
    local_30 = 0x5652d9;
    FUN_00407eb8(param_1 + 0x20,local_38);
    local_30 = 0x5652e0;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x24) = uVar2;
    local_30 = 0x5652ea;
    uVar3 = FUN_0052f024(param_2);
    local_30 = 0x5652f3;
    FUN_00564e38(param_1,uVar3);
    iVar4 = *(int *)(param_1 + 0x2c);
    if (-1 < iVar4 + -1) {
      local_14 = 0;
      do {
        local_30 = 0x56530d;
        FUN_0052f060(param_2,&local_3c);
        local_30 = 0x56531e;
        FUN_00407eb8(*(int *)(param_1 + 0x28) + local_14 * 4,local_3c);
        local_14 = local_14 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_30 = 0x56532b;
    uVar3 = FUN_0052f024(param_2);
    local_30 = 0x565334;
    FUN_00564e9c(param_1,uVar3);
    iVar4 = *(int *)(param_1 + 0x34);
    if (-1 < iVar4 + -1) {
      local_14 = 0;
      do {
        local_30 = 0x565357;
        FUN_00564938(*(undefined4 *)(*(int *)(param_1 + 0x30) + local_14 * 4),param_2,0);
        local_14 = local_14 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar1 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_00565383;
  local_28 = (undefined1 *)0x56537b;
  thunk_FUN_00406e80(&local_3c,10,puVar1);
  return;
}
