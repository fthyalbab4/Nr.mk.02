// rea decompile_all
// name: FUN_00466010
// address: 0x466010
// body: available
// range: 0x466010-0x4660f7 inclusive
// range: 0x46610f-0x466118 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x466038 (push 0x4660f8 followed by fs-segment stack chaining); handler 0x4660f8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00466010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 local_20 [16];
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_30 = (undefined1 *)0x46602a;
  local_8 = param_3;
  local_c = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_34 = &LAB_004660f8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_c + 0x44))(local_c,8);
  (**(code **)(*local_c + 0x38))(local_c,8);
  local_10 = (int *)FUN_00462a64(local_c);
  FUN_0045bda4(local_10[0x12],0);
  FUN_0045bc24(local_10[0x12],param_2);
  uVar1 = (**(code **)(*local_c + 0x24))();
  puVar7 = local_20;
  uVar2 = (**(code **)(*local_c + 0x30))();
  FUN_0040c114(0,0,uVar2,puVar7,uVar1);
  (**(code **)(*local_10 + 0x4c))(local_10,local_20);
  uVar6 = 0;
  do {
    uVar5 = 0;
    do {
      uVar3 = uVar6 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      uVar4 = uVar5 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == uVar4) {
        (**(code **)(*local_10 + 0x20))(local_10,uVar5,uVar6,local_8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 9);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 9);
  FUN_00462400(local_c);
  *in_FS_OFFSET = uStack_38;
  return local_c;
}
