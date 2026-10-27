// rea decompile_all
// name: FUN_0044c10c
// address: 0x44c10c
// body: available
// range: 0x44c10c-0x44c1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44c12a (push 0x44c1cc followed by fs-segment stack chaining); handler 0x44c1cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044c10c(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_24 = &LAB_0044c1cc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_3 != 0) {
    FUN_00408194(param_1 + 0x20,param_3);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  if (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0) {
    FUN_0041be80(&LAB_0044abc4,1,PTR_LAB_00688bb4);
    FUN_00406ab4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x14),iVar5);
      FUN_0040b280(&local_8,*(undefined4 *)(iVar3 + 4));
      FUN_0040b2ac(&local_c,local_8,&DAT_0044c1dc);
      cVar2 = (**(code **)(*local_c + 0x30))(local_c,param_2);
      if (cVar2 != '\0') {
        (**(code **)(*local_c + 0x34))(local_c,param_2);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0044c1d3;
  puStack_24 = (undefined1 *)0x44c1c3;
  FUN_0040b268(&local_c,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x44c1cb;
  FUN_0040b268(&local_8);
  return;
}
