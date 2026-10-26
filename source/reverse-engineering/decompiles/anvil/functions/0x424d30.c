// rea decompile_all
// name: FUN_00424d30
// address: 0x424d30
// body: available
// range: 0x424d30-0x424e18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424d30(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int *local_10;

  local_10 = param_3;
  if (((param_1->n1).n2.vt & 0xbfe8) != 0) {
    FUN_00424a20(param_1);
  }
  uVar1 = (param_2->n1).n2.vt;
  if (uVar1 < 0x14) {
    VariantCopy(param_1,param_2);
    FUN_004246ec();
  }
  else if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0x100;
    *(undefined4 *)((int)&param_1->n1 + 8) = 0;
    FUN_0040732c((undefined1 *)((int)&param_1->n1 + 8),*(undefined4 *)((int)&param_2->n1 + 8));
  }
  else if (uVar1 == 0x102) {
    (param_1->n1).n2.vt = 0x102;
    *(undefined4 *)((int)&param_1->n1 + 8) = 0;
    FUN_00408194((undefined1 *)((int)&param_1->n1 + 8),*(undefined4 *)((int)&param_2->n1 + 8));
  }
  else {
    uVar1 = (param_2->n1).n2.vt;
    if ((uVar1 == 0x4102) || (uVar1 == 0x4100)) {
      (param_1->n1).n2.vt = uVar1;
      *(undefined4 *)((int)&param_1->n1 + 8) = *(undefined4 *)((int)&param_2->n1 + 8);
    }
    else if (uVar1 == 0x101) {
      (param_1->n1).n2.vt = 0x101;
      *(undefined4 *)((int)&param_1->n1 + 8) = *(undefined4 *)((int)&param_2->n1 + 8);
      (*DAT_0068ef30)(param_1);
    }
    else if ((uVar1 & 0x2000) == 0) {
      cVar2 = FUN_0042b560(uVar1,&local_10);
      if (cVar2 == '\0') {
        VariantCopy(param_1,param_2);
        FUN_004246ec();
      }
      else {
        (**(code **)(*local_10 + 0x28))(local_10,param_1,param_2,0);
      }
    }
    else {
      FUN_00424b5c(param_1,param_2,&LAB_00424d28);
    }
  }
  return;
}
