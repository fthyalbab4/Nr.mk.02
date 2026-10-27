// rea decompile_all
// name: FUN_004619f4
// address: 0x4619f4
// body: available
// range: 0x4619f4-0x461a69 inclusive
// range: 0x461a71-0x461a9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461a12 (push 0x461a9c followed by fs-segment stack chaining); handler 0x461a9c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461a49 (push 0x461a6a followed by fs-segment stack chaining); handler 0x461a6a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004619f4(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 uStackY_20;
  int local_8;

  iVar3 = FUN_004399ac(DAT_0067d578);
  uStackY_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_20;
  local_8 = *(int *)(iVar3 + 8) + -1;
  if (-1 < local_8) {
    do {
      puStackY_24 = (undefined1 *)0x461a2f;
      uVar4 = FUN_00438ec4(iVar3,local_8);
      puStackY_24 = (undefined1 *)0x461a3a;
      cVar2 = FUN_0045c5a4(uVar4);
      if (cVar2 != '\0') {
        puStackY_28 = &LAB_00461a6a;
        uStackY_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStackY_2c;
        puStackY_24 = &stack0xfffffffc;
        FUN_00461b9c(uVar4);
        puVar1 = puStackY_24;
        *in_FS_OFFSET = uStackY_2c;
        puStackY_24 = (undefined1 *)0x461a71;
        puStackY_28 = (undefined1 *)0x461a69;
        FUN_0045c600(uVar4,uStackY_2c,puVar1);
        return;
      }
      local_8 = local_8 + -1;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStackY_20;
  uStackY_20 = 0x461a9b;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_0067d578 + 8));
  return;
}
