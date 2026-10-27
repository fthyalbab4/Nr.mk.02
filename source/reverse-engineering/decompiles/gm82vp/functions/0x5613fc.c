// rea decompile_all
// name: FUN_005613fc
// address: 0x5613fc
// body: available
// range: 0x5613fc-0x5615b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x561425 (push 0x5615b2 followed by fs-segment stack chaining); handler 0x5615b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005613fc(undefined4 param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  undefined4 local_8;

  local_10 = 4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = (undefined1 *)0x56141a;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  local_24 = &LAB_005615b2;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = &stack0xfffffffc;
  piVar2 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_0043b9f8(piVar2,local_8);
  iVar3 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  uVar5 = 1;
  (**(code **)(*piVar2 + 0xc))(piVar2,0,&local_10);
  FUN_0045bab4(iVar3,local_10);
  (**(code **)(*piVar2 + 0xc))(piVar2,1,&stack0xffffffec);
  uVar4 = FUN_00416600(unaff_EBX);
  FUN_0045bb2c(iVar3,uVar4);
  (**(code **)(*piVar2 + 0xc))(piVar2,2,&stack0xffffffe8);
  uVar4 = FUN_00416600(unaff_ESI);
  FUN_0045b790(iVar3,uVar4);
  (**(code **)(*piVar2 + 0xc))(piVar2,3,&stack0xffffffe4);
  FUN_0040891c(unaff_EDI,&DAT_005615d0);
  uVar6 = 0;
  if ((bool)uVar5) {
    local_9 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x1d);
    uVar6 = (local_9 | 1) == 0;
    FUN_0045bb58(iVar3);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,4,&local_20);
  FUN_0040891c(local_20,&DAT_005615d0);
  uVar5 = 0;
  if ((bool)uVar6) {
    local_a = *(byte *)(*(int *)(iVar3 + 0x10) + 0x1d);
    uVar5 = (local_a | 2) == 0;
    FUN_0045bb58(iVar3);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,5,&local_24);
  FUN_0040891c(local_24,&DAT_005615d0);
  uVar6 = 0;
  if ((bool)uVar5) {
    local_b = *(byte *)(*(int *)(iVar3 + 0x10) + 0x1d);
    uVar6 = (local_b | 4) == 0;
    FUN_0045bb58(iVar3);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,6,&local_28);
  FUN_0040891c(local_28,&DAT_005615d0);
  if ((bool)uVar6) {
    local_c = *(byte *)(*(int *)(iVar3 + 0x10) + 0x1d);
    FUN_0045bb58(iVar3,local_c | 8);
  }
  FUN_00405fdc(piVar2);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005615b9;
  local_24 = (undefined1 *)0x5615a9;
  thunk_FUN_004072fc(&local_28,7,puVar1);
  local_24 = (undefined1 *)0x5615b1;
  thunk_FUN_004072d8(&local_8);
  return;
}
