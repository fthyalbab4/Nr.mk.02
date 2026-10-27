// rea decompile_all
// name: FUN_005b3504
// address: 0x5b3504
// body: available
// range: 0x5b3504-0x5b35d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b3504(int param_1,int param_2,undefined4 param_3,undefined4 param_4,short param_5,
                 int param_6)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;

  if ((*(int *)(param_1 + 4) != 0) && (param_2 != 0)) {
    cVar2 = FUN_00462b64(param_2);
    if (cVar2 == '\a') {
      uVar1 = **(undefined4 **)(param_1 + 0x30);
      sVar3 = FUN_00410538();
      sVar3 = sVar3 + param_5;
      uVar4 = FUN_00410538();
      uVar5 = FUN_00410538();
      uVar7 = 1;
      iVar6 = FUN_00410538();
      FUN_00703f98(uVar1,param_2,iVar6 + param_6,uVar7,uVar5,uVar4,sVar3);
    }
  }
  return;
}
