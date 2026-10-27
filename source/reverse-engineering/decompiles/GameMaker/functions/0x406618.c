// rea decompile_all
// name: FUN_00406618
// address: 0x406618
// body: available
// range: 0x406618-0x406683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406618(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_4c;
  int iStack_44;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  int local_14;

  if (param_1 == 0) {
    param_1 = FUN_00406d7c(0xd8);
  }
  local_1c = local_18;
  uStack_20 = 7;
  uStack_24 = 1;
  uStack_28 = 0xeedfade;
  puVar2 = local_18;
  local_14 = param_1;
  if (DAT_0078301c != (code *)0x0) {
    uStack_4c = 7;
    pcStack_58 = DAT_0078301c;
    uStack_5c = 0x406664;
    puStack_54 = local_18;
    iStack_44 = param_1;
    puStack_30 = &stack0x00000004;
    iVar3 = FUN_00404414();
    pcVar1 = pcStack_58;
    puStack_54 = (undefined1 *)0x0;
    if (iVar3 != 0) {
      puStack_54 = *(undefined1 **)(iVar3 + 0xc);
    }
    pcStack_58 = (code *)0x1;
    uStack_5c = 0xeedfade;
    (*pcVar1)(&uStack_5c);
    puVar2 = local_1c;
  }
  local_1c = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0040667e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00783014)();
  return;
}
