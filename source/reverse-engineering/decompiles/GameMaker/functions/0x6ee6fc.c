// rea decompile_all
// name: FUN_006ee6fc
// address: 0x6ee6fc
// body: available
// range: 0x6ee6fc-0x6ee785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ee6fc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = FUN_005b325c(&DAT_005b27dc,1);
  cVar1 = FUN_0063aecc(uVar2,PTR_DAT_007821fc);
  if (cVar1 == '\0') {
    FUN_00405a7c(uVar2);
  }
  else {
    FUN_006ed0a0(param_1);
    *(undefined4 *)(param_1 + 0x608) = 0xfffffffe;
    uVar3 = FUN_006e6734(&LAB_006e56d8,1,uVar2);
    FUN_006ee3e0(param_1,uVar3,*(undefined4 *)(*(int *)(param_1 + 0x5e8) + 4));
    FUN_00405a7c(uVar2);
    FUN_00405a7c(uVar3);
    *(undefined4 *)(param_1 + 0x5f0) = 0;
    *(undefined1 *)(param_1 + 0x5f6) = 1;
    FUN_006ed868(param_1,1);
  }
  return;
}
