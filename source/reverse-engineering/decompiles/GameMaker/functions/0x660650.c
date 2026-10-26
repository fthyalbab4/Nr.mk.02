// rea decompile_all
// name: FUN_00660650
// address: 0x660650
// body: available
// range: 0x660650-0x66071c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00660650(void)

{
  char cVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;

  pHVar2 = GetParent(*(HWND *)(*(int *)(in_stack_00000004 + 0x10) + 0xc));
  if (pHVar2 != (HWND)0x0) {
    iVar3 = FUN_004eab9c();
    iVar6 = *(int *)(DAT_0078a1e0 + 8);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      do {
        uVar4 = FUN_00660568(DAT_0078a1e0,iVar7);
        iVar5 = FUN_00513780(uVar4,1);
        if (iVar5 == iVar3) {
          uVar4 = FUN_00660568(DAT_0078a1e0,iVar7);
          cVar1 = FUN_00405c98(uVar4,&PTR_LAB_0065f4e8);
          if (cVar1 != '\0') {
            if (((*(int *)(*(int *)(in_stack_00000004 + 0x10) + 8) == 0x221) &&
                (cVar1 = FUN_00405c98(iVar5,&PTR_LAB_0050eaf4), cVar1 != '\0')) &&
               (iVar6 = FUN_00517050(iVar5), iVar6 == 1)) {
              FUN_00660568(DAT_0078a1e0,iVar7);
              FUN_00665298();
              return;
            }
            FUN_00660568(DAT_0078a1e0,iVar7);
            FUN_00664a74();
            return;
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}
