// rea decompile_all
// name: FUN_006289c4
// address: 0x6289c4
// body: available
// range: 0x6289c4-0x628b15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006289c4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  FUN_004847fc(*(undefined4 *)(param_1 + 0x388),0);
  FUN_004e1f40(param_1,0);
  cVar1 = FUN_006287a4();
  if (cVar1 == '\0') {
    FUN_004ebab0(*(undefined4 *)PTR_DAT_0068917c);
  }
  else if (*PTR_DAT_00688de8 == '\0') {
    FUN_0062878c();
    FUN_004e6d5c(DAT_0085b438);
    if (((*PTR_DAT_00689498 == '\0') && (DAT_0085b440 == 0)) && (DAT_0085b43c == 0)) {
      iVar2 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
      uVar4 = iVar2 - *(int *)(*(int *)PTR_DAT_0068950c + 0x48);
      iVar2 = (int)uVar4 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((uVar4 & 1) != 0);
      }
      iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
      uVar4 = iVar3 - *(int *)(*(int *)PTR_DAT_0068950c + 0x4c);
      iVar3 = (int)uVar4 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
      }
      (**(code **)(**(int **)PTR_DAT_0068950c + 0x98))
                (*(int **)PTR_DAT_0068950c,iVar2,iVar3,*(int *)(*(int *)PTR_DAT_0068950c + 0x4c),
                 *(undefined4 *)(*(int *)PTR_DAT_0068950c + 0x48));
      FUN_004e1f40(*(undefined4 *)PTR_DAT_0068950c,1);
      FUN_004847fc(*(undefined4 *)(*(int *)PTR_DAT_0068950c + 0x38c),1);
      while (*PTR_PTR_006891f0 == '\0') {
        FUN_004eb70c(*(undefined4 *)PTR_DAT_0068917c);
      }
      FUN_004e1f40(*(undefined4 *)PTR_DAT_0068950c,0);
      FUN_004eb70c(*(undefined4 *)PTR_DAT_0068917c);
    }
    FUN_004ebab0(*(undefined4 *)PTR_DAT_0068917c);
  }
  else {
    FUN_004847fc(*(undefined4 *)(param_1 + 0x38c),1);
  }
  return;
}
