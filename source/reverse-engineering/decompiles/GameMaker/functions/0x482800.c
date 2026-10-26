// rea decompile_all
// name: FUN_00482800
// address: 0x482800
// body: available
// range: 0x482800-0x4828ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482800(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_stack_00000004;
  int local_8;

  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x34);
  if (iVar1 != 0) {
    iVar3 = FUN_004f3124(iVar1,in_stack_00000004);
    if (-1 < iVar3 + -1) {
      local_8 = 0;
      do {
        piVar4 = (int *)FUN_004f30e8(iVar1,local_8);
        if (piVar4 != *(int **)(in_stack_00000004 + -4)) {
          cVar2 = FUN_00405c98(piVar4,&PTR_LAB_0047857c);
          if (cVar2 != '\0') {
            iVar5 = (**(code **)(*piVar4 + 0x4c))();
            if (iVar5 != 0) {
              uVar6 = (**(code **)(*piVar4 + 0x4c))();
              cVar2 = FUN_00405c98(uVar6,&PTR_FUN_00509914);
              if (cVar2 != '\0') {
                iVar5 = (**(code **)(*piVar4 + 0x4c))();
                if (*(char *)(iVar5 + 0x95) != '\0') {
                  uVar6 = (**(code **)(*piVar4 + 0x4c))();
                  FUN_0050ade8(uVar6,0);
                }
              }
            }
            (**(code **)(*piVar4 + 0xf0))(piVar4,0);
          }
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
