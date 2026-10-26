// rea decompile_all
// name: FUN_00754618
// address: 0x754618
// body: available
// range: 0x754618-0x754692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00754618(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [12];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar3 = 0;
  *param_2 = 0;
  if (*(char *)(param_1 + 0x71) != '\0') {
    iVar1 = FUN_0074dbe8(param_1);
    if (*(int *)(iVar1 + 8) == 1) {
      uVar2 = FUN_0074dbe8(param_1);
      FUN_0074d1bc(uVar2,0,auStack_2c);
      if (local_20 == 0) {
        uVar2 = FUN_0074e8a0(param_1,local_18);
        uVar3 = FUN_007541f4(&PTR_LAB_00752a60,uVar2,local_1c);
        if ((char)uVar3 != '\0') {
          uVar2 = FUN_00738da0(&PTR_LAB_00738238,1,uVar2,local_1c);
          *param_2 = uVar2;
        }
      }
    }
  }
  return uVar3;
}
