// rea decompile_all
// name: FUN_00664a74
// address: 0x664a74
// body: available
// range: 0x664a74-0x664b2a inclusive
// range: 0x664b32-0x664b38 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x664ab5 (push 0x664b2b followed by fs-segment stack chaining); handler 0x664b2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664a74(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x39c) != '\0') || (*(int *)(param_1 + 800) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x39c) = 1;
  puStack_20 = &LAB_00664b2b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar4 = *(undefined4 *)(param_1 + 800);
  bVar1 = false;
  iVar2 = FUN_00517050(uVar4);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_0051709c(uVar4,iVar5);
      if (*(char *)(iVar3 + 0x29a) == '\x02') {
        bVar1 = true;
        uVar4 = FUN_0051709c(uVar4,iVar5);
        FUN_006651f4(param_1,uVar4);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (!bVar1) {
    FUN_00665298(param_1);
  }
  *in_FS_OFFSET = uStack_24;
  *(undefined1 *)(param_1 + 0x39c) = 0;
  return;
}
