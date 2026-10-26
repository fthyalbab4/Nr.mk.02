// rea decompile_all
// name: FUN_00560294
// address: 0x560294
// body: available
// range: 0x560294-0x560353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560294(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  int local_24;
  int *local_c;
  int local_8;

  FUN_00439168(param_1,0x20);
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar2 = FUN_0055b0e8();
      *(undefined4 *)(param_1 + 0x30) = uVar2;
    }
    piVar4 = *(int **)(param_1 + 0x30);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x34);
    if (piVar4 == (int *)0x0) {
      return;
    }
  }
  local_c = *(int **)(param_1 + 0x2c);
  iVar3 = FUN_0055ffdc(param_1);
  if (0 < iVar3) {
    FUN_005600c8(param_1,0);
  }
  FUN_0053aabc(&local_28,0x1c);
  iVar3 = 0;
  while ((piVar4 < local_c && (*(int *)(param_1 + 8) != 0x1000))) {
    cVar1 = FUN_005603cc(param_1,*piVar4,&local_8);
    if ((cVar1 != '\0') && (iVar3 != *piVar4)) {
      local_28 = *piVar4 - local_8;
      iVar3 = *piVar4;
      local_24 = local_24 + 1;
      FUN_005601e4(param_1,&local_28);
    }
    piVar4 = piVar4 + 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00404340();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}
