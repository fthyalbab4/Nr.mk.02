// rea decompile_all
// name: FUN_006ef058
// address: 0x6ef058
// body: available
// range: 0x6ef058-0x6ef139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ef058(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *local_18;
  int local_14;

  FUN_0051acd0(DAT_00790120);
  local_14 = 0;
  do {
    uVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0));
    FUN_00701cf4(&DAT_00700d94,1,uVar2);
    local_18 = &local_14;
    cVar1 = FUN_006439f8(&local_18,*(undefined4 *)(param_1 + 0x5ec),
                         *(int *)(*(int *)(param_1 + 0x5e8) + 4) == 1);
    if (cVar1 != '\0') {
      FUN_006ed0a0(param_1);
      FUN_006e6b10(*(undefined4 *)(param_1 + 0x5e8),*(undefined4 *)(param_1 + 0x5f0),local_18);
      *(undefined1 *)(param_1 + 0x5f6) = 1;
      FUN_006ed868(param_1,1);
    }
    if (local_14 < 0) {
      *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + -1;
    }
    if (0 < local_14) {
      *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + 1;
    }
    FUN_00405a7c(local_18);
  } while (local_14 != 0);
  FUN_0051acd8(DAT_00790120);
  return;
}
