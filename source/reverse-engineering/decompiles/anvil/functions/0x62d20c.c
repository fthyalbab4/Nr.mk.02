// rea decompile_all
// name: FUN_0062d20c
// address: 0x62d20c
// body: available
// range: 0x62d20c-0x62d36e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d20c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;

  iVar5 = 0;
  local_18 = *(int *)(*(int *)PTR_DAT_0068939c + 0xc);
  local_1c = 0;
  local_20 = *(int *)(*(int *)PTR_DAT_0068939c + 0x10);
  cVar1 = FUN_005798a4(*(undefined4 *)(param_1 + 8));
  if ((cVar1 != '\0') || (cVar1 = FUN_005798a4(*(undefined4 *)(param_1 + 0x44)), cVar1 != '\0')) {
    iVar5 = FUN_004048b8();
    local_18 = FUN_004048b8();
    local_1c = FUN_004048b8();
    local_20 = FUN_004048b8();
  }
  iVar2 = FUN_004048b8();
  iVar3 = FUN_004048b8();
  iVar4 = 100;
  while( true ) {
    FUN_004047b8(local_18 - iVar5);
    if (0 < iVar2) {
      FUN_004102e4();
    }
    FUN_004047b8(local_20 - local_1c);
    if (0 < iVar3) {
      FUN_004102e4();
    }
    cVar1 = FUN_005b772c(param_1);
    if (cVar1 != '\0') break;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  }
  FUN_0060ddec(param_1);
  return;
}
