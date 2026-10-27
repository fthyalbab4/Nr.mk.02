// rea decompile_all
// name: FUN_00516224
// address: 0x516224
// body: available
// range: 0x516224-0x5162fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516224(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c [16];

  if (param_2 != (int *)0x0) {
    FUN_00515ba8(param_1);
    iVar1 = (**(code **)(*param_2 + 0x30))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_2 + 0x24))();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
        FUN_00464480(piVar2,7);
        uVar3 = (**(code **)(*param_2 + 0x30))();
        (**(code **)(*piVar2 + 0x44))(piVar2,uVar3);
        uVar3 = (**(code **)(*param_2 + 0x24))();
        (**(code **)(*piVar2 + 0x38))(piVar2,uVar3);
        iVar1 = FUN_00463124(piVar2);
        FUN_0045c464(*(undefined4 *)(iVar1 + 0x48),0);
        iVar1 = FUN_00463124(piVar2);
        FUN_0045c2e4(*(undefined4 *)(iVar1 + 0x48),1);
        piVar4 = (int *)FUN_00463124(piVar2);
        puVar5 = auStack_1c;
        (**(code **)(*piVar4 + 0x10))(piVar4,auStack_1c);
        piVar4 = (int *)FUN_00463124(piVar2);
        (**(code **)(*piVar4 + 0x4c))(piVar4,puVar5);
        piVar4 = (int *)FUN_00463124(piVar2);
        (**(code **)(*piVar4 + 0x3c))(piVar4,0,0,param_2);
        FUN_00516104(param_1,piVar2,1);
        FUN_00405fdc(piVar2);
      }
    }
  }
  return;
}
