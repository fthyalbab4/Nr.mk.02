// rea decompile_all
// name: FUN_005888e0
// address: 0x5888e0
// body: available
// range: 0x5888e0-0x588974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5888f9 (push 0x588975 followed by fs-segment stack chaining); handler 0x588975 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005888e0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined4 in_stack_ffffffd4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined1 local_5;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00588975;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_5 = 0;
  if (-1 < DAT_00686b18 + -1) {
    iVar3 = 0;
    iVar4 = DAT_00686b18;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar1 = *(int *)(DAT_00686b10 + iVar3 * 4);
      if (iVar1 != 0) {
        cVar2 = FUN_0057241c(iVar1);
        if (cVar2 == '\0') {
          in_stack_ffffffd4 = *(undefined4 *)(DAT_00686b14 + iVar3 * 4);
          uStackY_34 = *(undefined4 *)PTR_DAT_00689674;
          FUN_0040875c(&local_c,4);
          FUN_006113b0(local_c,1);
          goto LAB_0058895f;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_5 = 1;
LAB_0058895f:
  *in_FS_OFFSET = uStackY_34;
  thunk_FUN_004072d8(&local_c,uStackY_34,in_stack_ffffffd4,&LAB_0058897c);
  return;
}
