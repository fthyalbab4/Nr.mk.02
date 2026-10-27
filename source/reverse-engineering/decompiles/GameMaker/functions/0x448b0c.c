// rea decompile_all
// name: FUN_00448b0c
// address: 0x448b0c
// body: available
// range: 0x448b0c-0x448ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448b29 (push 0x448ba4 followed by fs-segment stack chaining); handler 0x448ba4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448b0c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;

  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  if ((DAT_007740a8 != 0) && (iVar2 = *(int *)(DAT_007740a8 + 8) + -1, -1 < iVar2)) {
    do {
      puVar1 = (undefined4 *)FUN_0043b048(DAT_007740a8,iVar2);
      if ((puVar1[2] == 0) && ((param_1 != 0 && (param_1 == *(int *)*puVar1)))) {
        FUN_0043aee0(DAT_007740a8,iVar2);
        FUN_004092f0(*puVar1,&DAT_00436ea0);
        FUN_00404338(puVar1,0xc);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  *in_FS_OFFSET = uStackY_1c;
  uStackY_1c = 0x448ba3;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  return;
}
