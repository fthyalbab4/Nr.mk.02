// rea decompile_all
// name: FUN_005bc884
// address: 0x5bc884
// body: available
// range: 0x5bc884-0x5bc96a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc8a0 (push 0x5bc96b followed by fs-segment stack chaining); handler 0x5bc96b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bc884(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_28 = &LAB_005bc96b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_004081e8(&local_8,0);
  local_c = FUN_00563448();
  local_10 = FUN_0056348c();
  iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar6);
      if (*(char *)(iVar3 + 0x108) == '\0') {
        cVar2 = FUN_0060e5a4(iVar3,1);
        if (cVar2 != '\0') {
          FUN_0041636c(*(undefined4 *)(iVar3 + 4),&local_8);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = FUN_0048b9b8(*(undefined4 *)(*(int *)(DAT_0084f054 + 0x3a8) + 0x270),2);
  FUN_00408678(&local_14,L"mouse id: ",local_8);
  FUN_0048b914(uVar4,local_14);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005bc972;
  puStack_28 = (undefined1 *)0x5bc962;
  thunk_FUN_004072d8(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5bc96a;
  thunk_FUN_004072d8(&local_8);
  return;
}
