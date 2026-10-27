// rea decompile_all
// name: FUN_0057b4cc
// address: 0x57b4cc
// body: available
// range: 0x57b4cc-0x57b611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057b4cc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = *(int *)((int)param_1 + 0x196);
  if (*(int *)(iVar2 + 8) == 0) {
    if ((param_1[0x14] != 0) && (param_1[0x21] == 0)) {
      if ((param_1[0x16] == 0) || (param_1[0x1a] == 0)) {
        if (param_1[0x18] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2d;
          (**(code **)*param_1)();
        }
        else {
          *(undefined4 *)((int)param_1 + 0x1be) = *(undefined4 *)(iVar2 + 0x14);
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1be) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 8) = 1;
      }
    }
    (*(code *)**(undefined4 **)((int)param_1 + 0x1b2))();
    (**(code **)(*(int *)((int)param_1 + 0x19e) + 8))();
    if (param_1[0x10] == 0) {
      if (*(int *)(iVar2 + 0x10) == 0) {
        (*(code *)**(undefined4 **)((int)param_1 + 0x1ba))();
      }
      (*(code *)**(undefined4 **)((int)param_1 + 0x1b6))();
      if (param_1[0x14] != 0) {
        (*(code *)**(undefined4 **)((int)param_1 + 0x1be))(param_1,*(undefined4 *)(iVar2 + 8));
      }
      uVar3 = 3;
      if (*(int *)(iVar2 + 8) == 0) {
        uVar3 = 0;
      }
      (*(code *)**(undefined4 **)((int)param_1 + 0x1a2))(param_1,uVar3);
      (*(code *)**(undefined4 **)((int)param_1 + 0x19a))(param_1,0);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 8) = 0;
    (*(code *)**(undefined4 **)((int)param_1 + 0x1be))(param_1,0);
    (*(code *)**(undefined4 **)((int)param_1 + 0x1a2))(param_1,2);
    (*(code *)**(undefined4 **)((int)param_1 + 0x19a))(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = 2;
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = 1;
    }
    *(int *)(param_1[2] + 0x10) = iVar1 + *(int *)(iVar2 + 0xc);
    if ((param_1[0xf] != 0) && (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x14) == 0)) {
      iVar2 = 2;
      if (param_1[0x1a] == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1[2] + 0x10) = *(int *)(param_1[2] + 0x10) + iVar2;
    }
  }
  return;
}
