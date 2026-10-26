// rea decompile_all
// name: FUN_0063c3fc
// address: 0x63c3fc
// body: available
// range: 0x63c3fc-0x63c63f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63c422 (push 0x63c640 followed by fs-segment stack chaining); handler 0x63c640 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0063c4fa) */
/* WARNING: Removing unreachable block (ram,0x0063c515) */
/* WARNING: Removing unreachable block (ram,0x0063c52c) */
/* WARNING: Removing unreachable block (ram,0x0063c538) */
/* WARNING: Removing unreachable block (ram,0x0063c548) */
/* WARNING: Removing unreachable block (ram,0x0063c557) */
/* WARNING: Removing unreachable block (ram,0x0063c563) */
/* WARNING: Removing unreachable block (ram,0x0063c567) */
/* WARNING: Removing unreachable block (ram,0x0063c580) */
/* WARNING: Removing unreachable block (ram,0x0063c58c) */
/* WARNING: Removing unreachable block (ram,0x0063c59a) */
/* WARNING: Removing unreachable block (ram,0x0063c5b3) */
/* WARNING: Removing unreachable block (ram,0x0063c5bf) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0063c3fc(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_10 [3];

  puStack_2c = &stack0xfffffffc;
  local_10[2] = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_30 = &LAB_0063c640;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  if ((((-1 < param_2) &&
       (puVar1 = &stack0xfffffffc, param_2 < *(int *)(*(int *)(param_1 + 0x3c) + 4))) &&
      (puVar1 = &stack0xfffffffc, -1 < param_3)) &&
     (puVar1 = &stack0xfffffffc, param_3 < *(int *)(*(int *)(param_1 + 0x3c) + 8))) {
    FUN_0070284c(*(undefined4 *)(param_1 + 0x3c),param_2,param_3);
    FUN_00409be0(local_10,&DAT_0063c188,1,
                 *(int *)(*(int *)(param_1 + 0x3c) + 4) * *(int *)(*(int *)(param_1 + 0x3c) + 8));
    iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 4) * *(int *)(*(int *)(param_1 + 0x3c) + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        *(undefined1 *)(local_10[0] + iVar3) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409be0(local_10 + 2,&DAT_0063c14c,1,10000);
    FUN_00409be0(local_10 + 1,&DAT_0063c14c,1,10000);
    FUN_0063c1c0(param_2,param_3);
    FUN_00409be0(local_10,&DAT_0063c188,1,0);
    FUN_00409be0(local_10 + 2,&DAT_0063c14c,1,0);
    FUN_00409be0(local_10 + 1,&DAT_0063c14c,1,0);
    puVar1 = puStack_2c;
  }
  puStack_2c = puVar1;
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0063c647;
  puStack_30 = (undefined1 *)0x63c62c;
  FUN_00409ce0(local_10,&DAT_0063c188,puVar1);
  puStack_30 = (undefined1 *)0x63c63f;
  FUN_00408e44(local_10 + 1,&DAT_0063c14c,2);
  return;
}
