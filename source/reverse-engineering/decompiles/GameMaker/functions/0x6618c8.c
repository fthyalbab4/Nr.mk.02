// rea decompile_all
// name: FUN_006618c8
// address: 0x6618c8
// body: available
// range: 0x6618c8-0x66197e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006618c8(int param_1,undefined4 *param_2)

{
  POINT Point;
  char cVar1;
  int iVar2;
  HWND pHVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34 [5];
  LONG local_20;
  LONG local_1c;
  undefined1 local_18 [8];

  puVar6 = local_34;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  local_38 = 0;
  uVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x33c);
  if (iVar5 != 0) {
    iVar2 = FUN_0044dd7c(*(undefined4 *)(iVar5 + 900));
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        Point.y = local_1c;
        Point.x = local_20;
        pHVar3 = WindowFromPoint(Point);
        FUN_006600ec(*(undefined4 *)(iVar5 + 900),iVar2);
        pHVar4 = (HWND)FUN_004f76a8();
        if (pHVar3 == pHVar4) {
          uVar7 = FUN_006600ec(*(undefined4 *)(iVar5 + 900),iVar2);
          uVar9 = 0;
          uVar8 = 0;
          FUN_004ee1d0(uVar7,&local_20,local_18,0,0);
          uVar7 = FUN_004f4014(uVar7,local_18,1,uVar8,uVar9);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    cVar1 = FUN_00405c98(uVar7,&PTR_FUN_0066ebd4);
    if (cVar1 != '\0') {
      local_38 = uVar7;
    }
  }
  return local_38;
}
