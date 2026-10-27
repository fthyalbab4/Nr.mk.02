// rea decompile_all
// name: FUN_004c11bc
// address: 0x4c11bc
// body: available
// range: 0x4c11bc-0x4c1276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c11bc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  cVar1 = FUN_00405c98(param_2,&PTR_LAB_004a4a78);
  if (cVar1 != '\0') {
    *(int *)(param_2 + 0x1cc) = param_1;
  }
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    iVar2 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x288),param_2);
    if (iVar2 < 0) {
      uVar3 = FUN_004c2674(param_1,iVar2,*(undefined4 *)(param_2 + 0x40),
                           *(undefined4 *)(param_2 + 0x44));
      FUN_0043b100(*(undefined4 *)(param_1 + 0x288),uVar3,param_2);
      FUN_004c130c(param_1,0x443,uVar3,uVar3);
    }
    else {
      uVar3 = FUN_004c27bc(param_1,iVar2,*(undefined4 *)(param_2 + 0x40),
                           *(undefined4 *)(param_2 + 0x44));
    }
  }
  else {
    uVar3 = FUN_0043ae88(*(undefined4 *)(param_1 + 0x288),param_2);
    FUN_004c1904(param_1,uVar3);
  }
  if (*(char *)(param_1 + 0x2b2) == '\0') {
    FUN_004c1000(param_1,uVar3);
  }
  else {
    FUN_004c1000(param_1,0);
  }
  FUN_004c2410(param_1);
  return;
}
