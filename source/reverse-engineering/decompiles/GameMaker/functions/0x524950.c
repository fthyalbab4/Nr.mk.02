// rea decompile_all
// name: FUN_00524950
// address: 0x524950
// body: available
// range: 0x524950-0x524a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524950(int param_1,int param_2,undefined4 param_3,uint param_4,char param_5,LONG *param_6
                 )

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  tagRECT local_1c;
  int local_c;
  int local_8;

  puVar4 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  local_1c.left = *param_6;
  local_1c.top = param_6[1];
  local_1c.right = param_6[2];
  local_1c.bottom = param_6[3];
  local_c = param_2;
  local_8 = param_1;
  FUN_0045bda4(*(undefined4 *)(param_2 + 0x48),1);
  if ((param_5 == '\x01') && (*(char *)(local_8 + 0x31) == '\0')) {
    OffsetRect(&local_1c,1,1);
    FUN_0045b0d0(*(undefined4 *)(local_c + 0x40),0xff000014);
    param_4 = param_4 | 0x105;
    uVar2 = param_4;
    uVar1 = FUN_0045ce2c(local_c);
    FUN_0052475c(uVar1,param_3,&local_1c,uVar2,puVar4);
    OffsetRect(&local_1c,-1,-1);
    FUN_0045b0d0(*(undefined4 *)(local_c + 0x40),0xff000010);
    uVar1 = FUN_0045ce2c(local_c);
    FUN_0052475c(uVar1,param_3,&local_1c,param_4,puVar3);
  }
  else {
    param_4 = param_4 | 0x105;
    uVar1 = FUN_0045ce2c(local_c);
    FUN_0052475c(uVar1,param_3,&local_1c,param_4,puVar5);
  }
  return;
}
