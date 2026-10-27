// rea decompile_all
// name: FUN_00599b4c
// address: 0x599b4c
// body: available
// range: 0x599b4c-0x599c79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00599b4c(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 local_10;

  piVar1 = *(int **)(param_1 + 0xb0);
  local_10 = param_3;
  do {
    FUN_0043f488(piVar1,&local_10,1);
    if ((char)local_10 == '!') {
      FUN_0043f488(piVar1,&local_10,1);
      if ((char)local_10 == '\x01') {
        FUN_0043f488(piVar1,(int)&local_10 + 1,1);
        (**(code **)(*piVar1 + 0x14))(piVar1,local_10._1_1_,CONCAT22(extraout_var,1));
        while( true ) {
          FUN_0043f488(piVar1,(int)&local_10 + 1,1);
          if (local_10._1_1_ == '\0') break;
          (**(code **)(*piVar1 + 0x14))(piVar1,local_10._1_1_,CONCAT22(extraout_var_00,1));
        }
      }
      else if ((char)local_10 == -7) {
        FUN_0043f488(piVar1,(int)&local_10 + 1,1);
        (**(code **)(*piVar1 + 0x14))(piVar1,(local_10 >> 8 & 0xff) + 1,CONCAT22(extraout_var_01,1))
        ;
      }
      else if ((char)local_10 == -2) {
        while( true ) {
          FUN_0043f488(piVar1,(int)&local_10 + 1,1);
          if (local_10._1_1_ == '\0') break;
          (**(code **)(*piVar1 + 0x14))(piVar1,local_10._1_1_,CONCAT22(extraout_var_02,1));
        }
      }
      else if ((char)local_10 == -1) {
        while( true ) {
          FUN_0043f488(piVar1,(int)&local_10 + 1,1);
          if (local_10._1_1_ == '\0') break;
          (**(code **)(*piVar1 + 0x14))(piVar1,local_10._1_1_,CONCAT22(extraout_var_03,1));
        }
      }
    }
  } while (((char)local_10 != ',') && ((char)local_10 != ';'));
  return local_10 & 0xff;
}
