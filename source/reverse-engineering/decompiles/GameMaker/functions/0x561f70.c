// rea decompile_all
// name: FUN_00561f70
// address: 0x561f70
// body: available
// range: 0x561f70-0x562160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x561f91 (push 0x562161 followed by fs-segment stack chaining); handler 0x562161 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561f70(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;

  local_1c = &stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_00562161;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x561f9f;
  FUN_00561dbc(param_1);
  local_28 = 0x561fa6;
  iVar4 = FUN_0052f024(param_2);
  if ((499 < iVar4) && (iVar4 < 0x209)) {
    local_28 = 0x561fca;
    FUN_0052f060(param_2,&stack0xffffffec);
    local_28 = 0x561fd5;
    FUN_00407eb8(param_1 + 4,unaff_ESI);
    local_28 = 0x561fdc;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    local_28 = 0x561fe6;
    uVar3 = FUN_0052f258(param_2);
    local_28 = 0x561ff4;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))(*(int **)(param_1 + 0xc),uVar3);
    local_28 = 0x561ffc;
    FUN_00405a7c(uVar3);
    local_28 = 0x562003;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x18) = uVar2;
    local_28 = 0x56200d;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x19) = uVar2;
    if (0x207 < iVar4) {
      local_28 = 0x56201f;
      uVar2 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 0x1a) = uVar2;
    }
    local_28 = 0x56202c;
    FUN_0052f060(param_2,&stack0xffffffe8);
    local_28 = 0x562037;
    FUN_00407eb8(param_1 + 0x1c,unaff_EDI);
    local_28 = 0x562041;
    FUN_0052f060(param_2,&local_1c);
    local_28 = 0x56204c;
    FUN_00407eb8(param_1 + 0x20,local_1c);
    local_28 = 0x562056;
    FUN_0052f060(param_2,&local_20);
    local_28 = 0x562061;
    FUN_00407eb8(param_1 + 0x24,local_20);
    local_28 = 0x562068;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    local_28 = 0x562072;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    local_28 = 0x56207c;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x30) = uVar2;
    local_28 = 0x562086;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x31) = uVar2;
    local_28 = 0x562090;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x32) = uVar2;
    local_28 = 0x56209a;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    local_28 = 0x5620a4;
    iVar4 = FUN_0052f024(param_2);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        local_28 = 0x5620b9;
        FUN_0052f060(param_2,&local_24);
        local_28 = 0x5620c5;
        FUN_00407eb8(param_1 + 0x38 + iVar5 * 4,local_24);
        local_28 = 0x5620cc;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(param_1 + 0x58 + iVar5 * 4) = uVar3;
        local_28 = 0x5620da;
        FUN_0052f060(param_2,&local_28);
        uVar3 = local_28;
        local_28 = 0x5620e6;
        FUN_00407eb8(param_1 + 0x78 + iVar5 * 4,uVar3);
        local_28 = 0x5620f0;
        FUN_0052f060(param_2,&local_2c);
        local_28 = 0x5620ff;
        FUN_00407eb8(param_1 + 0x98 + iVar5 * 4,local_2c);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_28 = 0x56210c;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    local_28 = 0x56211c;
    FUN_0052f060(param_2,&local_30);
    local_28 = 0x56212a;
    FUN_00407eb8(param_1 + 0xbc,local_30);
    local_28 = 0x562134;
    FUN_0052f060(param_2,&local_34);
    local_28 = 0x562142;
    FUN_00407eb8(param_1 + 0xc0,local_34);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00562168;
  local_20 = (undefined1 *)0x562160;
  thunk_FUN_00406e80(&local_34,9,puVar1);
  return;
}
