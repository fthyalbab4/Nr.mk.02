// rea decompile_all
// name: FUN_006f0224
// address: 0x6f0224
// body: available
// range: 0x6f0224-0x6f0296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0224(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a [2];

  iVar3 = *(int *)(param_1 + 0x5f0);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  puVar6 = &local_c;
  puVar5 = &local_b;
  puVar4 = local_a;
  uVar2 = FUN_006e663c(*(undefined4 *)(param_1 + 0x5e8),iVar3,param_3,puVar4,puVar5,puVar6);
  cVar1 = FUN_006375b8(uVar2,1,&local_10,puVar4,puVar5,puVar6);
  if (cVar1 != '\0') {
    FUN_006edd54(param_1,0x1d,local_10,local_a[0],*(undefined4 *)PTR_DAT_00781744,0,local_b,local_c)
    ;
  }
  return;
}
