// rea decompile_all
// name: FUN_0055cf98
// address: 0x55cf98
// body: available
// range: 0x55cf98-0x55d051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055cf98(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  char local_14;

  local_1c = FUN_0055cd28(param_1,param_2);
  local_18 = FUN_0055cca8(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 9));
  local_20 = 0;
  local_14 = '\0';
  local_24 = 0;
  uVar3 = 0;
  do {
    cVar1 = FUN_0055cf60(param_1,&local_18,&local_24);
    if (cVar1 == '\0') {
LAB_0055d029:
      if (local_14 == '\0') {
        FUN_00408194(param_3,0);
      }
      else {
        FUN_0055cac8(param_1,local_20,param_3);
      }
      return;
    }
    uVar2 = uVar3 + local_24;
    if (param_2 < uVar2) {
      if (uVar3 < local_1c) {
        local_20 = 0;
      }
      else {
        local_14 = '\x01';
      }
      goto LAB_0055d029;
    }
    FUN_0055cf60(param_1,&local_18,&local_24);
    local_20 = local_20 + local_24;
    uVar3 = uVar2;
  } while( true );
}
