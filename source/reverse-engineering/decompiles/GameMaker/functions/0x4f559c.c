// rea decompile_all
// name: FUN_004f559c
// address: 0x4f559c
// body: available
// range: 0x4f559c-0x4f563a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f559c(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HBRUSH hbr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  RECT local_1c;

  uVar2 = FUN_00503a6c();
  cVar1 = FUN_00503b78(uVar2);
  if (((cVar1 == '\0') || (param_1[0xd] == 0)) || ((*(byte *)((int)param_1 + 0x52) & 4) == 0)) {
    if (((char)param_1[0x98] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
      hbr = (HBRUSH)FUN_0045bc84(param_1[0x70]);
      (**(code **)(*param_1 + 0x54))(param_1,&local_1c);
      FillRect(*(HDC *)(param_2 + 4),&local_1c,hbr);
    }
  }
  else if (*(char *)(param_1[0xd] + 0x260) == '\0') {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = FUN_004f76a8(param_1);
    FUN_00503e2c(uVar2,uVar3,*(undefined4 *)(param_2 + 4),uVar4,uVar5,uVar6);
  }
  else {
    FUN_004eafbc(param_1,*(undefined4 *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}
