// rea decompile_all
// name: FUN_0054c93c
// address: 0x54c93c
// body: available
// range: 0x54c93c-0x54c9f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c95a (push 0x54c9f9 followed by fs-segment stack chaining); handler 0x54c9f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c93c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  uint local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0054c9f9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  iVar2 = FUN_005415b8(param_1[0xb]);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      uVar3 = FUN_00548da8(param_1[0xb],iVar6);
      uVar4 = FUN_005449dc(uVar3,1);
      uVar3 = FUN_00548da8(param_1[0xb],iVar6);
      uVar5 = FUN_005449dc(uVar3,3);
      if ((int)local_8 < (int)((uVar4 & 0xffff) + (uVar5 & 0xffff))) {
        FUN_0040b75c(&PTR_DAT_0053b3b8,&local_c);
        FUN_0053b600(local_c);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(ushort *)(param_1[0xc] + 8) != local_8) {
    *(undefined2 *)(param_1[0xc] + 8) = (undefined2)local_8;
    FUN_0054c55c(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054ca00;
  puStack_20 = (undefined1 *)0x54c9f8;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
